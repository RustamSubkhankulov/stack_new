#pragma once

#include <stdint.h>

//=========================================================

//PROCESSOR CONFIG

#define PROC_NUM_OF_CMND_LINE_ARGS 5

#define PROC_LOGS

#define REGISTER_SIZE 16

#define RAM_SIZE 2048 

#define FRAME_LENGTH 15

#define FRAME_WIDTH 41

#define VIDEO_MEMORY_ADDRESS 1024

#define VIDEO_SIZE FRAME_LENGTH * FRAME_WIDTH

#define PRECISION 1e-3

const float Sleep_duration = 0.5;

//=========================================================

/// Element type using in stack
/// 
/// Typedef for type that will be using in stack
typedef float elem_t;


/// Name of the element
///
/// String definition for the name of element type using in stack
#define TYPE_NAME "float"

#define ELEM_SPEC "%f"

#define ELEM_SPEC_2 "%g"

//=========================================================

//ASSEMBLER

#define ASM_NUM_OF_CMND_LINE_ARGS 5

#define ASM_LOGS

#define LISTING

#define ASM_MAX_CODE_SIZE 2048 

#define UD_JUMPS_NUMBER 10

#define STRING_JUMPS_NUMBER 10

#define OPERATION_NAME_BUF_SIZE 10

//LABELS

#define LABEL_NAME_SIZE 30

#define START_LABELS_NUMBER 10

//=========================================================

//DISASSEMBLER OPTIONS

#define DISASM_NUM_OF_CMND_LINE_ARGS 4

#define DISASM_DEBUG

#define DISASM_LOGS

#define DISASM_LISTING

//=========================================================

//STACK

#define DEBUG

///LOGS definition
///
/// Definition logs to turn on log reporting
/// Log reports will be printed in lof_file 
#define STACK_LOGS

#ifdef DEBUG

    ///CANARIES
    ///
    /// Definition that turns on canary protection  
    #define CANARIES

    ///HASH
    ///
    /// Definition that turns on hash protection
    #define HASH

#endif


/// Maximum capacity
///
/// Maximum capacity for stack(number of elements)
#define MAXCAPACITY 100

/// Size of name buff
///
/// Size of constant char array for names of file and function and line
/// where the stack was conctructed by calling stack_ctor_();
#define NAMEBUFSIZE 20

/// Starting size
///
/// Starting size of the stack when the first element is pushed 
#define STACK_STARTING_SIZE 4

/// Default pointer
///
/// Magical number for the stack->data pointer before the first stack->push call
#define DEFAULT_PTR 282

/// Poison value for stack->data
///
/// Poison value for the stack->data that to be set after stack_dtor_(); call
#define POISON_PTR 228

/// Poison value for the stack fields after stack_dtor_() call
#define POISON_VALUE (1000 - 7)

///Poison string that to be set in struct origin in debug mode
#define POISONSTR "POISONED"

///Default canary value to be checked in debug mode with canary protection turned on
const int64_t Canary_val = (int64_t)(0xDEAD1488C0DE1000);

/// Enumeration type used for stack_resize_ parameter
///
/// Parameter that stands to resize mode : expanding stack->data or reducing it
enum { REDUCE = 1000, EXPAND = 2000 };

//=========================================================

//TEXT_PROCESSING

#define TEXT_LOGS
