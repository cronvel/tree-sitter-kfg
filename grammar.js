
module.exports = grammar( {
	name: 'kfg',

	rules: {
		source_file: $ => seq( repeat( $._meta_tag_line ) , repeat( $._line ) , optional( $._remainder_line ) ) ,
		_meta_tag_line: $ => prec( 1 , seq( optional( choice( $.meta_tag , $.comment ) ) , '\n' ) ) ,
		_line: $ => seq( optional( $._indent ) , optional( $.line_content ) , '\n' ) ,
		_remainder_line: $ => seq( optional( $._indent ) , $.line_content ) ,
		_indent: $ => choice( repeat1( '\t' ) , repeat1( '    ' ) ) ,
		line_content: $ => choice(
			$.comment ,
			$.tag ,
			$.object_property ,
			$.array_element ,
		) ,

		comment: $ => seq( '#' , /[^\n]*/ ) ,
		meta_tag: $ => seq( '[[' , $.tag_content , ']]' ) ,
		tag: $ => seq( '[' , $.tag_content , ']' ) ,
		object_property: $ => seq( $.key , / *: */ , $.value ) ,
		array_element: $ => seq( '-' , / +/ , $.value ) ,
		
		tag_content: $ => /[^\[\]\n]+/ ,
		key: $ => /[a-zA-Z][a-zA-Z0-9_-]*/ ,
		value: $ => /[^\n]*/ ,
	}
} ) ;

