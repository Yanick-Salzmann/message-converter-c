grammar SwiftMtParser_MT535;

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

mt                     : TAG_MT seq_A seq_B*  MT_END;

seq_A                  : fld_16R_A fld_28E_A fld_13a_A? fld_20C_A fld_23G_A fld_98a_A+ fld_22F_A+ seq_A1* fld_95a_A* fld_97a_A fld_17B_A+ fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_95a_B* fld_97a_B? fld_94a_B* fld_17B_B? seq_B1* ;
seq_B1                 : fld_16R_B1 fld_35B_B1 seq_B1a? fld_22H_B1? fld_90a_B1? fld_94B_B1? fld_98a_B1? fld_93B_B1+ seq_B1b* ;
seq_B1a                : fld_16R_B1a fld_94a_B1a* fld_22F_B1a* fld_12a_B1a* fld_11A_B1a? fld_98A_B1a* fld_92A_B1a* fld_13a_B1a* fld_17B_B1a* fld_90a_B1a* fld_36B_B1a* fld_35B_B1a* fld_70E_B1a? fld_16S_B1a ;
seq_B1b                : fld_16R_B1b fld_93a_B1b+ fld_22a_B1b? fld_94a_B1b* fld_90a_B1b? fld_98a_B1b? fld_99A_B1b? fld_19A_B1b* fld_92B_B1b? fld_70C_B1b? ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_28E_A              : fld_28E_A_E ;
fld_13a_A              : fld_13a_A_A | fld_13a_A_J ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22F_A              : fld_22F_A_F ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_95a_A              : fld_95a_A_L | fld_95a_A_P | fld_95a_A_R ;
fld_97a_A              : fld_97a_A_A | fld_97a_A_B ;
fld_17B_A              : fld_17B_A_B ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B              : fld_95a_B_L | fld_95a_B_P | fld_95a_B_R ;
fld_97a_B              : fld_97a_B_A | fld_97a_B_B ;
fld_94a_B              : fld_94a_B_B | fld_94a_B_C | fld_94a_B_F | fld_94a_B_L ;
fld_17B_B              : fld_17B_B_B ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_35B_B1             : fld_35B_B1_B ;
fld_16R_B1a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94a_B1a            : fld_94a_B1a_B | fld_94a_B1a_D ;
fld_22F_B1a            : fld_22F_B1a_F ;
fld_12a_B1a            : fld_12a_B1a_A | fld_12a_B1a_B | fld_12a_B1a_C ;
fld_11A_B1a            : fld_11A_B1a_A ;
fld_98A_B1a            : fld_98A_B1a_A ;
fld_92A_B1a            : fld_92A_B1a_A ;
fld_13a_B1a            : fld_13a_B1a_A | fld_13a_B1a_B | fld_13a_B1a_K ;
fld_17B_B1a            : fld_17B_B1a_B ;
fld_90a_B1a            : fld_90a_B1a_A | fld_90a_B1a_B ;
fld_36B_B1a            : fld_36B_B1a_B ;
fld_35B_B1a            : fld_35B_B1a_B ;
fld_70E_B1a            : fld_70E_B1a_E ;
fld_16S_B1a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_22H_B1             : fld_22H_B1_H ;
fld_90a_B1             : fld_90a_B1_A | fld_90a_B1_B | fld_90a_B1_E ;
fld_94B_B1             : fld_94B_B1_B ;
fld_98a_B1             : fld_98a_B1_A | fld_98a_B1_C ;
fld_93B_B1             : fld_93B_B1_B ;
fld_16R_B1b            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_93a_B1b            : fld_93a_B1b_B | fld_93a_B1b_C ;
fld_22a_B1b            : fld_22a_B1b_F | fld_22a_B1b_H ;
fld_94a_B1b            : fld_94a_B1b_B | fld_94a_B1b_C | fld_94a_B1b_F | fld_94a_B1b_L ;
fld_90a_B1b            : fld_90a_B1b_A | fld_90a_B1b_B | fld_90a_B1b_E ;
fld_98a_B1b            : fld_98a_B1b_A | fld_98a_B1b_C ;
fld_99A_B1b            : fld_99A_B1b_A ;
fld_19A_B1b            : fld_19A_B1b_A ;
fld_92B_B1b            : fld_92B_B1b_B ;
fld_70C_B1b            : fld_70C_B1b_C ;


fld_28E_A_E            : START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

fld_13a_A_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A_J            : START_OF_FIELD '13J:' ~(START_OF_FIELD)+ ;

fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_95a_A_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_A_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_A_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_17B_A_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_95a_B_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_B_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_B_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B_F            : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;
fld_94a_B_L            : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_17B_B_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_35B_B1_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94a_B1a_B          : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B1a_D          : START_OF_FIELD '94D:' ~(START_OF_FIELD)+ ;

fld_22F_B1a_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B1a_A          : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_B1a_B          : START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_B1a_C          : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_B1a_A          : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B1a_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92A_B1a_A          : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_13a_B1a_A          : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_B1a_B          : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;
fld_13a_B1a_K          : START_OF_FIELD '13K:' ~(START_OF_FIELD)+ ;

fld_17B_B1a_B          : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_90a_B1a_A          : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B1a_B          : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_36B_B1a_B          : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_35B_B1a_B          : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_70E_B1a_E          : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22H_B1_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_90a_B1_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B1_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_B1_E           : START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;

fld_94B_B1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_98a_B1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_93B_B1_B           : START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;

fld_93a_B1b_B          : START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;
fld_93a_B1b_C          : START_OF_FIELD '93C:' ~(START_OF_FIELD)+ ;

fld_22a_B1b_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B1b_H          : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_94a_B1b_B          : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B1b_C          : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B1b_F          : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;
fld_94a_B1b_L          : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_90a_B1b_A          : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B1b_B          : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_B1b_E          : START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;

fld_98a_B1b_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B1b_C          : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_99A_B1b_A          : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_19A_B1b_A          : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_92B_B1b_B          : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;

fld_70C_B1b_C          : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;



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