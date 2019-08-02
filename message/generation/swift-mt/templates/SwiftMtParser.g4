grammar SwiftMtParser_MT{{message_type}};

message                : bh ah uh? mt tr? EOF;
bh                     : TAG_BH bh_content RBRACE ;
bh_content             : ~(RBRACE)+ ;

ah                     : TAG_AH ah_content RBRACE ;
ah_content             : ~( RBRACE )+ ;

uh                     : TAG_UH sys_block RBRACE ;

tr                     : TAG_TR sys_block RBRACE ;

sys_block              : sys_element+ ;
sys_element            : LBRACE sys_element_key COLON sys_element_content RBRACE ;
sys_element_key        : ~( COLON | RBRACE )+ ;
sys_element_content    : ~( RBRACE )+ ;

mt                     : TAG_MT {{print_mt_body}} MT_END;

{{print_sequences}}

{{print_fields}}

{{print_field_options}}

TAG_BH                 : '{1:' ;
TAG_AH                 : '{2:' ;
TAG_UH                 : '{3:' ;
TAG_MT                 : '{4:' ;
TAG_TR                 : '{5:' ;

MT_END                 : '-}';

LBRACE                 : '{';
RBRACE                 : '}' ;

DOT                    : '.';
COLON                  : ':';

CRLF                   : '\r'?'\n';

DIGIT                  : '0'..'9';
CHARACTER              : 'A'..'Z';

START_OF_FIELD         : '\r'? '\n:' ;

CHAR_SET_X             : ('a'..'z') |
                         ('A'..'Z') |
                         ('0'..'9') |
                         '/' |
                         '-' |
                         '?' |
                         ':' |
                         '(' |
                         ')' |
                         '.' |
                         ',' |
                         '\'' |
                         '+' |
                         ('\r''\n')
                       ;

CHAR_SET_Y             : ('A'..'Z') |
                         ('0'..'9') |
                         '.' |
                         ',' |
                         '-' |
                         '(' |
                         ')' |
                         '/' |
                         '=' |
                         '\'' |
                         '+' |
                         ':' |
                         '?' |
                         '!' |
                         '"' |
                         '%' |
                         '&' |
                         '*' |
                         '<' |
                         '>' |
                         ';' |
                         ' '
                        ;

ANY                    : . ;