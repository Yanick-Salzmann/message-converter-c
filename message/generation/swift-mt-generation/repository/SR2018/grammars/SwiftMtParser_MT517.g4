grammar SwiftMtParser_MT517;

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

mt                     : TAG_MT seq_A  MT_END;

seq_A                  : fld_16R_A fld_20C_A fld_23G_A fld_98a_A? fld_95a_A+ fld_25D_A? seq_A1+ fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_95a_A              : fld_95a_A_L | fld_95a_A_P | fld_95a_A_Q | fld_95a_A_R ;
fld_25D_A              : fld_25D_A_D ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_95a_A_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_A_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_25D_A_D            : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;



TAG_BH                 : '{1:' ;
TAG_AH                 : '{2:' ;
TAG_UH                 : '{3:' ;
TAG_MT                 : '{4:' ;
TAG_TR                 : '{5:' ;

MT_END                 : '-}';

LBRACE                 : '{';
RBRACE                 : '}' ;

COLON                  : ':';

START_OF_FIELD         : '\r'? '\n:' ;

ANY                    : . ;