grammar SwiftMtParser_MT564;

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

mt                     : TAG_MT seq_A seq_B seq_C? seq_D? seq_E* seq_F?  MT_END;

seq_A                  : fld_16R_A fld_28E_A? fld_20C_A+ fld_23G_A fld_22F_A+ fld_98a_A? fld_25D_A seq_A1* fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_22F_A1? fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_35B_B seq_B1? seq_B2+ fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_94B_B1? fld_22F_B1? fld_12a_B1* fld_11A_B1? fld_98A_B1* fld_92a_B1* fld_36B_B1* fld_16S_B1 ;
seq_B2                 : fld_16R_B2 fld_95a_B2? fld_97a_B2 fld_94a_B2? fld_93a_B2* fld_16S_B2 ;
seq_C                  : fld_16R_C fld_35B_C fld_36a_C? fld_93a_C* fld_22F_C* fld_92D_C? fld_90B_C? fld_98a_C+ fld_69a_C? fld_16S_C ;
seq_D                  : fld_16R_D fld_98a_D* fld_69a_D* fld_99A_D? fld_92a_D* fld_90a_D* fld_36a_D* fld_13a_D* fld_17B_D* fld_22F_D* fld_94E_D* fld_70a_D* fld_16S_D ;
seq_E                  : fld_16R_E fld_13A_E fld_22F_E+ fld_94C_E* fld_11A_E? fld_17B_E+ fld_35B_E? fld_98a_E* fld_69a_E* fld_92a_E* fld_90a_E* fld_36a_E* seq_E1* seq_E2* fld_70E_E* fld_16S_E ;
seq_E1                 : fld_16R_E1 fld_22a_E1+ fld_35B_E1 seq_E1a? fld_36B_E1* fld_94a_E1* fld_22F_E1? fld_11A_E1? fld_69a_E1? fld_90a_E1* fld_92a_E1* fld_98a_E1+ fld_16S_E1 ;
seq_E1a                : fld_16R_E1a fld_94B_E1a? fld_22F_E1a? fld_12a_E1a* fld_11A_E1a? fld_98A_E1a* fld_90a_E1a? fld_92a_E1a* fld_36B_E1a* fld_16S_E1a ;
seq_E2                 : fld_16R_E2 fld_22a_E2+ fld_94C_E2? fld_97a_E2? fld_19B_E2* fld_98a_E2+ fld_92a_E2* fld_90a_E2* fld_16S_E2 ;
seq_F                  : fld_16R_F fld_70E_F* fld_95a_F* fld_16S_F ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_28E_A              : fld_28E_A_E ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_22F_A              : fld_22F_A_F ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C ;
fld_25D_A              : fld_25D_A_D ;
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
fld_12a_B1             : fld_12a_B1_A | fld_12a_B1_B | fld_12a_B1_C ;
fld_11A_B1             : fld_11A_B1_A ;
fld_98A_B1             : fld_98A_B1_A ;
fld_92a_B1             : fld_92a_B1_A | fld_92a_B1_D | fld_92a_B1_K ;
fld_36B_B1             : fld_36B_B1_B ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B2             : fld_95a_B2_P | fld_95a_B2_R ;
fld_97a_B2             : fld_97a_B2_A | fld_97a_B2_C ;
fld_94a_B2             : fld_94a_B2_B | fld_94a_B2_C | fld_94a_B2_F ;
fld_93a_B2             : fld_93a_B2_B | fld_93a_B2_C ;
fld_16S_B2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_35B_C              : fld_35B_C_B ;
fld_36a_C              : fld_36a_C_B | fld_36a_C_E ;
fld_93a_C              : fld_93a_C_B | fld_93a_C_C ;
fld_22F_C              : fld_22F_C_F ;
fld_92D_C              : fld_92D_C_D ;
fld_90B_C              : fld_90B_C_B ;
fld_98a_C              : fld_98a_C_A | fld_98a_C_B ;
fld_69a_C              : fld_69a_C_A | fld_69a_C_B | fld_69a_C_C | fld_69a_C_D | fld_69a_C_E | fld_69a_C_F ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_D              : fld_98a_D_A | fld_98a_D_B | fld_98a_D_C | fld_98a_D_E ;
fld_69a_D              : fld_69a_D_A | fld_69a_D_B | fld_69a_D_C | fld_69a_D_D | fld_69a_D_E | fld_69a_D_F | fld_69a_D_J ;
fld_99A_D              : fld_99A_D_A ;
fld_92a_D              : fld_92a_D_A | fld_92a_D_F | fld_92a_D_K | fld_92a_D_P ;
fld_90a_D              : fld_90a_D_A | fld_90a_D_B | fld_90a_D_E | fld_90a_D_L ;
fld_36a_D              : fld_36a_D_B | fld_36a_D_C ;
fld_13a_D              : fld_13a_D_A | fld_13a_D_B ;
fld_17B_D              : fld_17B_D_B ;
fld_22F_D              : fld_22F_D_F ;
fld_94E_D              : fld_94E_D_E ;
fld_70a_D              : fld_70a_D_E | fld_70a_D_G ;
fld_16S_D              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13A_E              : fld_13A_E_A ;
fld_22F_E              : fld_22F_E_F ;
fld_94C_E              : fld_94C_E_C ;
fld_11A_E              : fld_11A_E_A ;
fld_17B_E              : fld_17B_E_B ;
fld_35B_E              : fld_35B_E_B ;
fld_98a_E              : fld_98a_E_A | fld_98a_E_B | fld_98a_E_C | fld_98a_E_E | fld_98a_E_F | fld_98a_E_J | fld_98a_E_K ;
fld_69a_E              : fld_69a_E_A | fld_69a_E_B | fld_69a_E_C | fld_69a_E_D | fld_69a_E_E | fld_69a_E_F | fld_69a_E_J ;
fld_92a_E              : fld_92a_E_A | fld_92a_E_B | fld_92a_E_F | fld_92a_E_H | fld_92a_E_J | fld_92a_E_K | fld_92a_E_R ;
fld_90a_E              : fld_90a_E_A | fld_90a_E_B | fld_90a_E_E ;
fld_36a_E              : fld_36a_E_B | fld_36a_E_C ;
fld_16R_E1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22a_E1             : fld_22a_E1_F | fld_22a_E1_H ;
fld_35B_E1             : fld_35B_E1_B ;
fld_16R_E1a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94B_E1a            : fld_94B_E1a_B ;
fld_22F_E1a            : fld_22F_E1a_F ;
fld_12a_E1a            : fld_12a_E1a_A | fld_12a_E1a_B | fld_12a_E1a_C ;
fld_11A_E1a            : fld_11A_E1a_A ;
fld_98A_E1a            : fld_98A_E1a_A ;
fld_90a_E1a            : fld_90a_E1a_A | fld_90a_E1a_B | fld_90a_E1a_E ;
fld_92a_E1a            : fld_92a_E1a_A | fld_92a_E1a_K ;
fld_36B_E1a            : fld_36B_E1a_B ;
fld_16S_E1a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_36B_E1             : fld_36B_E1_B ;
fld_94a_E1             : fld_94a_E1_B | fld_94a_E1_C | fld_94a_E1_F ;
fld_22F_E1             : fld_22F_E1_F ;
fld_11A_E1             : fld_11A_E1_A ;
fld_69a_E1             : fld_69a_E1_A | fld_69a_E1_B | fld_69a_E1_C | fld_69a_E1_D | fld_69a_E1_E | fld_69a_E1_F | fld_69a_E1_J ;
fld_90a_E1             : fld_90a_E1_A | fld_90a_E1_B | fld_90a_E1_E | fld_90a_E1_F | fld_90a_E1_J | fld_90a_E1_K | fld_90a_E1_L ;
fld_92a_E1             : fld_92a_E1_A | fld_92a_E1_D | fld_92a_E1_F | fld_92a_E1_K | fld_92a_E1_L | fld_92a_E1_M | fld_92a_E1_N ;
fld_98a_E1             : fld_98a_E1_A | fld_98a_E1_B | fld_98a_E1_C | fld_98a_E1_E ;
fld_16S_E1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22a_E2             : fld_22a_E2_F | fld_22a_E2_H ;
fld_94C_E2             : fld_94C_E2_C ;
fld_97a_E2             : fld_97a_E2_A | fld_97a_E2_E ;
fld_19B_E2             : fld_19B_E2_B ;
fld_98a_E2             : fld_98a_E2_A | fld_98a_E2_B | fld_98a_E2_C | fld_98a_E2_E ;
fld_92a_E2             : fld_92a_E2_A | fld_92a_E2_B | fld_92a_E2_F | fld_92a_E2_H | fld_92a_E2_J | fld_92a_E2_K | fld_92a_E2_M | fld_92a_E2_R ;
fld_90a_E2             : fld_90a_E2_A | fld_90a_E2_B | fld_90a_E2_E | fld_90a_E2_F | fld_90a_E2_J | fld_90a_E2_K | fld_90a_E2_L ;
fld_16S_E2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_70E_E              : fld_70E_E_E ;
fld_16S_E              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_F              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_70E_F              : fld_70E_F_E ;
fld_95a_F              : fld_95a_F_P | fld_95a_F_Q | fld_95a_F_R ;
fld_16S_F              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_28E_A_E            : START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_25D_A_D            : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_B1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B1_A           : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_B1_B           : START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_B1_C           : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_B1_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92a_B1_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_B1_D           : START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;
fld_92a_B1_K           : START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;

fld_36B_B1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_95a_B2_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B2_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_B2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B2_C           : START_OF_FIELD '97C:' ~(START_OF_FIELD)+ ;

fld_94a_B2_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B2_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B2_F           : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_93a_B2_B           : START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;
fld_93a_B2_C           : START_OF_FIELD '93C:' ~(START_OF_FIELD)+ ;

fld_35B_C_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36a_C_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_C_E            : START_OF_FIELD '36E:' ~(START_OF_FIELD)+ ;

fld_93a_C_B            : START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;
fld_93a_C_C            : START_OF_FIELD '93C:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_92D_C_D            : START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;

fld_90B_C_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_98a_C_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;

fld_69a_C_A            : START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_C_B            : START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_C_C            : START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_C_D            : START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_C_E            : START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_C_F            : START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;

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
fld_69a_D_J            : START_OF_FIELD '69J:' ~(START_OF_FIELD)+ ;

fld_99A_D_A            : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_92a_D_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D_F            : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D_K            : START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_D_P            : START_OF_FIELD '92P:' ~(START_OF_FIELD)+ ;

fld_90a_D_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_D_E            : START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;
fld_90a_D_L            : START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_36a_D_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_D_C            : START_OF_FIELD '36C:' ~(START_OF_FIELD)+ ;

fld_13a_D_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_D_B            : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_17B_D_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_22F_D_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_94E_D_E            : START_OF_FIELD '94E:' ~(START_OF_FIELD)+ ;

fld_70a_D_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;
fld_70a_D_G            : START_OF_FIELD '70G:' ~(START_OF_FIELD)+ ;

fld_13A_E_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;

fld_22F_E_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_94C_E_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_11A_E_A            : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_17B_E_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_35B_E_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_98a_E_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_E_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_E_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;
fld_98a_E_F            : START_OF_FIELD '98F:' ~(START_OF_FIELD)+ ;
fld_98a_E_J            : START_OF_FIELD '98J:' ~(START_OF_FIELD)+ ;
fld_98a_E_K            : START_OF_FIELD '98K:' ~(START_OF_FIELD)+ ;

fld_69a_E_A            : START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_E_B            : START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_E_C            : START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_E_D            : START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_E_E            : START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_E_F            : START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;
fld_69a_E_J            : START_OF_FIELD '69J:' ~(START_OF_FIELD)+ ;

fld_92a_E_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E_B            : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;
fld_92a_E_F            : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_E_H            : START_OF_FIELD '92H:' ~(START_OF_FIELD)+ ;
fld_92a_E_J            : START_OF_FIELD '92J:' ~(START_OF_FIELD)+ ;
fld_92a_E_K            : START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_E_R            : START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_E_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_E_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_E_E            : START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;

fld_36a_E_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_E_C            : START_OF_FIELD '36C:' ~(START_OF_FIELD)+ ;

fld_22a_E1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_E1_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_35B_E1_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_E1a_B          : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_E1a_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_E1a_A          : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_E1a_B          : START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_E1a_C          : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_E1a_A          : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_E1a_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_90a_E1a_A          : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_E1a_B          : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_E1a_E          : START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;

fld_92a_E1a_A          : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E1a_K          : START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;

fld_36B_E1a_B          : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_36B_E1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_94a_E1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_E1_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_E1_F           : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_22F_E1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_11A_E1_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_69a_E1_A           : START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_E1_B           : START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_E1_C           : START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_E1_D           : START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_E1_E           : START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_E1_F           : START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;
fld_69a_E1_J           : START_OF_FIELD '69J:' ~(START_OF_FIELD)+ ;

fld_90a_E1_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_E1_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_E1_E           : START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;
fld_90a_E1_F           : START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_E1_J           : START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_E1_K           : START_OF_FIELD '90K:' ~(START_OF_FIELD)+ ;
fld_90a_E1_L           : START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_92a_E1_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E1_D           : START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;
fld_92a_E1_F           : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_E1_K           : START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_E1_L           : START_OF_FIELD '92L:' ~(START_OF_FIELD)+ ;
fld_92a_E1_M           : START_OF_FIELD '92M:' ~(START_OF_FIELD)+ ;
fld_92a_E1_N           : START_OF_FIELD '92N:' ~(START_OF_FIELD)+ ;

fld_98a_E1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E1_B           : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_E1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_E1_E           : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22a_E2_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_E2_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_94C_E2_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_97a_E2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_E2_E           : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_19B_E2_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_98a_E2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E2_B           : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_E2_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_E2_E           : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_92a_E2_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E2_B           : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;
fld_92a_E2_F           : START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_E2_H           : START_OF_FIELD '92H:' ~(START_OF_FIELD)+ ;
fld_92a_E2_J           : START_OF_FIELD '92J:' ~(START_OF_FIELD)+ ;
fld_92a_E2_K           : START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_E2_M           : START_OF_FIELD '92M:' ~(START_OF_FIELD)+ ;
fld_92a_E2_R           : START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_E2_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_E2_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_E2_E           : START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;
fld_90a_E2_F           : START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_E2_J           : START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_E2_K           : START_OF_FIELD '90K:' ~(START_OF_FIELD)+ ;
fld_90a_E2_L           : START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_70E_E_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_70E_F_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_95a_F_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_F_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_F_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;



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