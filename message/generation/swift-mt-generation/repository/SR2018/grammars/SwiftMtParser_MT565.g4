grammar SwiftMtParser_MT565;

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

mt                     : TAG_MT seq_A seq_B seq_C* seq_D seq_E?  MT_END;

seq_A                  : fld_16R_A fld_20C_A+ fld_23G_A fld_22F_A fld_98a_A? seq_A1* fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_22F_A1? fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_35B_B? seq_B1? seq_B2 fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_94B_B1? fld_22F_B1? fld_12a_B1? fld_11A_B1? fld_98A_B1* fld_92A_B1* fld_36B_B1* fld_16S_B1 ;
seq_B2                 : fld_16R_B2 fld_95a_B2? fld_97A_B2 fld_94a_B2? fld_93a_B2* fld_16S_B2 ;
seq_C                  : fld_16R_C fld_95a_C+ fld_94C_C* fld_36B_C fld_22F_C* fld_70E_C* fld_16S_C ;
seq_D                  : fld_16R_D fld_13A_D fld_22a_D+ fld_11A_D* fld_35B_D? fld_36a_D* fld_19B_D? fld_98a_D? fld_92a_D* fld_90a_D* fld_70E_D* fld_16S_D ;
seq_E                  : fld_16R_E fld_70E_E* fld_95a_E* fld_16S_E ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_22F_A              : fld_22F_A_F ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_A1             : fld_22F_A1_F ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_35B_B              : fld_35B_B_B ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94B_B1             : fld_94B_B1_B ;
fld_22F_B1             : fld_22F_B1_F ;
fld_12a_B1             : fld_12a_B1_A | fld_12a_B1_C ;
fld_11A_B1             : fld_11A_B1_A ;
fld_98A_B1             : fld_98A_B1_A ;
fld_92A_B1             : fld_92A_B1_A ;
fld_36B_B1             : fld_36B_B1_B ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B2             : fld_95a_B2_P | fld_95a_B2_R ;
fld_97A_B2             : fld_97A_B2_A ;
fld_94a_B2             : fld_94a_B2_B | fld_94a_B2_C | fld_94a_B2_F ;
fld_93a_B2             : fld_93a_B2_B | fld_93a_B2_C ;
fld_16S_B2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_C              : fld_95a_C_P | fld_95a_C_R | fld_95a_C_S | fld_95a_C_V ;
fld_94C_C              : fld_94C_C_C ;
fld_36B_C              : fld_36B_C_B ;
fld_22F_C              : fld_22F_C_F ;
fld_70E_C              : fld_70E_C_E ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13A_D              : fld_13A_D_A ;
fld_22a_D              : fld_22a_D_F | fld_22a_D_H ;
fld_11A_D              : fld_11A_D_A ;
fld_35B_D              : fld_35B_D_B ;
fld_36a_D              : fld_36a_D_B | fld_36a_D_C ;
fld_19B_D              : fld_19B_D_B ;
fld_98a_D              : fld_98a_D_A | fld_98a_D_C ;
fld_92a_D              : fld_92a_D_A | fld_92a_D_F | fld_92a_D_R ;
fld_90a_D              : fld_90a_D_A | fld_90a_D_B | fld_90a_D_E | fld_90a_D_F | fld_90a_D_J | fld_90a_D_L ;
fld_70E_D              : fld_70E_D_E ;
fld_16S_D              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_70E_E              : fld_70E_E_E ;
fld_95a_E              : fld_95a_E_P | fld_95a_E_Q | fld_95a_E_R ;
fld_16S_E              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_B1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B1_A           : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_B1_C           : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_B1_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92A_B1_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_36B_B1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_95a_B2_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B2_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97A_B2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_94a_B2_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B2_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B2_F           : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_93a_B2_B           : START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;
fld_93a_B2_C           : START_OF_FIELD '93C:' ~(START_OF_FIELD)+ ;

fld_95a_C_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_C_S            : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;
fld_95a_C_V            : START_OF_FIELD '95V:' ~(START_OF_FIELD)+ ;

fld_94C_C_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_36B_C_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_70E_C_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_13A_D_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;

fld_22a_D_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_D_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_11A_D_A            : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_35B_D_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36a_D_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_D_C            : START_OF_FIELD '36C:' ~(START_OF_FIELD)+ ;

fld_19B_D_B            : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_98a_D_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_92a_D_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D_F            : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D_R            : START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_D_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_D_E            : START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;
fld_90a_D_F            : START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_D_J            : START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_D_L            : START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_70E_D_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_70E_E_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_95a_E_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_E_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_E_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;



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