grammar SwiftMtParser_MT527;

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

mt                     : TAG_MT seq_A seq_B? seq_C* seq_D* seq_E?  MT_END;

seq_A                  : fld_16R_A fld_28E_A fld_20C_A+ fld_23G_A fld_98a_A+ fld_22a_A+ fld_13B_A* fld_25D_A? seq_A1+ fld_70E_A* seq_A2* fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_95a_A1+ fld_97a_A1? fld_22F_A1? fld_16S_A1 ;
seq_A2                 : fld_16R_A2 fld_13a_A2? fld_20C_A2 fld_16S_A2 ;
seq_B                  : fld_16R_B fld_94B_B? fld_17B_B? fld_99B_B? fld_98a_B fld_19A_B* fld_92a_B* fld_22a_B* fld_16S_B ;
seq_C                  : fld_16R_C fld_22H_C fld_35B_C fld_36B_C fld_17B_C fld_97a_C? fld_20C_C? fld_16S_C ;
seq_D                  : fld_16R_D fld_22H_D fld_19A_D fld_17B_D? fld_97a_D? fld_20C_D? fld_16S_D ;
seq_E                  : fld_16R_E fld_95a_E* fld_16S_E ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_28E_A              : fld_28E_A_E ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22a_A              : fld_22a_A_F | fld_22a_A_H ;
fld_13B_A              : fld_13B_A_B ;
fld_25D_A              : fld_25D_A_D ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_A1             : fld_95a_A1_P | fld_95a_A1_Q | fld_95a_A1_R ;
fld_97a_A1             : fld_97a_A1_A | fld_97a_A1_B ;
fld_22F_A1             : fld_22F_A1_F ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_70E_A              : fld_70E_A_E ;
fld_16R_A2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A2             : fld_13a_A2_A | fld_13a_A2_B ;
fld_20C_A2             : fld_20C_A2_C ;
fld_16S_A2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94B_B              : fld_94B_B_B ;
fld_17B_B              : fld_17B_B_B ;
fld_99B_B              : fld_99B_B_B ;
fld_98a_B              : fld_98a_B_A | fld_98a_B_B | fld_98a_B_C ;
fld_19A_B              : fld_19A_B_A ;
fld_92a_B              : fld_92a_B_A | fld_92a_B_C ;
fld_22a_B              : fld_22a_B_F | fld_22a_B_H ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22H_C              : fld_22H_C_H ;
fld_35B_C              : fld_35B_C_B ;
fld_36B_C              : fld_36B_C_B ;
fld_17B_C              : fld_17B_C_B ;
fld_97a_C              : fld_97a_C_A | fld_97a_C_B ;
fld_20C_C              : fld_20C_C_C ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22H_D              : fld_22H_D_H ;
fld_19A_D              : fld_19A_D_A ;
fld_17B_D              : fld_17B_D_B ;
fld_97a_D              : fld_97a_D_A | fld_97a_D_E ;
fld_20C_D              : fld_20C_D_C ;
fld_16S_D              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_E              : fld_95a_E_C | fld_95a_E_P | fld_95a_E_Q | fld_95a_E_R ;
fld_16S_E              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_28E_A_E            : START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22a_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_A_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_13B_A_B            : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_25D_A_D            : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_95a_A1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_A1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_A1_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_A1_B           : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_70E_A_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_13a_A2_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A2_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A2_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_94B_B_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_17B_B_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_99B_B_B            : START_OF_FIELD '99B:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_19A_B_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_92a_B_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_B_C            : START_OF_FIELD '92C:' ~(START_OF_FIELD)+ ;

fld_22a_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_22H_C_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_35B_C_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36B_C_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_17B_C_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_97a_C_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_C_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_20C_C_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22H_D_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_19A_D_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_17B_D_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_97a_D_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D_E            : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_20C_D_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_95a_E_C            : START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
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