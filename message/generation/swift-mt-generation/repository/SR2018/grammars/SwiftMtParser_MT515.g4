grammar SwiftMtParser_MT515;

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

mt                     : TAG_MT seq_A seq_B* seq_C seq_D? seq_E* seq_F?  MT_END;

seq_A                  : fld_16R_A fld_28E_A? fld_20C_A fld_23G_A fld_98a_A? fld_22F_A seq_A1+ fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_36B_B fld_90a_B fld_22F_B* fld_98a_B? fld_94a_B* fld_16S_B ;
seq_C                  : fld_16R_C fld_98a_C+ fld_90a_C+ fld_92A_C* fld_99A_C* fld_94a_C* fld_19A_C? fld_22a_C+ fld_11A_C? seq_C1+ fld_36B_C+ fld_35B_C seq_C2? fld_13B_C* fld_70E_C* fld_16S_C ;
seq_C1                 : fld_16R_C1 fld_95a_C1+ fld_97a_C1* fld_98a_C1? fld_20C_C1? fld_70a_C1* fld_22F_C1* fld_16S_C1 ;
seq_C2                 : fld_16R_C2 fld_94B_C2? fld_22F_C2* fld_12a_C2* fld_11A_C2? fld_98A_C2* fld_92A_C2* fld_13a_C2* fld_17B_C2* fld_90a_C2* fld_36B_C2* fld_35B_C2* fld_70E_C2? fld_16S_C2 ;
seq_D                  : fld_16R_D fld_22F_D+ fld_11A_D? seq_D1* seq_D2* seq_D3* fld_16S_D ;
seq_D1                 : fld_16R_D1 fld_95a_D1+ fld_97a_D1? fld_98a_D1? fld_20C_D1? fld_70a_D1* fld_16S_D1 ;
seq_D2                 : fld_16R_D2 fld_95a_D2+ fld_97a_D2* fld_98a_D2? fld_20C_D2? fld_70C_D2? fld_16S_D2 ;
seq_D3                 : fld_16R_D3 fld_17B_D3* fld_19A_D3+ fld_98a_D3? fld_92B_D3? fld_16S_D3 ;
seq_E                  : fld_16R_E fld_95a_E+ fld_97a_E* fld_70C_E? fld_20C_E? fld_16S_E ;
seq_F                  : fld_16R_F fld_98a_F* fld_22F_F* fld_20C_F* fld_92a_F* fld_99B_F* fld_19A_F* fld_70C_F? fld_16S_F ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_28E_A              : fld_28E_A_E ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22F_A              : fld_22F_A_F ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_36B_B              : fld_36B_B_B ;
fld_90a_B              : fld_90a_B_A | fld_90a_B_B ;
fld_22F_B              : fld_22F_B_F ;
fld_98a_B              : fld_98a_B_A | fld_98a_B_B | fld_98a_B_C | fld_98a_B_E ;
fld_94a_B              : fld_94a_B_B | fld_94a_B_L ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_C              : fld_98a_C_A | fld_98a_C_B | fld_98a_C_C | fld_98a_C_E ;
fld_90a_C              : fld_90a_C_A | fld_90a_C_B ;
fld_92A_C              : fld_92A_C_A ;
fld_99A_C              : fld_99A_C_A ;
fld_94a_C              : fld_94a_C_B | fld_94a_C_C | fld_94a_C_F | fld_94a_C_L ;
fld_19A_C              : fld_19A_C_A ;
fld_22a_C              : fld_22a_C_F | fld_22a_C_H ;
fld_11A_C              : fld_11A_C_A ;
fld_16R_C1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_C1             : fld_95a_C1_L | fld_95a_C1_P | fld_95a_C1_Q | fld_95a_C1_R | fld_95a_C1_S ;
fld_97a_C1             : fld_97a_C1_A | fld_97a_C1_B | fld_97a_C1_E ;
fld_98a_C1             : fld_98a_C1_A | fld_98a_C1_C ;
fld_20C_C1             : fld_20C_C1_C ;
fld_70a_C1             : fld_70a_C1_C | fld_70a_C1_E ;
fld_22F_C1             : fld_22F_C1_F ;
fld_16S_C1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_36B_C              : fld_36B_C_B ;
fld_35B_C              : fld_35B_C_B ;
fld_16R_C2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94B_C2             : fld_94B_C2_B ;
fld_22F_C2             : fld_22F_C2_F ;
fld_12a_C2             : fld_12a_C2_A | fld_12a_C2_B | fld_12a_C2_C ;
fld_11A_C2             : fld_11A_C2_A ;
fld_98A_C2             : fld_98A_C2_A ;
fld_92A_C2             : fld_92A_C2_A ;
fld_13a_C2             : fld_13a_C2_A | fld_13a_C2_B ;
fld_17B_C2             : fld_17B_C2_B ;
fld_90a_C2             : fld_90a_C2_A | fld_90a_C2_B ;
fld_36B_C2             : fld_36B_C2_B ;
fld_35B_C2             : fld_35B_C2_B ;
fld_70E_C2             : fld_70E_C2_E ;
fld_16S_C2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_13B_C              : fld_13B_C_B ;
fld_70E_C              : fld_70E_C_E ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_D              : fld_22F_D_F ;
fld_11A_D              : fld_11A_D_A ;
fld_16R_D1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_D1             : fld_95a_D1_C | fld_95a_D1_L | fld_95a_D1_P | fld_95a_D1_Q | fld_95a_D1_R | fld_95a_D1_S ;
fld_97a_D1             : fld_97a_D1_A | fld_97a_D1_B ;
fld_98a_D1             : fld_98a_D1_A | fld_98a_D1_C ;
fld_20C_D1             : fld_20C_D1_C ;
fld_70a_D1             : fld_70a_D1_C | fld_70a_D1_D ;
fld_16S_D1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_D2             : fld_95a_D2_L | fld_95a_D2_P | fld_95a_D2_Q | fld_95a_D2_R | fld_95a_D2_S ;
fld_97a_D2             : fld_97a_D2_A | fld_97a_D2_E ;
fld_98a_D2             : fld_98a_D2_A | fld_98a_D2_C ;
fld_20C_D2             : fld_20C_D2_C ;
fld_70C_D2             : fld_70C_D2_C ;
fld_16S_D2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D3             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_17B_D3             : fld_17B_D3_B ;
fld_19A_D3             : fld_19A_D3_A ;
fld_98a_D3             : fld_98a_D3_A | fld_98a_D3_C ;
fld_92B_D3             : fld_92B_D3_B ;
fld_16S_D3             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_D              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_E              : fld_95a_E_L | fld_95a_E_P | fld_95a_E_Q | fld_95a_E_R | fld_95a_E_S ;
fld_97a_E              : fld_97a_E_A | fld_97a_E_B | fld_97a_E_E ;
fld_70C_E              : fld_70C_E_C ;
fld_20C_E              : fld_20C_E_C ;
fld_16S_E              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_F              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_F              : fld_98a_F_A | fld_98a_F_B | fld_98a_F_C ;
fld_22F_F              : fld_22F_F_F ;
fld_20C_F              : fld_20C_F_C ;
fld_92a_F              : fld_92a_F_A | fld_92a_F_C ;
fld_99B_F              : fld_99B_F_B ;
fld_19A_F              : fld_19A_F_A ;
fld_70C_F              : fld_70C_F_C ;
fld_16S_F              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_28E_A_E            : START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_36B_B_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_90a_B_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_22F_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_B_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_L            : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_98a_C_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_C_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_C_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_90a_C_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_C_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_92A_C_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_99A_C_A            : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_94a_C_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_C_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_C_F            : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;
fld_94a_C_L            : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_19A_C_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_22a_C_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_C_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_11A_C_A            : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_95a_C1_L           : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_C1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_C1_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_C1_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_C1_B           : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;
fld_97a_C1_E           : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_98a_C1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_C1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_C1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_C1_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_C1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_36B_C_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_35B_C_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_C2_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_C2_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_C2_A           : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_C2_B           : START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_C2_C           : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_C2_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_C2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92A_C2_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_13a_C2_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_C2_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_17B_C2_B           : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_90a_C2_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_C2_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_36B_C2_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_35B_C2_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_70E_C2_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_13B_C_B            : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_70E_C_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_D_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_11A_D_A            : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_95a_D1_C           : START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_D1_L           : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_D1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_D1_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_D1_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D1_B           : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_98a_D1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_D1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_D1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_D1_D           : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_95a_D2_L           : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_D2_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D2_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D2_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_D2_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_D2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D2_E           : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_98a_D2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D2_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_D2_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70C_D2_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_17B_D3_B           : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_19A_D3_A           : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_98a_D3_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D3_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_92B_D3_B           : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;

fld_95a_E_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_E_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_E_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_E_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_E_S            : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_E_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_E_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;
fld_97a_E_E            : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_70C_E_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_20C_E_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_98a_F_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_F_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_F_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_22F_F_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_20C_F_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_92a_F_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_F_C            : START_OF_FIELD '92C:' ~(START_OF_FIELD)+ ;

fld_99B_F_B            : START_OF_FIELD '99B:' ~(START_OF_FIELD)+ ;

fld_19A_F_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_70C_F_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;



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