%{
    #include <stdio.h>
    extern int yylex();
    void yyerror(char *s);
    extern char* yytext;
%}


%union{
    int intval;
    float floatval;
    char charval;
    char *strval;
}

%token <strval> IDENTIFIER
%token <intval> INTEGERCONST
%token <floatval> FLOATINGCONST
%token <charval> CHARCONST
%token <strval> STRINGLITERAL

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF 
%token INLINE INT LONG REGISTER RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF 
%token UNION UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY

%token SQUARE_BRACE_OPEN SQUARE_BRACE_CLOSE PARENTHESIS_OPEN PARENTHESIS_CLOSE CURLY_BRACE_OPEN CURLY_BRACE_CLOSE 
%token DOT ARROW INCREMENT DECREMENT BITWISE_AND MULTIPLY ADD SUBTRACT BITWISE_NOR NOT DIVIDE MODULO 
%token LSHIFT RSHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL NOT_EQUAL BITWISE_XOR BITWISE_OR 
%token LOGICAL_AND LOGICAL_OR QUESTION_MARK COLON SEMICOLON ELLIPSIS 
%token ASSIGN MULTIPLY_ASSIGN DIVIDE_ASSIGN MODULO_ASSIGN ADD_ASSIGN SUBTRACT_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN COMMA HASH

%nonassoc PARENTHESIS_CLOSE
%nonassoc ELSE

%start translation_unit

%%

primary_exp: IDENTIFIER { printf("primary-expression ---> %s\n",$1); }
            | constant { printf("primary-expression ---> constant\n"); }
            | STRINGLITERAL { printf("primary-expression ---> %s\n",$1); }
            | PARENTHESIS_OPEN expression PARENTHESIS_CLOSE { printf("primary-expression ---> ( expression )\n"); }
            ;

constant: INTEGERCONST { printf("constant ---> %d\n",$1); }
        | FLOATINGCONST { printf("constant ---> %f\n",$1); }
        | CHARCONST { printf("constant ---> %c\n",$1); }
        ;

postfix_exp: primary_exp { printf("postfix-expression ---> primary-expression\n"); }
            | postfix_exp SQUARE_BRACE_OPEN expression SQUARE_BRACE_CLOSE { printf("postfix-expression ---> postfix-expression [ expression ]\n"); }
            | postfix_exp PARENTHESIS_OPEN argument_exp_list_opt PARENTHESIS_CLOSE { printf("postfix-expression ---> postfix-expression ( argument-expression-list-opt )\n"); }
            | postfix_exp DOT IDENTIFIER { printf("postfix-expression ---> postfix-expression . identifier\n"); }
            | postfix_exp ARROW IDENTIFIER { printf("postfix-expression ---> postfix-expression -> identifier\n"); }
            | postfix_exp INCREMENT { printf("postfix-expression ---> postfix-expression ++\n"); }
            | postfix_exp DECREMENT { printf("postfix-expression ---> postfix-expression --\n"); }
            | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE { printf("postfix-expression ---> ( type-name ) { initializer-list }\n"); }
            | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE { printf("postfix-expression ---> ( type-name ) { initializer-list , }\n"); }
            ;

argument_exp_list_opt: argument_exp_list { printf("argument-expression-list-opt ---> argument-expression-list\n"); }
                        | { printf("argument-expression-list-opt ---> EPSILON\n"); }
                        ;

argument_exp_list: assignment_exp { printf("argument-expression-list ---> assignment-expression\n"); }
                    | argument_exp_list COMMA assignment_exp { printf("argument-expression-list ---> argument-expression-list , assignment-expression\n"); }
                    ;

unary_exp: postfix_exp { printf("unary-expression ---> postfix-expression\n"); }
            | INCREMENT unary_exp { printf("unary-expression ---> ++ unary-expression\n"); }
            | DECREMENT unary_exp { printf("unary-expression ---> -- unary-expression\n"); }
            | unary_op cast_exp { printf("unary-operator ---> cast-expression\n"); }
            | SIZEOF unary_exp { printf("unary-expression ---> sizeof unary-expression\n"); }
            | SIZEOF PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE { printf("unary-expression ---> sizeof ( type-name )\n"); }
            ;

unary_op: BITWISE_AND { printf("unary-operator ---> &\n"); }
        | MULTIPLY { printf("unary-operator ---> *\n"); }
        | ADD { printf("unary-operator ---> +\n"); }
        | SUBTRACT { printf("unary-operator ---> -\n"); }
        | BITWISE_NOR { printf("unary-operator ---> ~\n"); }
        | NOT { printf("unary-operator ---> !\n"); }
        ;

cast_exp: unary_exp { printf("cast-expression ---> unary-expression\n"); }
        | PARENTHESIS_OPEN type_name PARENTHESIS_CLOSE cast_exp { printf("cast-expression ---> ( type-name ) cast-expression\n"); }
        ;
    
multiplicative_exp: cast_exp { printf("multiplicative-expression ---> cast-expression\n"); }
                    | multiplicative_exp MULTIPLY cast_exp { printf("multiplicative-expression ---> multiplicative-expression * cast-expression\n"); }
                    | multiplicative_exp DIVIDE cast_exp { printf("multiplicative-expression ---> multiplicative-expression / cast-expression\n"); }
                    | multiplicative_exp MODULO cast_exp { printf("multiplicative-expression ---> multiplicative-expression %% cast-expression\n"); }
                    ;

additive_exp: multiplicative_exp { printf("additive-expression ---> multiplicative-expression\n"); }
            | additive_exp ADD multiplicative_exp { printf("additive-expression ---> additive-expression + multiplicative-expression\n"); }
            | additive_exp SUBTRACT multiplicative_exp { printf("additive-expression ---> additive-expression - multiplicative-expression\n"); }
            ;

shift_exp: additive_exp { printf("shift-expression ---> additive-expression\n"); }
            | shift_exp LSHIFT additive_exp { printf("shift-expression ---> shift-expression << additive-expression\n"); }
            | shift_exp RSHIFT additive_exp { printf("shift-expression ---> shift-expression >> additive-expression\n"); }
            ;

relational_exp: shift_exp { printf("relational-expression ---> shift-expression\n"); }
                | relational_exp LESS_THAN shift_exp { printf("relational-expression ---> relational-expression < shift-expression\n"); }
                | relational_exp GREATER_THAN shift_exp { printf("relational-expression ---> relational-expression > shift-expression\n"); }
                | relational_exp LESS_THAN_EQUAL shift_exp { printf("relational-expression ---> relational-expression <= shift-expression\n"); }
                | relational_exp GREATER_THAN_EQUAL shift_exp { printf("relational-expression ---> relational-expression >= shift-expression\n"); }
                ;

equality_exp: relational_exp { printf("equality-expression ---> relational-expression\n"); }
            | equality_exp EQUAL relational_exp { printf("equality-expression ---> equality-expression == relational-expression\n"); }
            | equality_exp NOT_EQUAL relational_exp { printf("equality-expression ---> equality-expression != relational-expression\n"); }
            ;

and_exp: equality_exp { printf("AND-expression ---> equality-expression\n"); }
        | and_exp BITWISE_AND equality_exp { printf("AND-expression ---> AND-expression & equality-expression\n"); }
        ;

exclusive_or_exp: and_exp { printf("exclusive-OR-expression ---> AND-expression\n"); }
                | exclusive_or_exp BITWISE_XOR and_exp { printf("exclusive-OR-expression ---> exclusive-OR-expression ^ AND-expression\n"); }
                ;

inclusive_or_exp: exclusive_or_exp { printf("inclusive-OR-expression ---> exclusive-OR-expression\n"); }
                | inclusive_or_exp BITWISE_OR exclusive_or_exp { printf("inclusive-OR-expression ---> inclusive-OR-expression | exclusive-OR-expression\n"); }
                ;

logical_and_exp: inclusive_or_exp { printf("logical-AND-expression ---> inclusive-OR-expression\n"); }
                | logical_and_exp LOGICAL_AND inclusive_or_exp { printf("logical-AND-expression ---> logical-AND-expression && inclusive-OR-expression\n"); }
                ;

logical_or_exp: logical_and_exp { printf("logical-OR-expression ---> logical-AND-expression\n"); }
                | logical_or_exp LOGICAL_OR logical_and_exp { printf("logical-OR-expression ---> logical_or_expression || logical-AND-expression\n"); }
                ;

conditional_exp: logical_or_exp { printf("conditional-expression ---> logical-OR-expression\n"); }
                | logical_or_exp QUESTION_MARK expression COLON conditional_exp { printf("conditional-expression ---> logical-OR-expression ? expression : conditional-expression\n"); }
                ;

assignment_exp: conditional_exp { printf("assignment-expression ---> conditional-expression\n"); }
                | unary_exp assignment_operator assignment_exp { printf("assignment-expression ---> unary-expression assignment-operator assignment-expression\n"); }
                ;

assignment_operator: ASSIGN { printf("assignment-operator ---> =\n"); }
                    | MULTIPLY_ASSIGN { printf("assignment-operator ---> *=\n"); }
                    | DIVIDE_ASSIGN { printf("assignment-operator ---> /=\n"); }
                    | MODULO_ASSIGN { printf("assignment-operator ---> %%=\n"); }
                    | ADD_ASSIGN { printf("assignment-operator ---> +=\n"); }
                    | SUBTRACT_ASSIGN { printf("assignment-operator ---> -=\n"); }
                    | LSHIFT_ASSIGN { printf("assignment-operator ---> <<=\n"); }
                    | RSHIFT_ASSIGN { printf("assignment-operator ---> >>=\n"); }
                    | AND_ASSIGN { printf("assignment-operator ---> &=\n"); }
                    | OR_ASSIGN { printf("assignment-operator ---> |=\n"); }
                    | XOR_ASSIGN { printf("assignment-operator ---> ^=\n"); }
                    ;

expression: assignment_exp { printf("expression ---> assignment-expression\n"); }
            | expression COMMA assignment_exp { printf("expression ---> expression , assignment-expression\n"); }
            ;

constant_exp: conditional_exp { printf("constant-expression ---> conditional-expression\n"); }
            ;

declaration: declaration_specifiers init_declarator_list_opt SEMICOLON { printf("declaration ---> declaration-specifiers init-declarator-list-opt ;\n"); }
            ;

init_declarator_list_opt: init_declarator_list { printf("init-declarator-list-opt ---> init-declarator-list\n"); }
						| { printf("init-declarator-list-opt ---> EPSILON\n"); }
						;

declaration_specifiers: storage_class_specifier declaration_specifiers_opt { printf("declaration-specifiers ---> storage-class-specifier declaration-specifiers-opt\n"); }
                        | type_specifier declaration_specifiers_opt { printf("declaration-specifiers ---> type-specifier declaration-specifiers-opt\n"); }
                        | type_qualifier declaration_specifiers_opt { printf("declaration-specifiers ---> type-qualifier declaration-specifiers-opt\n"); }
                        | function_specifier declaration_specifiers_opt { printf("declaration-specifiers ---> function-specifier declaration-specifiers-opt\n"); }
                        ;

declaration_specifiers_opt: declaration_specifiers { printf("declaration-specifiers-opt ---> declaration-specifiers\n"); }
                            |  { printf("declaration-specifiers-opt ---> EPSILON\n"); }
                            ;

init_declarator_list: init_declarator { printf("init-declarator-list ---> init-declarator\n"); }
                    | init_declarator_list COMMA init_declarator { printf("init-declarator-list ---> init-declarator-list , init-declarator\n"); }
                    ;

init_declarator: declarator  { printf("init-declarator ---> declarator\n"); }
                | declarator ASSIGN initializer { printf("init-declarator ---> declarator = initializer\n"); }
                ;

storage_class_specifier: EXTERN { printf("storage-class-specifier ---> extern\n"); }
                        | STATIC { printf("storage-class-specifier ---> static\n"); }
                        | AUTO { printf("storage-class-specifier ---> auto\n"); }
                        | REGISTER { printf("storage-class-specifier ---> register\n"); }
                        ;

type_specifier: VOID { printf("type-specifier ---> void\n"); }
                | CHAR { printf("type-specifier ---> char\n"); }
                | SHORT { printf("type-specifier ---> short\n"); }
                | INT { printf("type-specifier ---> int\n"); }
                | LONG { printf("type-specifier ---> long\n"); }
                | FLOAT { printf("type-specifier ---> float\n"); }
                | DOUBLE { printf("type-specifier ---> double\n"); }
                | SIGNED { printf("type-specifier ---> signed\n"); }
                | UNSIGNED { printf("type-specifier ---> unsigned\n"); }
                | BOOL { printf("type-specifier ---> _Bool\n"); }
                | COMPLEX { printf("type-specifier ---> _Complex\n"); }
                | IMAGINARY { printf("type-specifier ---> _Imaginary\n"); }
                | enum_specifier { printf("type-specifier ---> enum-specifier\n"); }
                ;

specifier_qualifer_list: type_specifier specifier_qualifer_list_opt { printf("specifier-qualifier-list ---> type-specifier specifier-qualifier-list-opt\n"); }
                        | type_qualifier specifier_qualifer_list_opt { printf("specifier-qualifier-list ---> type-qualifier specifier-qualifier-list-opt\n"); }
                        ;

specifier_qualifer_list_opt: specifier_qualifer_list { printf("specifier-qualifier-list-opt ---> specifier-qualifier-list\n"); }
                            | { printf("specifier-qualifier-list-opt ---> EPSILON\n"); }
                            ;

enum_specifier: ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list CURLY_BRACE_CLOSE { printf("enum-specifier ---> enum identifier-opt { enumerator-list }\n"); }
                | ENUM identifier_opt CURLY_BRACE_OPEN enumerator_list COMMA CURLY_BRACE_CLOSE { printf("enum-specifier ---> enum identifier-opt { enumerator-list , }\n"); }
                | ENUM IDENTIFIER { printf("enum-specifier ---> enum identifier\n"); }
                ;

identifier_opt: IDENTIFIER { printf("identifier-opt ---> identifier\n"); }
                | { printf("identifier-opt ---> EPSILON\n"); }
                ;

enumerator_list: enumerator { printf("enumerator-list ---> enumerator\n"); }
                | enumerator_list COMMA enumerator { printf("enumerator-list ---> enumerator-list , enumerator\n"); }
                ;

enumerator: IDENTIFIER { printf("enumerator ---> %s\n",yytext); }
			| IDENTIFIER ASSIGN constant_exp { printf("enumerator ---> enumeration-constant = constant-expression\n"); }
			;

type_qualifier: CONST { printf("type-qualifier ---> const\n"); }
		| RESTRICT { printf("type-qualifier ---> restrict\n"); }
		| VOLATILE { printf("type-qualifier ---> volatile\n"); }
		;

function_specifier: INLINE { printf("function-specifier ---> inline\n"); }
		        ;

declarator: pointer_opt direct_declarator { printf("declarator ---> pointer-opt direct-declarator\n"); }
            ;


pointer_opt: pointer { printf("pointer-opt ---> pointer\n"); }
			|  { printf("pointer-opt ---> EPSILON\n"); }
			;

direct_declarator: IDENTIFIER { printf("direct-declarartor ---> %s\n",yytext); }
					| PARENTHESIS_OPEN declarator PARENTHESIS_CLOSE { printf("direct-declarator ---> ( declarator )\n"); }
					| direct_declarator SQUARE_BRACE_OPEN type_qualifier_list_opt assignment_exp_opt SQUARE_BRACE_CLOSE { printf("direct-declarator ---> direct_declarator [ type-qualifier-list-opt assignment-expression-opt ]\n"); }
					| direct_declarator SQUARE_BRACE_OPEN STATIC type_qualifier_list_opt assignment_exp SQUARE_BRACE_CLOSE { printf("direct-declarator ---> direct_declarator [ static type-qualifier-list-opt assignment-expression ]\n"); }
					| direct_declarator SQUARE_BRACE_OPEN type_qualifier_list STATIC assignment_exp SQUARE_BRACE_CLOSE { printf("direct-declarator ---> direct_declarator [ type-qualifier-list static assignment-expression ]\n"); }
					| direct_declarator SQUARE_BRACE_OPEN type_qualifier_list_opt MULTIPLY SQUARE_BRACE_CLOSE { printf("direct-declarator ---> direct_declarator [ type-qualifier-list-opt * ]\n"); }
					| direct_declarator PARENTHESIS_OPEN parameter_type_list PARENTHESIS_CLOSE { printf("direct-declarator ---> direct_declarator ( parameter-type-list )\n"); }
					| direct_declarator PARENTHESIS_OPEN identifier_list_opt PARENTHESIS_CLOSE { printf("direct-declarator ---> direct_declarator ( identifier-list-opt )\n"); }
					;

type_qualifier_list_opt: type_qualifier_list { printf("type-qualifier-list-opt ---> type-qualifier-list\n"); }
						|  { printf("type-qualifier-list-opt ---> EPSILON\n"); }
						;

assignment_exp_opt: assignment_exp { printf("assignment-expression-opt ---> assignment-expression\n"); }
					|  { printf("assignment-expression-opt ---> EPSILON\n"); }
					;

identifier_list_opt: identifier_list { printf("identifier-list-opt ---> identifier-list\n"); }
					|  { printf("identifier-list-opt ---> EPSILON\n"); }
					;

pointer: MULTIPLY type_qualifier_list_opt { printf("pointer ---> * type-qualifier-list-opt\n"); }
		| MULTIPLY type_qualifier_list_opt pointer { printf("pointer ---> * type-qualifier-list-opt pointer\n"); }
		;

type_qualifier_list: type_qualifier { printf("type-qualifier-list ---> type-qualifier\n"); }
					| type_qualifier_list type_qualifier { printf("type-qualifier-list ---> type-qualifier-list type-qualifier\n"); }
					;

parameter_type_list: parameter_list { printf("parameter-type-list ---> parameter-list\n"); }
					| parameter_list COMMA ELLIPSIS { printf("parameter-type-list ---> parameter-list , ...\n"); }
					;


parameter_list: parameter_declaration { printf("parameter-list ---> parameter-declaration\n"); }
				| parameter_list COMMA parameter_declaration { printf("parameter-list ---> parameter-list , parameter-declaration\n"); }
				;

parameter_declaration: declaration_specifiers declarator { printf("parameter-declaration ---> declaration-specifiers declarator\n"); }
						| declaration_specifiers { printf("parameter-declaration ---> declaration-specifiers\n"); }
						;

identifier_list: IDENTIFIER { printf("identifier-list ---> %s\n",yytext); }
				| identifier_list COMMA IDENTIFIER { printf("identifier-list ---> identifier_list , identifier\n"); }
				;

type_name: specifier_qualifer_list { printf("type-name ---> specifier-qualifier-list\n"); }
			;

initializer: assignment_exp { printf("initializer ---> assignment-expression\n"); }
			| CURLY_BRACE_OPEN initializer_list CURLY_BRACE_CLOSE { printf("initializer ---> { initializer-list }\n"); }
			| CURLY_BRACE_OPEN initializer_list COMMA CURLY_BRACE_CLOSE { printf("initializer ---> { initializer-list , }\n"); }
			;

initializer_list: designation_opt initializer { printf("initializer-list ---> designation-opt initializer\n"); }
				| initializer_list COMMA designation_opt initializer { printf("initializer-list ---> initializer-list , designation-opt initializer\n"); }
				;

designation_opt: designation { printf("designation-opt ---> designation\n"); }
				| { printf("designation-opt ---> EPSILON\n"); }
				;

designation: designation_list ASSIGN { printf("designation ---> designator-list =\n"); }
			;

designation_list: designator { printf("designator-list ---> designator\n"); }
				| designation_list designator { printf("designator-list ---> designator-list designator\n"); }
				;

designator: SQUARE_BRACE_OPEN constant_exp SQUARE_BRACE_CLOSE { printf("designator ---> [ constant-expression ]\n"); }
			| DOT IDENTIFIER { printf("designator ---> . identifier\n"); }
            ;

statement: labeled_statement { printf("statement ---> labeled-statement\n"); }
            | compound_statement { printf("statement ---> compound-statement\n"); }
            | expression_statement { printf("statement ---> expression-statement\n"); }
            | selection_statement { printf("statement ---> selection-statement\n"); }
            | iteration_statement { printf("statement ---> iteration-statement\n"); }
            | jump_statement { printf("statement ---> jump-statement\n"); }
            ;

labeled_statement: IDENTIFIER COLON statement { printf("labeled-statement ---> identifier : statement\n"); }
                    | CASE constant_exp COLON statement { printf("labeled-statement ---> case constant-expression : statement\n"); }
                    | DEFAULT COLON statement { printf("labeled-statement ---> default : statement\n"); }
                    ;

compound_statement: CURLY_BRACE_OPEN block_item_list_opt CURLY_BRACE_CLOSE { printf("compound-statement ---> { block-item-list-opt }\n"); }
                    ;


block_item_list_opt: block_item_list { printf("block-item-list-opt ---> block-item-list\n"); }
                    | { printf("block-item-list-opt ---> EPSILON\n"); }
                    ;

block_item_list: block_item { printf("block-item-list ---> block-item\n"); }
                | block_item_list block_item { printf("block-item-list ---> block-item-list block-item\n"); }
                ;

block_item: declaration { printf("block-item ---> declaration\n"); }
            | statement { printf("block-item ---> statement\n"); }
            ;

expression_statement: expression_opt SEMICOLON { printf("expression-statement ---> expression-opt ;\n"); }
                    ;

expression_opt: expression { printf("expression-opt ---> expression\n"); }
                | { printf("expression-opt ---> EPSILON\n"); }
                ;

selection_statement: IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement { printf("selection-statement ---> if ( expression ) statement\n"); }
                    | IF PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement ELSE statement { printf("selection-statement ---> if ( expression ) statement else statement\n"); }
                    | SWITCH PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement { printf("selection-statement ---> switch ( expression ) statement\n"); }
                    ;

iteration_statement: WHILE PARENTHESIS_OPEN expression PARENTHESIS_CLOSE statement { printf("iteration-statement ---> while ( expression ) statement\n"); }
                    | DO statement WHILE expression SEMICOLON { printf("iteration-statement ---> do statement while ( expression ) ;\n"); }
                    | FOR PARENTHESIS_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt PARENTHESIS_CLOSE statement { printf("iteration-statement ---> for ( expression-opt ; expression-opt ; expression-opt ) statement\n"); }
                    | FOR PARENTHESIS_OPEN declaration expression_opt SEMICOLON expression_opt PARENTHESIS_CLOSE statement { printf("iteration-statement ---> for ( declaration expression-opt ; expression-opt ) statement\n"); }
                    ;

jump_statement: GOTO IDENTIFIER SEMICOLON { printf("jump-statement ---> goto identifier ;\n"); }
                | CONTINUE SEMICOLON { printf("jump-statement ---> continue ;\n"); }
                | BREAK SEMICOLON { printf("jump-statement ---> break ;\n"); }
                | RETURN expression_opt SEMICOLON { printf("jump-statement ---> return expression-opt ;\n"); }
                ;

translation_unit: external_declaration { printf("translation-unit ---> external-declaration\n"); }
                | translation_unit external_declaration { printf("translation-unit ---> translation-unit external-declaration\n"); }
                ;

external_declaration: function_definition { printf("external-declaration ---> function-definition\n"); }
                    | declaration { printf("external-declaration ---> declaration\n"); }
                    ;

function_definition: declaration_specifiers declarator declaration_list_opt compound_statement { printf("function-definition ---> declaration-specifiers declarator declaration-list-opt compound-statement\n"); }
                    ;

declaration_list_opt: declaration_list { printf("declaration-list-opt ---> declaration-list\n"); }
                    |  { printf("declaration-list-opt ---> EPSILON\n"); }
                    ;

declaration_list: declaration { printf("declaration-list ---> declaration\n"); }
                | declaration_list declaration { printf("declaration-list ---> declaration-list declaration\n"); }
                ;


%%

void yyerror(char *s) {
    printf("Error occurred: %s\n", s);
    printf("Unable to parse: %s\n", yytext);    
}