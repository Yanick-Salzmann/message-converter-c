grammar SwiftMtParser_MT510;

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

mt                     : TAG_MT seq_A seq_B? seq_C?  MT_END;

seq_A                  : fld_16R_A fld_20C_A fld_23G_A fld_98a_A? seq_A1+ seq_A2+ fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_A2                 : fld_16R_A2 fld_25D_A2 seq_A2a* fld_16S_A2 ;
seq_A2a                : fld_16R_A2a fld_24B_A2a fld_70D_A2a? fld_16S_A2a ;
seq_B                  : fld_16R_B fld_20D_B* fld_95a_B* fld_94a_B* fld_13B_B* fld_98a_B* fld_35B_B? fld_36B_B? fld_97A_B? fld_16S_B ;
seq_C                  : fld_16R_C fld_95a_C* fld_16S_C ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_A2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_25D_A2             : fld_25D_A2_D ;
fld_16R_A2a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_24B_A2a            : fld_24B_A2a_B ;
fld_70D_A2a            : fld_70D_A2a_D ;
fld_16S_A2a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20D_B              : fld_20D_B_D ;
fld_95a_B              : fld_95a_B_P | fld_95a_B_R | fld_95a_B_S | fld_95a_B_U ;
fld_94a_B              : fld_94a_B_C | fld_94a_B_D | fld_94a_B_G ;
fld_13B_B              : fld_13B_B_B ;
fld_98a_B              : fld_98a_B_A | fld_98a_B_C ;
fld_35B_B              : fld_35B_B_B ;
fld_36B_B              : fld_36B_B_B ;
fld_97A_B              : fld_97A_B_A ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_C              : fld_95a_C_P | fld_95a_C_Q | fld_95a_C_R ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_25D_A2_D           : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_24B_A2a_B          : START_OF_FIELD '24B:' ~(START_OF_FIELD)+ ;

fld_70D_A2a_D          : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_20D_B_D            : START_OF_FIELD '20D:' ~(START_OF_FIELD)+ ;

fld_95a_B_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_B_S            : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;
fld_95a_B_U            : START_OF_FIELD '95U:' ~(START_OF_FIELD)+ ;

fld_94a_B_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B_D            : START_OF_FIELD '94D:' ~(START_OF_FIELD)+ ;
fld_94a_B_G            : START_OF_FIELD '94G:' ~(START_OF_FIELD)+ ;

fld_13B_B_B            : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36B_B_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_97A_B_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_95a_C_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;



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