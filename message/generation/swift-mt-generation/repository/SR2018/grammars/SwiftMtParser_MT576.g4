grammar SwiftMtParser_MT576;

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

mt                     : TAG_MT seq_A seq_B* seq_C?  MT_END;

seq_A                  : fld_16R_A fld_28E_A fld_13A_A? fld_20C_A fld_23G_A fld_98a_A+ seq_A1* fld_95a_A* fld_97a_A? fld_17B_A fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_35B_B seq_B1? seq_B2* fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_94B_B1? fld_22F_B1* fld_12a_B1* fld_11A_B1? fld_98A_B1* fld_92A_B1* fld_13a_B1* fld_17B_B1* fld_90a_B1* fld_36B_B1* fld_70E_B1? fld_16S_B1 ;
seq_B2                 : fld_16R_B2 fld_98a_B2? fld_36B_B2* fld_19A_B2* fld_11A_B2? seq_B2a* seq_B2b* fld_22a_B2+ fld_98a_B2* seq_B2c* fld_16S_B2 ;
seq_B2a                : fld_16R_B2a fld_13a_B2a? fld_20C_B2a fld_16S_B2a ;
seq_B2b                : fld_16R_B2b fld_90a_B2b fld_22F_B2b? fld_16S_B2b ;
seq_B2c                : fld_16R_B2c fld_95a_B2c+ fld_97a_B2c? fld_98a_B2c? fld_20C_B2c? fld_70a_B2c* fld_22F_B2c? fld_16S_B2c ;
seq_C                  : fld_16R_C fld_95a_C* fld_16S_C ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_28E_A              : fld_28E_A_E ;
fld_13A_A              : fld_13A_A_A ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_95a_A              : fld_95a_A_L | fld_95a_A_P | fld_95a_A_R ;
fld_97a_A              : fld_97a_A_A | fld_97a_A_B ;
fld_17B_A              : fld_17B_A_B ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
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
fld_98a_B2             : fld_98a_B2_A | fld_98a_B2_C ;
fld_36B_B2             : fld_36B_B2_B ;
fld_19A_B2             : fld_19A_B2_A ;
fld_11A_B2             : fld_11A_B2_A ;
fld_16R_B2a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_B2a            : fld_13a_B2a_A | fld_13a_B2a_B ;
fld_20C_B2a            : fld_20C_B2a_C ;
fld_16S_B2a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B2b            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_90a_B2b            : fld_90a_B2b_A | fld_90a_B2b_B ;
fld_22F_B2b            : fld_22F_B2b_F ;
fld_16S_B2b            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_22a_B2             : fld_22a_B2_F | fld_22a_B2_H ;
fld_98a_B2             : fld_98a_B2_A | fld_98a_B2_C ;
fld_16R_B2c            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B2c            : fld_95a_B2c_L | fld_95a_B2c_P | fld_95a_B2c_Q | fld_95a_B2c_R | fld_95a_B2c_S ;
fld_97a_B2c            : fld_97a_B2c_A | fld_97a_B2c_B ;
fld_98a_B2c            : fld_98a_B2c_A | fld_98a_B2c_C ;
fld_20C_B2c            : fld_20C_B2c_C ;
fld_70a_B2c            : fld_70a_B2c_C | fld_70a_B2c_E ;
fld_22F_B2c            : fld_22F_B2c_F ;
fld_16S_B2c            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_C              : fld_95a_C_P | fld_95a_C_Q | fld_95a_C_R ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_28E_A_E            : START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

fld_13A_A_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;

fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_95a_A_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_A_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_A_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_17B_A_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

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

fld_98a_B2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B2_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_36B_B2_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_19A_B2_A           : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_11A_B2_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_13a_B2a_A          : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_B2a_B          : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_B2a_C          : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_90a_B2b_A          : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B2b_B          : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_22F_B2b_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_22a_B2_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B2_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_98a_B2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B2_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_95a_B2c_L          : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_B2c_P          : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B2c_Q          : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B2c_R          : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_B2c_S          : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_B2c_A          : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B2c_B          : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_98a_B2c_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B2c_C          : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_B2c_C          : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_B2c_C          : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_B2c_E          : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_B2c_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_95a_C_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;



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