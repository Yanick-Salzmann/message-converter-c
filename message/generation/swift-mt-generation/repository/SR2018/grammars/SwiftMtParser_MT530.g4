grammar SwiftMtParser_MT530;

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

mt                     : TAG_MT seq_A seq_B+ seq_C*  MT_END;

seq_A                  : fld_16R_A fld_20C_A fld_23G_A fld_98a_A? fld_95a_A* fld_97a_A fld_16S_A ;
seq_B                  : fld_16R_B fld_20C_B+ fld_22F_B+ seq_B1* fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_22F_B1? fld_13a_B1? fld_20C_B1 fld_16S_B1 ;
seq_C                  : fld_16R_C fld_20C_C? fld_12A_C? fld_97a_C? fld_35B_C? fld_36B_C? fld_98a_C* fld_95a_C* seq_C1? fld_16S_C ;
seq_C1                 : fld_16R_C1 fld_25D_C1 seq_C1a* fld_16S_C1 ;
seq_C1a                : fld_16R_C1a fld_24B_C1a fld_70D_C1a? fld_16S_C1a ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_95a_A              : fld_95a_A_L | fld_95a_A_P | fld_95a_A_R ;
fld_97a_A              : fld_97a_A_A | fld_97a_A_B ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_B              : fld_20C_B_C ;
fld_22F_B              : fld_22F_B_F ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_B1             : fld_22F_B1_F ;
fld_13a_B1             : fld_13a_B1_A | fld_13a_B1_B ;
fld_20C_B1             : fld_20C_B1_C ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_C              : fld_20C_C_C ;
fld_12A_C              : fld_12A_C_A ;
fld_97a_C              : fld_97a_C_A | fld_97a_C_B ;
fld_35B_C              : fld_35B_C_B ;
fld_36B_C              : fld_36B_C_B ;
fld_98a_C              : fld_98a_C_A | fld_98a_C_C ;
fld_95a_C              : fld_95a_C_P | fld_95a_C_Q | fld_95a_C_R ;
fld_16R_C1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_25D_C1             : fld_25D_C1_D ;
fld_16R_C1a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_24B_C1a            : fld_24B_C1a_B ;
fld_70D_C1a            : fld_70D_C1a_D ;
fld_16S_C1a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_C1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_95a_A_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_A_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_A_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_20C_B_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22F_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_B1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_B1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_B1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_20C_C_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_12A_C_A            : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;

fld_97a_C_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_C_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_35B_C_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36B_C_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_98a_C_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_95a_C_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_25D_C1_D           : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_24B_C1a_B          : START_OF_FIELD '24B:' ~(START_OF_FIELD)+ ;

fld_70D_C1a_D          : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;



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