grammar SwiftMtParser_MT501;

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

mt                     : TAG_MT seq_A seq_B seq_C* seq_D? seq_E?  MT_END;

seq_A                  : fld_16R_A fld_20C_A fld_23G_A fld_98a_A? fld_22F_A seq_A1+ fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_22F_A1? fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_20D_B+ fld_22F_B* fld_98a_B fld_35B_B seq_B1? seq_B2 fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_94B_B1? fld_22F_B1* fld_12a_B1* fld_11A_B1? fld_98A_B1* fld_92A_B1* fld_13a_B1* fld_17B_B1* fld_90a_B1* fld_36B_B1* fld_70E_B1? fld_16S_B1 ;
seq_B2                 : fld_16R_B2 fld_36B_B2 fld_93B_B2? fld_95a_B2? fld_97A_B2 fld_16S_B2 ;
seq_C                  : fld_16R_C seq_C1? seq_C2? fld_16S_C ;
seq_C1                 : fld_16R_C1 fld_17B_C1 fld_22F_C1* fld_95a_C1* fld_94a_C1* fld_13B_C1* fld_16S_C1 ;
seq_C2                 : fld_16R_C2 fld_22F_C2* fld_95U_C2? fld_98a_C2* fld_94C_C2* fld_70C_C2? fld_16S_C2 ;
seq_D                  : fld_16R_D fld_98a_D* fld_35B_D? fld_16S_D ;
seq_E                  : fld_16R_E fld_95a_E* fld_16S_E ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22F_A              : fld_22F_A_F ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_A1             : fld_22F_A1_F ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20D_B              : fld_20D_B_D ;
fld_22F_B              : fld_22F_B_F ;
fld_98a_B              : fld_98a_B_A | fld_98a_B_C ;
fld_35B_B              : fld_35B_B_B ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94B_B1             : fld_94B_B1_B ;
fld_22F_B1             : fld_22F_B1_F ;
fld_12a_B1             : fld_12a_B1_A | fld_12a_B1_B | fld_12a_B1_C ;
fld_11A_B1             : fld_11A_B1_A ;
fld_98A_B1             : fld_98A_B1_A ;
fld_92A_B1             : fld_92A_B1_A ;
fld_13a_B1             : fld_13a_B1_A | fld_13a_B1_B ;
fld_17B_B1             : fld_17B_B1_B ;
fld_90a_B1             : fld_90a_B1_A | fld_90a_B1_B ;
fld_36B_B1             : fld_36B_B1_B ;
fld_70E_B1             : fld_70E_B1_E ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_36B_B2             : fld_36B_B2_B ;
fld_93B_B2             : fld_93B_B2_B ;
fld_95a_B2             : fld_95a_B2_P | fld_95a_B2_R ;
fld_97A_B2             : fld_97A_B2_A ;
fld_16S_B2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_16R_C1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_17B_C1             : fld_17B_C1_B ;
fld_22F_C1             : fld_22F_C1_F ;
fld_95a_C1             : fld_95a_C1_P | fld_95a_C1_R | fld_95a_C1_S | fld_95a_C1_U ;
fld_94a_C1             : fld_94a_C1_C | fld_94a_C1_D | fld_94a_C1_G ;
fld_13B_C1             : fld_13B_C1_B ;
fld_16S_C1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_C2             : fld_22F_C2_F ;
fld_95U_C2             : fld_95U_C2_U ;
fld_98a_C2             : fld_98a_C2_A | fld_98a_C2_C ;
fld_94C_C2             : fld_94C_C2_C ;
fld_70C_C2             : fld_70C_C2_C ;
fld_16S_C2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_D              : fld_98a_D_A | fld_98a_D_C ;
fld_35B_D              : fld_35B_D_B ;
fld_16S_D              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_E              : fld_95a_E_P | fld_95a_E_Q | fld_95a_E_R ;
fld_16S_E              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_20D_B_D            : START_OF_FIELD '20D:' ~(START_OF_FIELD)+ ;

fld_22F_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_B1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B1_A           : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_B1_B           : START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_B1_C           : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_B1_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92A_B1_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_13a_B1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_B1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_17B_B1_B           : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_90a_B1_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B1_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_36B_B1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_70E_B1_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_36B_B2_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_93B_B2_B           : START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;

fld_95a_B2_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B2_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97A_B2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_17B_C1_B           : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_22F_C1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_95a_C1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_C1_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;
fld_95a_C1_U           : START_OF_FIELD '95U:' ~(START_OF_FIELD)+ ;

fld_94a_C1_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_C1_D           : START_OF_FIELD '94D:' ~(START_OF_FIELD)+ ;
fld_94a_C1_G           : START_OF_FIELD '94G:' ~(START_OF_FIELD)+ ;

fld_13B_C1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_22F_C2_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_95U_C2_U           : START_OF_FIELD '95U:' ~(START_OF_FIELD)+ ;

fld_98a_C2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C2_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_94C_C2_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_70C_C2_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_98a_D_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_35B_D_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

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