grammar SwiftMtParser_MT546;

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

mt                     : TAG_MT seq_A seq_B seq_C seq_D? seq_E seq_F*  MT_END;

seq_A                  : fld_16R_A fld_20C_A fld_23G_A fld_98a_A? fld_22a_A* seq_A1+ fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_22F_A1? fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_94a_B* fld_98a_B+ fld_90a_B? fld_99A_B? fld_35B_B seq_B1? fld_22F_B* fld_70E_B* fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_94B_B1? fld_22F_B1* fld_12a_B1* fld_11A_B1? fld_98A_B1* fld_92A_B1* fld_13a_B1* fld_17B_B1* fld_90a_B1* fld_36B_B1* fld_35B_B1* fld_70E_B1? fld_16S_B1 ;
seq_C                  : fld_16R_C fld_36B_C+ fld_19A_C* fld_70D_C? fld_13B_C* fld_95a_C* fld_97a_C+ fld_94a_C* seq_C1* fld_16S_C ;
seq_C1                 : fld_16R_C1 fld_13B_C1? fld_36B_C1? fld_98a_C1? fld_90a_C1? fld_22F_C1* fld_16S_C1 ;
seq_D                  : fld_16R_D fld_98a_D* fld_22F_D* fld_20C_D* fld_92a_D* fld_99B_D* fld_19A_D* fld_70C_D? fld_16S_D ;
seq_E                  : fld_16R_E fld_22F_E+ seq_E1+ seq_E2* seq_E3* fld_16S_E ;
seq_E1                 : fld_16R_E1 fld_95a_E1+ fld_97a_E1? fld_98a_E1? fld_20C_E1? fld_70a_E1* fld_16S_E1 ;
seq_E2                 : fld_16R_E2 fld_95a_E2+ fld_97a_E2* fld_20C_E2? fld_70a_E2* fld_16S_E2 ;
seq_E3                 : fld_16R_E3 fld_17B_E3* fld_19A_E3+ fld_98a_E3? fld_92B_E3? fld_16S_E3 ;
seq_F                  : fld_16R_F fld_95a_F+ fld_97A_F? fld_70a_F* fld_20C_F? fld_16S_F ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22a_A              : fld_22a_A_F | fld_22a_A_H ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_A1             : fld_22F_A1_F ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94a_B              : fld_94a_B_B | fld_94a_B_H | fld_94a_B_L ;
fld_98a_B              : fld_98a_B_A | fld_98a_B_B | fld_98a_B_C | fld_98a_B_E ;
fld_90a_B              : fld_90a_B_A | fld_90a_B_B ;
fld_99A_B              : fld_99A_B_A ;
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
fld_35B_B1             : fld_35B_B1_B ;
fld_70E_B1             : fld_70E_B1_E ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_22F_B              : fld_22F_B_F ;
fld_70E_B              : fld_70E_B_E ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_36B_C              : fld_36B_C_B ;
fld_19A_C              : fld_19A_C_A ;
fld_70D_C              : fld_70D_C_D ;
fld_13B_C              : fld_13B_C_B ;
fld_95a_C              : fld_95a_C_L | fld_95a_C_P | fld_95a_C_R ;
fld_97a_C              : fld_97a_C_A | fld_97a_C_B | fld_97a_C_E ;
fld_94a_C              : fld_94a_C_B | fld_94a_C_C | fld_94a_C_F | fld_94a_C_L ;
fld_16R_C1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13B_C1             : fld_13B_C1_B ;
fld_36B_C1             : fld_36B_C1_B ;
fld_98a_C1             : fld_98a_C1_A | fld_98a_C1_C | fld_98a_C1_E ;
fld_90a_C1             : fld_90a_C1_A | fld_90a_C1_B ;
fld_22F_C1             : fld_22F_C1_F ;
fld_16S_C1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_D              : fld_98a_D_A | fld_98a_D_B | fld_98a_D_C ;
fld_22F_D              : fld_22F_D_F ;
fld_20C_D              : fld_20C_D_C ;
fld_92a_D              : fld_92a_D_A | fld_92a_D_C ;
fld_99B_D              : fld_99B_D_B ;
fld_19A_D              : fld_19A_D_A ;
fld_70C_D              : fld_70C_D_C ;
fld_16S_D              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_E              : fld_22F_E_F ;
fld_16R_E1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_E1             : fld_95a_E1_C | fld_95a_E1_L | fld_95a_E1_P | fld_95a_E1_Q | fld_95a_E1_R | fld_95a_E1_S ;
fld_97a_E1             : fld_97a_E1_A | fld_97a_E1_B ;
fld_98a_E1             : fld_98a_E1_A | fld_98a_E1_C ;
fld_20C_E1             : fld_20C_E1_C ;
fld_70a_E1             : fld_70a_E1_C | fld_70a_E1_D | fld_70a_E1_E ;
fld_16S_E1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_E2             : fld_95a_E2_L | fld_95a_E2_P | fld_95a_E2_Q | fld_95a_E2_R | fld_95a_E2_S ;
fld_97a_E2             : fld_97a_E2_A | fld_97a_E2_E ;
fld_20C_E2             : fld_20C_E2_C ;
fld_70a_E2             : fld_70a_E2_C | fld_70a_E2_E ;
fld_16S_E2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E3             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_17B_E3             : fld_17B_E3_B ;
fld_19A_E3             : fld_19A_E3_A ;
fld_98a_E3             : fld_98a_E3_A | fld_98a_E3_C ;
fld_92B_E3             : fld_92B_E3_B ;
fld_16S_E3             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_E              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_F              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_F              : fld_95a_F_C | fld_95a_F_L | fld_95a_F_P | fld_95a_F_Q | fld_95a_F_R | fld_95a_F_S ;
fld_97A_F              : fld_97A_F_A ;
fld_70a_F              : fld_70a_F_C | fld_70a_F_D | fld_70a_F_E ;
fld_20C_F              : fld_20C_F_C ;
fld_16S_F              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22a_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_A_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_H            : START_OF_FIELD '94H:' ~(START_OF_FIELD)+ ;
fld_94a_B_L            : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_B_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_90a_B_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_99A_B_A            : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

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

fld_35B_B1_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_70E_B1_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_70E_B_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_36B_C_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_19A_C_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_70D_C_D            : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_13B_C_B            : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_95a_C_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_C_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_C_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_C_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;
fld_97a_C_E            : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_94a_C_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_C_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_C_F            : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;
fld_94a_C_L            : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_13B_C1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_36B_C1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_98a_C1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_C1_E           : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_90a_C1_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_C1_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_22F_C1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98a_D_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_D_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_22F_D_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_20C_D_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_92a_D_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D_C            : START_OF_FIELD '92C:' ~(START_OF_FIELD)+ ;

fld_99B_D_B            : START_OF_FIELD '99B:' ~(START_OF_FIELD)+ ;

fld_19A_D_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_70C_D_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_22F_E_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_95a_E1_C           : START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_E1_L           : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_E1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_E1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_E1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_E1_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_E1_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_E1_B           : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_98a_E1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_E1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_E1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_E1_D           : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;
fld_70a_E1_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_95a_E2_L           : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_E2_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_E2_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_E2_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_E2_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_E2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_E2_E           : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_20C_E2_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_E2_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_E2_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_17B_E3_B           : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_19A_E3_A           : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_98a_E3_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E3_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_92B_E3_B           : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;

fld_95a_F_C            : START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_F_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_F_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_F_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_F_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_F_S            : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97A_F_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_70a_F_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_F_D            : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;
fld_70a_F_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_20C_F_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;



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