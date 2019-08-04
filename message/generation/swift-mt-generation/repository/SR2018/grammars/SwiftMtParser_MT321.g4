grammar SwiftMtParser_MT321;

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

mt                     : TAG_MT seq_A seq_B seq_C+  MT_END;

seq_A                  : fld_16R_A fld_20C_A+ fld_23G_A fld_22H_A+ fld_99B_A* seq_A1* fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_20C_B fld_22H_B+ fld_98A_B+ fld_19A_B+ fld_92A_B fld_99B_B? fld_94C_B? seq_B1 seq_B2 seq_B3? fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_95a_B1 fld_16S_B1 ;
seq_B2                 : fld_16R_B2 fld_95a_B2? fld_97A_B2 fld_16S_B2 ;
seq_B3                 : fld_16R_B3 fld_95a_B3+ fld_16S_B3 ;
seq_C                  : fld_16R_C fld_22H_C seq_C1+ fld_16S_C ;
seq_C1                 : fld_16R_C1 fld_95a_C1+ fld_97A_C1? fld_70C_C1? fld_16S_C1 ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_22H_A              : fld_22H_A_H ;
fld_99B_A              : fld_99B_A_B ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_B              : fld_20C_B_C ;
fld_22H_B              : fld_22H_B_H ;
fld_98A_B              : fld_98A_B_A ;
fld_19A_B              : fld_19A_B_A ;
fld_92A_B              : fld_92A_B_A ;
fld_99B_B              : fld_99B_B_B ;
fld_94C_B              : fld_94C_B_C ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B1             : fld_95a_B1_P | fld_95a_B1_Q | fld_95a_B1_R ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B2             : fld_95a_B2_P | fld_95a_B2_Q | fld_95a_B2_R ;
fld_97A_B2             : fld_97A_B2_A ;
fld_16S_B2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B3             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B3             : fld_95a_B3_P | fld_95a_B3_Q | fld_95a_B3_R ;
fld_16S_B3             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22H_C              : fld_22H_C_H ;
fld_16R_C1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_C1             : fld_95a_C1_P | fld_95a_C1_Q | fld_95a_C1_R ;
fld_97A_C1             : fld_97A_C1_A ;
fld_70C_C1             : fld_70C_C1_C ;
fld_16S_C1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_22H_A_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_99B_A_B            : START_OF_FIELD '99B:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_20C_B_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22H_B_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_98A_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_19A_B_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_92A_B_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_99B_B_B            : START_OF_FIELD '99B:' ~(START_OF_FIELD)+ ;

fld_94C_B_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_95a_B1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_95a_B2_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B2_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B2_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97A_B2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_95a_B3_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B3_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B3_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_22H_C_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_95a_C1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97A_C1_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_70C_C1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;



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