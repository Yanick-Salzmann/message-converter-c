grammar SwiftMtParser_MT566;

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

mt                     : TAG_MT seq_A seq_B seq_C? seq_D seq_E?  MT_END;

seq_A                  : fld_16R_A fld_20C_A+ fld_23G_A fld_22F_A fld_98a_A? seq_A1* fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_22F_A1? fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_95a_B? fld_97A_B fld_94a_B? fld_35B_B seq_B1? fld_93a_B+ fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_94B_B1? fld_22F_B1? fld_12a_B1? fld_11A_B1? fld_98A_B1* fld_92a_B1* fld_36B_B1* fld_16S_B1 ;
seq_C                  : fld_16R_C fld_98a_C* fld_69a_C* fld_99A_C? fld_92a_C* fld_90a_C* fld_36a_C* fld_13a_C* fld_17B_C* fld_22F_C* fld_16S_C ;
seq_D                  : fld_16R_D fld_13A_D fld_22a_D+ fld_11A_D? fld_98a_D* fld_69a_D* fld_92a_D* fld_90a_D* fld_94B_D? seq_D1* seq_D2* fld_16S_D ;
seq_D1                 : fld_16R_D1 fld_22a_D1+ fld_35B_D1 seq_D1a? fld_36B_D1+ fld_94a_D1* fld_22F_D1? fld_11A_D1? fld_90a_D1* fld_92a_D1* fld_98a_D1+ seq_D1b* fld_16S_D1 ;
seq_D1a                : fld_16R_D1a fld_94B_D1a? fld_22F_D1a? fld_12a_D1a? fld_11A_D1a? fld_98A_D1a* fld_90a_D1a? fld_92A_D1a* fld_36B_D1a* fld_16S_D1a ;
seq_D1b                : fld_16R_D1b fld_95a_D1b+ fld_97A_D1b? fld_20C_D1b? fld_16S_D1b ;
seq_D2                 : fld_16R_D2 fld_22a_D2+ fld_94C_D2? fld_97a_D2? seq_D2a* fld_19B_D2+ fld_98a_D2+ fld_92a_D2* fld_90a_D2* seq_D2b? fld_16S_D2 ;
seq_D2a                : fld_16R_D2a fld_95a_D2a+ fld_97a_D2a? fld_20C_D2a? fld_16S_D2a ;
seq_D2b                : fld_16R_D2b fld_20C_D2b fld_98a_D2b* fld_16S_D2b ;
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
fld_95a_B              : fld_95a_B_P | fld_95a_B_R ;
fld_97A_B              : fld_97A_B_A ;
fld_94a_B              : fld_94a_B_B | fld_94a_B_C | fld_94a_B_F ;
fld_35B_B              : fld_35B_B_B ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94B_B1             : fld_94B_B1_B ;
fld_22F_B1             : fld_22F_B1_F ;
fld_12a_B1             : fld_12a_B1_A | fld_12a_B1_C ;
fld_11A_B1             : fld_11A_B1_A ;
fld_98A_B1             : fld_98A_B1_A ;
fld_92a_B1             : fld_92a_B1_A | fld_92a_B1_D ;
fld_36B_B1             : fld_36B_B1_B ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_93a_B              : fld_93a_B_B | fld_93a_B_C ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_C              : fld_98a_C_A | fld_98a_C_B | fld_98a_C_C | fld_98a_C_E ;
fld_69a_C              : fld_69a_C_A | fld_69a_C_B | fld_69a_C_C | fld_69a_C_D | fld_69a_C_E | fld_69a_C_F ;
fld_99A_C              : fld_99A_C_A ;
fld_92a_C              : fld_92a_C_A | fld_92a_C_F | fld_92a_C_K | fld_92a_C_P ;
fld_90a_C              : fld_90a_C_A | fld_90a_C_B | fld_90a_C_L ;
fld_36a_C              : fld_36a_C_B | fld_36a_C_C ;
fld_13a_C              : fld_13a_C_A | fld_13a_C_B ;
fld_17B_C              : fld_17B_C_B ;
fld_22F_C              : fld_22F_C_F ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13A_D              : fld_13A_D_A ;
fld_22a_D              : fld_22a_D_F | fld_22a_D_H ;
fld_11A_D              : fld_11A_D_A ;
fld_98a_D              : fld_98a_D_A | fld_98a_D_B | fld_98a_D_C | fld_98a_D_E ;
fld_69a_D              : fld_69a_D_A | fld_69a_D_B | fld_69a_D_C | fld_69a_D_D | fld_69a_D_E | fld_69a_D_F ;
fld_92a_D              : fld_92a_D_A | fld_92a_D_F | fld_92a_D_H | fld_92a_D_J | fld_92a_D_R ;
fld_90a_D              : fld_90a_D_A | fld_90a_D_B ;
fld_94B_D              : fld_94B_D_B ;
fld_16R_D1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22a_D1             : fld_22a_D1_F | fld_22a_D1_H ;
fld_35B_D1             : fld_35B_D1_B ;
fld_16R_D1a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94B_D1a            : fld_94B_D1a_B ;
fld_22F_D1a            : fld_22F_D1a_F ;
fld_12a_D1a            : fld_12a_D1a_A | fld_12a_D1a_C ;
fld_11A_D1a            : fld_11A_D1a_A ;
fld_98A_D1a            : fld_98A_D1a_A ;
fld_90a_D1a            : fld_90a_D1a_A | fld_90a_D1a_B ;
fld_92A_D1a            : fld_92A_D1a_A ;
fld_36B_D1a            : fld_36B_D1a_B ;
fld_16S_D1a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_36B_D1             : fld_36B_D1_B ;
fld_94a_D1             : fld_94a_D1_B | fld_94a_D1_C | fld_94a_D1_F ;
fld_22F_D1             : fld_22F_D1_F ;
fld_11A_D1             : fld_11A_D1_A ;
fld_90a_D1             : fld_90a_D1_A | fld_90a_D1_B | fld_90a_D1_F | fld_90a_D1_J | fld_90a_D1_K | fld_90a_D1_L ;
fld_92a_D1             : fld_92a_D1_A | fld_92a_D1_D | fld_92a_D1_F | fld_92a_D1_L | fld_92a_D1_M | fld_92a_D1_N ;
fld_98a_D1             : fld_98a_D1_A | fld_98a_D1_B | fld_98a_D1_C | fld_98a_D1_E ;
fld_16R_D1b            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_D1b            : fld_95a_D1b_C | fld_95a_D1b_P | fld_95a_D1b_Q | fld_95a_D1b_R | fld_95a_D1b_S ;
fld_97A_D1b            : fld_97A_D1b_A ;
fld_20C_D1b            : fld_20C_D1b_C ;
fld_16S_D1b            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_D1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22a_D2             : fld_22a_D2_F | fld_22a_D2_H ;
fld_94C_D2             : fld_94C_D2_C ;
fld_97a_D2             : fld_97a_D2_A | fld_97a_D2_E ;
fld_16R_D2a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_D2a            : fld_95a_D2a_P | fld_95a_D2a_Q | fld_95a_D2a_R | fld_95a_D2a_S ;
fld_97a_D2a            : fld_97a_D2a_A | fld_97a_D2a_E ;
fld_20C_D2a            : fld_20C_D2a_C ;
fld_16S_D2a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_19B_D2             : fld_19B_D2_B ;
fld_98a_D2             : fld_98a_D2_A | fld_98a_D2_C | fld_98a_D2_E ;
fld_92a_D2             : fld_92a_D2_A | fld_92a_D2_B | fld_92a_D2_F | fld_92a_D2_H | fld_92a_D2_J | fld_92a_D2_M | fld_92a_D2_R ;
fld_90a_D2             : fld_90a_D2_A | fld_90a_D2_B | fld_90a_D2_F | fld_90a_D2_J | fld_90a_D2_K | fld_90a_D2_L ;
fld_16R_D2b            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_D2b            : fld_20C_D2b_C ;
fld_98a_D2b            : fld_98a_D2b_A | fld_98a_D2b_C ;
fld_16S_D2b            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_D2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
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

fld_95a_B_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97A_B_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B_F            : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_B1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B1_A           : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_B1_C           : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_B1_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92a_B1_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_B1_D           : START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;

fld_36B_B1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_93a_B_B            : START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;
fld_93a_B_C            : START_OF_FIELD '93C:' ~(START_OF_FIELD)+ ;

fld_98a_C_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_C_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_C_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_69a_C_A            : START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_C_B            : START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_C_C            : START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_C_D            : START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_C_E            : START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_C_F            : START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;

fld_99A_C_A            : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_92a_C_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_C_F            : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_C_K            : START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_C_P            : START_OF_FIELD '92P:' ~(START_OF_FIELD)+ ;

fld_90a_C_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_C_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_C_L            : START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_36a_C_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_C_C            : START_OF_FIELD '36C:' ~(START_OF_FIELD)+ ;

fld_13a_C_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_C_B            : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_17B_C_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13A_D_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;

fld_22a_D_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_D_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_11A_D_A            : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98a_D_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_D_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_D_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_69a_D_A            : START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_D_B            : START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_D_C            : START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_D_D            : START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_D_E            : START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_D_F            : START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;

fld_92a_D_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D_F            : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D_H            : START_OF_FIELD '92H:' ~(START_OF_FIELD)+ ;
fld_92a_D_J            : START_OF_FIELD '92J:' ~(START_OF_FIELD)+ ;
fld_92a_D_R            : START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_D_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_94B_D_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22a_D1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_D1_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_35B_D1_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_D1a_B          : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_D1a_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_D1a_A          : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_D1a_C          : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_D1a_A          : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_D1a_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_90a_D1a_A          : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D1a_B          : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_92A_D1a_A          : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_36B_D1a_B          : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_36B_D1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_94a_D1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_D1_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_D1_F           : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_22F_D1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_11A_D1_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_90a_D1_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D1_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_D1_F           : START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_D1_J           : START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_D1_K           : START_OF_FIELD '90K:' ~(START_OF_FIELD)+ ;
fld_90a_D1_L           : START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_92a_D1_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D1_D           : START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;
fld_92a_D1_F           : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D1_L           : START_OF_FIELD '92L:' ~(START_OF_FIELD)+ ;
fld_92a_D1_M           : START_OF_FIELD '92M:' ~(START_OF_FIELD)+ ;
fld_92a_D1_N           : START_OF_FIELD '92N:' ~(START_OF_FIELD)+ ;

fld_98a_D1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D1_B           : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_D1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_D1_E           : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_95a_D1b_C          : START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_D1b_P          : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D1b_Q          : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D1b_R          : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_D1b_S          : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97A_D1b_A          : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_20C_D1b_C          : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22a_D2_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_D2_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_94C_D2_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_97a_D2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D2_E           : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_95a_D2a_P          : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D2a_Q          : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D2a_R          : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_D2a_S          : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_D2a_A          : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D2a_E          : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_20C_D2a_C          : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_19B_D2_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_98a_D2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D2_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_D2_E           : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_92a_D2_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D2_B           : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;
fld_92a_D2_F           : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D2_H           : START_OF_FIELD '92H:' ~(START_OF_FIELD)+ ;
fld_92a_D2_J           : START_OF_FIELD '92J:' ~(START_OF_FIELD)+ ;
fld_92a_D2_M           : START_OF_FIELD '92M:' ~(START_OF_FIELD)+ ;
fld_92a_D2_R           : START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_D2_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D2_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_D2_F           : START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_D2_J           : START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_D2_K           : START_OF_FIELD '90K:' ~(START_OF_FIELD)+ ;
fld_90a_D2_L           : START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_20C_D2b_C          : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_98a_D2b_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D2b_C          : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

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