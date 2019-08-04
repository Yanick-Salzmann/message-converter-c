grammar SwiftMtParser_MT505;

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

mt                     : TAG_MT seq_A seq_B+  MT_END;

seq_A                  : fld_16R_A fld_20C_A+ fld_23G_A seq_A1+ fld_98a_A? fld_22a_A fld_95a_A+ fld_70C_A? seq_A2* fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_22F_A1? fld_98A_A1? fld_13B_A1? fld_70C_A1? fld_16S_A1 ;
seq_A2                 : fld_16R_A2 fld_13a_A2? fld_20C_A2 fld_16S_A2 ;
seq_B                  : fld_16R_B fld_20C_B fld_22a_B+ fld_98A_B? seq_B1? ;
seq_B1                 : fld_16R_B1 fld_35B_B1 fld_36B_B1 fld_17B_B1? seq_B1a? ;
seq_B1a                : fld_16R_B1a fld_22a_B1a+ ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_A1             : fld_22F_A1_F ;
fld_98A_A1             : fld_98A_A1_A ;
fld_13B_A1             : fld_13B_A1_B ;
fld_70C_A1             : fld_70C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22a_A              : fld_22a_A_F | fld_22a_A_H ;
fld_95a_A              : fld_95a_A_P | fld_95a_A_Q | fld_95a_A_R ;
fld_70C_A              : fld_70C_A_C ;
fld_16R_A2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A2             : fld_13a_A2_A | fld_13a_A2_B ;
fld_20C_A2             : fld_20C_A2_C ;
fld_16S_A2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_B              : fld_20C_B_C ;
fld_22a_B              : fld_22a_B_F | fld_22a_B_H ;
fld_98A_B              : fld_98A_B_A ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_35B_B1             : fld_35B_B1_B ;
fld_36B_B1             : fld_36B_B1_B ;
fld_17B_B1             : fld_17B_B1_B ;
fld_16R_B1a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22a_B1a            : fld_22a_B1a_F | fld_22a_B1a_H ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98A_A1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_13B_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_70C_A1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22a_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_A_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_A_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_70C_A_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_13a_A2_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A2_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A2_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_20C_B_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22a_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_98A_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_35B_B1_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36B_B1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_17B_B1_B           : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_22a_B1a_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B1a_H          : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;



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