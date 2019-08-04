grammar SwiftMtParser_MT671;

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

mt                     : TAG_MT seq_A seq_B+ seq_C?  MT_END;

seq_A                  : fld_16R_A fld_20C_A fld_23G_A seq_A1* fld_95a_A+ fld_22F_A fld_97A_A? fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_22H_B fld_20C_B? fld_11A_B fld_98A_B fld_22F_B+ seq_B1+ seq_B2? fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_95a_B1+ fld_97A_B1? fld_16S_B1 ;
seq_B2                 : fld_16R_B2 fld_70E_B2* fld_22F_B2? fld_22H_B2? fld_16S_B2 ;
seq_C                  : fld_16R_C fld_70E_C* fld_22F_C? fld_16S_C ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_95a_A              : fld_95a_A_P | fld_95a_A_Q ;
fld_22F_A              : fld_22F_A_F ;
fld_97A_A              : fld_97A_A_A ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22H_B              : fld_22H_B_H ;
fld_20C_B              : fld_20C_B_C ;
fld_11A_B              : fld_11A_B_A ;
fld_98A_B              : fld_98A_B_A ;
fld_22F_B              : fld_22F_B_F ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B1             : fld_95a_B1_P | fld_95a_B1_Q | fld_95a_B1_R | fld_95a_B1_S ;
fld_97A_B1             : fld_97A_B1_A ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_70E_B2             : fld_70E_B2_E ;
fld_22F_B2             : fld_22F_B2_F ;
fld_22H_B2             : fld_22H_B2_H ;
fld_16S_B2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_70E_C              : fld_70E_C_E ;
fld_22F_C              : fld_22F_C_F ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_97A_A_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_22H_B_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_20C_B_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_11A_B_A            : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_22F_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_95a_B1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_B1_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97A_B1_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_70E_B2_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_B2_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_22H_B2_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_70E_C_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;



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