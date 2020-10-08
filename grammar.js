
module.exports = grammar( {
	name: 'kfg',

	rules: {
		source_file: $ => seq( repeat( $.header_line ) , repeat( $.line ) ) , //, optional( $.remainder_line ) ) ,
		header_line: $ => prec( 2 , seq( optional( $.header_line_content ) , / *\n/ ) ) ,
		line: $ => prec.right( 1 , seq( optional( $.indent ) , optional( $.line_content ) , / *\n/ ) ) ,
		//remainder_line: $ => seq( optional( $.indent ) , $.line_content , / */ ) ,
		indent: $ => choice( repeat1( '\t' ) , repeat1( '    ' ) ) ,
		header_line_content: $ => prec( 1 , choice(
			$.comment ,
			$.meta_tag
		) ) ,
		line_content: $ => choice(
			$.comment ,
			$.tag ,
			$.property ,
			$.list_entry ,
			$.value_definition
		) ,

		comment: $ => seq( '#' , /[^\n]*/ ) ,
		meta_tag: $ => seq( '[[' , $.tag_content , ']]' ) ,
		tag: $ => seq( '[' , $.tag_content , ']' ) ,
		property: $ => seq( choice( $.key , $.quoted_key ) , / *:/ , optional( seq( / +/ , $.value_definition ) ) ) ,
		list_entry: $ => seq( '-' , optional( seq( / +/ , $.value_definition ) ) ) ,
		value_definition: $ => seq( optional( $.operator ) , optional( $.class ) , choice( $.include_definition , $.value ) ) ,
		
		class: $ => seq( '<' , /[a-zA-Z0-9_-]+/  , '>' ) ,
		
		include_definition: $ => seq( /@@?/ , $.include_path , optional( $.include_ref_definition ) ) ,
		include_path: $ => /[^\n:]*/ ,
		include_ref_definition: $ => seq( ':' , $.include_ref ) ,
		include_ref: $ => /[^\n:]*/ ,
		
		value: $ => prec( -1 , choice(
			$.constant ,
			$.numbers ,
			$.quoted_string ,
			$.quoted_template ,
			$.quoted_template_element ,
			$.introduced_string ,
			$.introduced_template ,
			$.introduced_template_element ,
			$.expression ,
			$.ref ,
			//$.implicit_string ,
			//$.child ,
		) ) ,
		// It would be nice to use external with INDENT and DEDENT here...
		child: $ => prec( -20 , / */ ) ,
		
		tag_content: $ => /[^\[\]\n]+/ ,
		key: $ => /[a-zA-Z][a-zA-Z0-9_-]*/ ,
		
		// Values
		constant: $ => /null|true|false|on|off|yes|no|NaN|Infinity|-Infinity/ ,
		numbers: $ => /-?[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)?/ ,
		quoted_string: $ => seq( '"' , /(\\.|[^"\\])*/ , '"' ) ,
		quoted_template: $ => seq( /\$\$?"/ , /(\\.|[^"\\])*/ , '"' ) ,
		quoted_template_element: $ => seq( /\$\$?%"/ , /(\\.|[^"\\])*/ , '"' ) ,
		introduced_string: $ => seq( />>?/ , optional( seq( ' ' , /[^\n]*/ ) ) ) ,
		introduced_template: $ => seq( /\$\$?>>?/ , optional( seq( ' ' , /[^\n]*/ ) ) ) ,
		introduced_template_element: $ => seq( /\$\$%?>>?/ , optional( seq( ' ' , /[^\n]*/ ) ) ) ,
		expression: $ => seq( /\$\$=/ , optional( seq( ' ' , /[^\n]*/ ) ) ) ,
		ref: $ => seq( /\$\$?/ , /[a-zA-Z0-9.\$\[\]_-]*/ ) ,
		implicit_string: $ => prec( -1 , /[^\n]+/ ) ,
		
		// TODO, placeholders or wip
		quoted_key: $ => /"[a-zA-Z][a-zA-Z0-9_-]*"/ ,
		operator: $ => prec( -1 , seq( '(' , /[^\n\(\)]+/ , ')' ) ) ,
		
	}
} ) ;

