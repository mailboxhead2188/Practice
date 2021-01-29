#include <stddef.h>

#define CDECL // __cdecl
#define STDCALL // __stdcall

/* Declare structures, functions, variables and constants */
typedef struct CodeGenerator1 CodeGenerator1;
typedef struct Program5 Program5;
typedef struct Scope8 Scope8;
typedef struct Module7 Module7;
typedef struct DefinitionDictionary9 DefinitionDictionary9;
typedef struct SymbolDictionary27 SymbolDictionary27;
typedef struct Symbol29 Symbol29;
typedef struct Prototype31 Prototype31;
typedef struct Function33 Function33;
typedef struct Parameter35 Parameter35;
typedef struct ExternFunction36 ExternFunction36;
typedef struct GenericFunction37 GenericFunction37;
typedef struct Block38 Block38;
typedef struct Variable41 Variable41;
typedef struct VargParameter42 VargParameter42;
typedef struct LocalAlias43 LocalAlias43;
typedef struct Instruction44 Instruction44;
typedef struct EvaluateInstruction46 EvaluateInstruction46;
typedef struct AssignInstruction47 AssignInstruction47;
typedef struct VariableInstruction48 VariableInstruction48;
typedef struct ReturnInstruction49 ReturnInstruction49;
typedef struct LeaveInstruction50 LeaveInstruction50;
typedef struct IfInstruction51 IfInstruction51;
typedef struct WhileInstruction53 WhileInstruction53;
typedef struct BreakInstruction54 BreakInstruction54;
typedef struct SwitchInstruction55 SwitchInstruction55;
typedef struct BlockInstruction57 BlockInstruction57;
typedef struct DeferInstruction58 DeferInstruction58;
typedef struct Rule59 Rule59;
typedef struct Choice60 Choice60;
typedef struct Expression21 Expression21;
typedef struct ExpressionList61 ExpressionList61;
typedef struct ExpressionTypeList64 ExpressionTypeList64;
typedef struct ExpressionIterator65 ExpressionIterator65;
typedef struct IntegerExpression20 IntegerExpression20;
typedef struct String8Expression66 String8Expression66;
typedef struct String16Expression67 String16Expression67;
typedef struct StructureExpression68 StructureExpression68;
typedef struct ArrayExpression69 ArrayExpression69;
typedef struct FunctionExpression70 FunctionExpression70;
typedef struct GlobalExpression71 GlobalExpression71;
typedef struct BinaryExpression72 BinaryExpression72;
typedef struct UnaryExpression73 UnaryExpression73;
typedef struct TypeExpression74 TypeExpression74;
typedef struct CompositeExpression75 CompositeExpression75;
typedef struct FunctionCallExpression76 FunctionCallExpression76;
typedef struct ExternFunctionCallExpression77 ExternFunctionCallExpression77;
typedef struct PointerCallExpression78 PointerCallExpression78;
typedef struct ParameterExpression79 ParameterExpression79;
typedef struct LocalVariableExpression80 LocalVariableExpression80;
typedef struct GlobalVariableExpression81 GlobalVariableExpression81;
typedef struct CondExpression82 CondExpression82;
typedef struct VargsEachExpression83 VargsEachExpression83;
typedef struct AttributeExpression84 AttributeExpression84;
typedef struct MacroCallExpression85 MacroCallExpression85;
typedef struct MacroBlock86 MacroBlock86;
typedef struct SelectExpression87 SelectExpression87;
typedef struct VargsExpression88 VargsExpression88;
typedef struct Definition32 Definition32;
typedef struct Alias89 Alias89;
typedef struct ModuleDefinition90 ModuleDefinition90;
typedef struct TypeDefinition91 TypeDefinition91;
typedef struct SubTypeDefinition92 SubTypeDefinition92;
typedef struct OperationDefinition93 OperationDefinition93;
typedef struct GenericType94 GenericType94;
typedef struct GlobalVariable97 GlobalVariable97;
typedef struct Type98 Type98;
typedef struct MetaType99 MetaType99;
typedef struct BuiltinType100 BuiltinType100;
typedef struct PointerType101 PointerType101;
typedef struct ArrayType102 ArrayType102;
typedef struct FunctionType103 FunctionType103;
typedef struct StructureType104 StructureType104;
typedef struct TypeArgument106 TypeArgument106;
typedef struct Attribute107 Attribute107;
typedef struct TypeSequence108 TypeSequence108;
typedef struct ASTElement109 ASTElement109;
typedef struct ASTNode110 ASTNode110;
typedef struct ASTModule112 ASTModule112;
typedef struct ASTImport113 ASTImport113;
typedef struct ASTGlobalVariable114 ASTGlobalVariable114;
typedef struct ASTFunction115 ASTFunction115;
typedef struct ASTExternFunction116 ASTExternFunction116;
typedef struct ASTAlias117 ASTAlias117;
typedef struct ASTType118 ASTType118;
typedef struct ASTExtension119 ASTExtension119;
typedef struct ASTParameter120 ASTParameter120;
typedef struct ASTSymbol121 ASTSymbol121;
typedef struct ASTAttribute122 ASTAttribute122;
typedef struct ASTInstruction123 ASTInstruction123;
typedef struct ASTEvaluate124 ASTEvaluate124;
typedef struct ASTAssign125 ASTAssign125;
typedef struct ASTLocalVariables126 ASTLocalVariables126;
typedef struct ASTLocalVariable127 ASTLocalVariable127;
typedef struct ASTLocalAlias128 ASTLocalAlias128;
typedef struct ASTReturn129 ASTReturn129;
typedef struct ASTBreak130 ASTBreak130;
typedef struct ASTWhile131 ASTWhile131;
typedef struct ASTSwitch132 ASTSwitch132;
typedef struct ASTIf134 ASTIf134;
typedef struct ASTRule136 ASTRule136;
typedef struct ASTChoice137 ASTChoice137;
typedef struct ASTBegin138 ASTBegin138;
typedef struct ASTDefer139 ASTDefer139;
typedef struct ASTExpression140 ASTExpression140;
typedef struct ASTFreeCall141 ASTFreeCall141;
typedef struct ASTContextCall142 ASTContextCall142;
typedef struct ASTUnary143 ASTUnary143;
typedef struct ASTBinary144 ASTBinary144;
typedef struct ASTArray145 ASTArray145;
typedef struct ASTFunctionType146 ASTFunctionType146;
typedef struct ASTArrayType147 ASTArrayType147;
typedef struct ASTFunctionReference148 ASTFunctionReference148;
typedef struct ASTInteger149 ASTInteger149;
typedef struct ASTString150 ASTString150;
typedef struct ASTSymbolName151 ASTSymbolName151;
typedef struct ASTOffset152 ASTOffset152;
typedef struct ASTCond153 ASTCond153;
typedef struct ASTBlockClosure154 ASTBlockClosure154;
typedef struct ASTId155 ASTId155;
typedef struct Location45 Location45;
typedef struct DirectiveSet156 DirectiveSet156;
typedef struct ImportPath10 ImportPath10;
typedef struct Identifiers157 Identifiers157;
typedef struct ErrorReporter158 ErrorReporter158;
typedef struct MemoryBuffer159 MemoryBuffer159;
typedef struct MemoryPool160 MemoryPool160;
typedef struct StringBuffer2 StringBuffer2;
typedef struct ErrorCode161 ErrorCode161;
typedef struct Error162 Error162;
typedef struct ErrorClass163 ErrorClass163;
typedef struct SimpleError164 SimpleError164;
typedef struct SystemError165 SystemError165;
typedef struct File166 File166;
typedef struct FileError167 FileError167;
typedef struct DIR168 DIR168;
typedef struct DIRENT169 DIRENT169;
typedef struct FILE170 FILE170;
typedef struct IdentifierDictionary19 IdentifierDictionary19;
typedef struct Builder171 Builder171;
typedef struct BuilderContext177 BuilderContext177;
typedef struct MacroContext178 MacroContext178;
typedef struct BreakContext179 BreakContext179;
typedef struct LocalPool180 LocalPool180;
typedef struct IntegerConstantDictionary173 IntegerConstantDictionary173;
typedef struct Parser182 Parser182;
typedef struct TokenStream183 TokenStream183;
typedef struct Slot184 Slot184;
typedef struct MemoryPoolHead185 MemoryPoolHead185;
typedef struct SimpleDictionary186 SimpleDictionary186;
typedef struct Dictionary187 Dictionary187;
typedef struct Association188 Association188;
typedef struct Collection6 Collection6;
typedef struct DefinitionItem189 DefinitionItem189;
typedef struct CollectionPool11 CollectionPool11;
typedef struct CollectionPoolElement190 CollectionPoolElement190;
typedef struct Collection12 Collection12;
typedef struct CollectionPool13 CollectionPool13;
typedef struct CollectionPoolElement191 CollectionPoolElement191;
typedef struct Collection14 Collection14;
typedef struct CollectionPool15 CollectionPool15;
typedef struct CollectionPoolElement192 CollectionPoolElement192;
typedef struct Collection16 Collection16;
typedef struct CollectionPool17 CollectionPool17;
typedef struct CollectionPoolElement193 CollectionPoolElement193;
typedef struct Collection18 Collection18;
typedef struct IdentifierAssociation194 IdentifierAssociation194;
typedef struct Dictionary22 Dictionary22;
typedef struct Association195 Association195;
typedef struct Dictionary23 Dictionary23;
typedef struct Association196 Association196;
typedef struct Dictionary24 Dictionary24;
typedef struct Association197 Association197;
typedef struct SimpleDictionary25 SimpleDictionary25;
typedef struct Dictionary26 Dictionary26;
typedef struct Association198 Association198;
typedef struct LinkCollection172 LinkCollection172;
typedef struct SimpleDictionary174 SimpleDictionary174;
typedef struct Dictionary175 Dictionary175;
typedef struct Association199 Association199;
typedef struct Vector176 Vector176;
typedef struct Keyword200 Keyword200;
typedef struct Collection34 Collection34;
typedef struct SequenceIterator201 SequenceIterator201;
typedef struct LinkCollectionElement181 LinkCollectionElement181;
typedef struct Collection202 Collection202;
typedef struct Collection203 Collection203;
typedef struct Collection204 Collection204;
typedef struct CollectionPool62 CollectionPool62;
typedef struct CollectionPoolElement205 CollectionPoolElement205;
typedef struct Collection63 Collection63;
typedef struct Collection39 Collection39;
typedef struct Collection40 Collection40;
typedef struct CStatement206 CStatement206;
typedef struct CAssign207 CAssign207;
typedef struct CBlock208 CBlock208;
typedef struct CDeclaration210 CDeclaration210;
typedef struct CEvaluate211 CEvaluate211;
typedef struct CGoto212 CGoto212;
typedef struct CLabel213 CLabel213;
typedef struct CIf214 CIf214;
typedef struct CWhile215 CWhile215;
typedef struct CSwitch216 CSwitch216;
typedef struct CChoice218 CChoice218;
typedef struct CReturn220 CReturn220;
typedef struct CExpression221 CExpression221;
typedef struct CAttributeExpression222 CAttributeExpression222;
typedef struct CCallExpression223 CCallExpression223;
typedef struct CCastExpression224 CCastExpression224;
typedef struct CCompareExpression225 CCompareExpression225;
typedef struct CCondExpression226 CCondExpression226;
typedef struct CDereferenceExpression227 CDereferenceExpression227;
typedef struct CIndexExpression228 CIndexExpression228;
typedef struct CInfixExpression229 CInfixExpression229;
typedef struct CIntegerExpression230 CIntegerExpression230;
typedef struct COutExpression231 COutExpression231;
typedef struct CPrefixExpression232 CPrefixExpression232;
typedef struct CReferenceExpression233 CReferenceExpression233;
typedef struct CStringExpression234 CStringExpression234;
typedef struct CFunctionTypeExpression235 CFunctionTypeExpression235;
typedef struct CArrayExpression236 CArrayExpression236;
typedef struct CPointerExpression237 CPointerExpression237;
typedef struct CFunctionExpression238 CFunctionExpression238;
typedef struct CExternFunctionExpression239 CExternFunctionExpression239;
typedef struct ConstantWriter240 ConstantWriter240;
typedef struct LeaveContext241 LeaveContext241;
typedef struct PWhile242 PWhile242;
typedef struct UnwindItem243 UnwindItem243;
typedef struct Vector3 Vector3;
typedef struct IdentitySet4 IdentitySet4;
typedef struct Collection105 Collection105;
typedef struct Collection209 Collection209;
typedef struct Collection52 Collection52;
typedef struct Collection217 Collection217;
typedef struct Collection219 Collection219;
typedef struct Collection56 Collection56;
typedef struct Collection244 Collection244;
typedef struct CollectionPool95 CollectionPool95;
typedef struct CollectionPoolElement245 CollectionPoolElement245;
typedef struct Collection96 Collection96;
typedef struct Collection111 Collection111;
typedef struct Collection135 Collection135;
typedef struct Collection133 Collection133;
typedef struct CollectionElement30 CollectionElement30;
typedef struct Collection28 Collection28;

/* Define structures */
struct StringBuffer2
{
	unsigned char *buffer;
	int used;
	int bufferSize;
};
struct Vector3
{
	StructureType104 **array;
	int size;
	int allocated;
};
struct IdentitySet4
{
	void **associations;
	int tally;
	int allocated;
	int collisions;
};
struct CodeGenerator1
{
	Program5 *program;
	MemoryPool160 *pool;
	StringBuffer2 cBuffer;
	StringBuffer2 nameBuffer;
	StringBuffer2 indentBuffer;
	CBlock208 *cblock;
	StringBuffer2 *out;
	int globalIndex;
	int localIndex;
	Function33 *currentFunction;
	Vector3 structures;
	IdentitySet4 reservedIds;
	UnwindItem243 *unwindItem;
};
struct Collection6
{
	int size;
	Module7 *firstElement;
	Module7 *lastElement;
};
struct DefinitionDictionary9
{
	MemoryPool160 *pool;
	int size;
	DefinitionItem189 **names;
};
struct Scope8
{
	Scope8 *parent;
	Module7 *module;
	DefinitionDictionary9 definitions;
};
struct ImportPath10
{
	unsigned char *path;
	ImportPath10 *next;
};
struct Module7
{
	Scope8 __parent;
	Module7 *nextSibling;
	Program5 *program;
	unsigned char *filename;
	unsigned char *path;
	ImportPath10 importPath;
	char loading;
	void *generator;
};
struct Collection12
{
	int size;
	CollectionPoolElement190 *firstElement;
	CollectionPoolElement190 *lastElement;
};
struct CollectionPool11
{
	Collection12 __parent;
};
struct Collection14
{
	int size;
	CollectionPoolElement191 *firstElement;
	CollectionPoolElement191 *lastElement;
};
struct CollectionPool13
{
	Collection14 __parent;
};
struct Collection16
{
	int size;
	CollectionPoolElement192 *firstElement;
	CollectionPoolElement192 *lastElement;
};
struct CollectionPool15
{
	Collection16 __parent;
};
struct Collection18
{
	int size;
	CollectionPoolElement193 *firstElement;
	CollectionPoolElement193 *lastElement;
};
struct CollectionPool17
{
	Collection18 __parent;
};
struct IdentifierDictionary19
{
	MemoryPool160 *pool;
	IdentifierAssociation194 *associations;
	int tally;
	int allocated;
	int collisions;
};
struct Expression21
{
	int code;
	Type98 *type;
	void *generator;
};
struct IntegerExpression20
{
	Expression21 __parent;
	unsigned long long value;
};
struct Dictionary22
{
	Association195 *associations;
	int tally;
	int allocated;
	int collisions;
};
struct Dictionary23
{
	Association196 *associations;
	int tally;
	int allocated;
	int collisions;
};
struct Dictionary24
{
	Association197 *associations;
	int tally;
	int allocated;
	int collisions;
};
struct Dictionary26
{
	Association198 *associations;
	int tally;
	int allocated;
	int collisions;
};
struct SimpleDictionary25
{
	Dictionary26 __parent;
};
struct Program5
{
	MemoryPool160 *pool;
	Collection6 modules;
	Module7 builtinModule;
	CollectionPool11 structures;
	CollectionPool13 functions;
	CollectionPool15 externFunctions;
	CollectionPool17 globalVariables;
	IdentifierDictionary19 identifiers;
	BuiltinType100 *anyType;
	BuiltinType100 *nilType;
	BuiltinType100 *booleanType;
	BuiltinType100 *int8Type;
	BuiltinType100 *int16Type;
	BuiltinType100 *int32Type;
	BuiltinType100 *int64Type;
	BuiltinType100 *uint8Type;
	BuiltinType100 *uint16Type;
	BuiltinType100 *uint32Type;
	BuiltinType100 *uint64Type;
	BuiltinType100 *sizeType;
	PointerType101 *anyPointerType;
	PointerType101 *nilPointerType;
	BuiltinType100 *voidType;
	BuiltinType100 *compositeType;
	IntegerExpression20 trueExpression;
	IntegerExpression20 falseExpression;
	IntegerExpression20 nilExpression;
	Dictionary22 string8Expressions;
	Dictionary23 string16Expressions;
	FunctionExpression70 *functionConstants;
	StructureExpression68 *structureConstants;
	ArrayExpression69 *arrayConstants;
	String8Expression66 *string8Constants;
	String16Expression67 *string16Constants;
	Dictionary24 arrayTypes;
	SimpleDictionary25 functionTypes;
};
struct Collection28
{
	int size;
	Symbol29 *firstElement;
	Symbol29 *lastElement;
};
struct SymbolDictionary27
{
	MemoryPool160 *pool;
	int size;
	Symbol29 **names;
	Collection28 ordered;
};
struct CollectionElement30
{
	Symbol29 *nextSibling;
};
struct Symbol29
{
	CollectionElement30 __parent;
	Symbol29 *next;
	ASTSymbol121 *source;
	unsigned char state;
	Expression21 *value;
};
struct Definition32
{
	Scope8 *scope;
	int line;
	int code;
	void *name;
};
struct Prototype31
{
	Definition32 __parent;
	unsigned char state;
	char used;
	unsigned char namingConvention;
	unsigned char callingConvention;
	TypeSequence108 *returnTypes;
	void *generator;
};
struct Collection34
{
	int size;
	Parameter35 *firstElement;
	Parameter35 *lastElement;
};
struct Function33
{
	Prototype31 __parent;
	ASTFunction115 *source;
	Collection34 parameters;
	Block38 *body;
	char entry;
	char isMacro;
	char isVariadic;
	unsigned char *publicName;
	int returnCount;
	Type98 *context;
	CompositeExpression75 *composites;
};
struct Parameter35
{
	Definition32 __parent;
	Parameter35 *nextSibling;
	Type98 *type;
	Expression21 *expression;
	char generalizable;
	void *generator;
};
struct ExternFunction36
{
	Prototype31 __parent;
	ASTExternFunction116 *source;
	unsigned char *publicName;
	TypeSequence108 *parameterTypes;
	Type98 *context;
};
struct GenericFunction37
{
	Definition32 __parent;
	ASTFunction115 *source;
	Collection34 parameters;
	unsigned char state;
	Type98 *context;
	CollectionPool13 instances;
};
struct Collection39
{
	int size;
	Variable41 *firstElement;
	Variable41 *lastElement;
};
struct Collection40
{
	int size;
	Instruction44 *firstElement;
	Instruction44 *lastElement;
};
struct Block38
{
	char terminated;
	Collection39 variables;
	Collection40 instructions;
};
struct Variable41
{
	Definition32 __parent;
	Variable41 *nextSibling;
	Type98 *storageType;
	Expression21 *expression;
	void *generator;
};
struct VargParameter42
{
	Definition32 __parent;
	Expression21 *expression;
};
struct LocalAlias43
{
	Definition32 __parent;
	Expression21 *expression;
};
struct Location45
{
	int line;
};
struct Instruction44
{
	Location45 __parent;
	Module7 *module;
	Instruction44 *nextSibling;
	int code;
	void *generator;
};
struct EvaluateInstruction46
{
	Instruction44 __parent;
	ExpressionList61 *values;
};
struct AssignInstruction47
{
	Instruction44 __parent;
	ExpressionList61 *left;
	ExpressionList61 *right;
};
struct VariableInstruction48
{
	Instruction44 __parent;
	Variable41 *variable;
	Expression21 *value;
};
struct ReturnInstruction49
{
	Instruction44 __parent;
	ExpressionList61 *expressions;
};
struct LeaveInstruction50
{
	Instruction44 __parent;
	MacroBlock86 *block;
	ExpressionList61 *arguments;
};
struct Collection52
{
	int size;
	Rule59 *firstElement;
	Rule59 *lastElement;
};
struct IfInstruction51
{
	Instruction44 __parent;
	Collection52 rules;
	Block38 *elseBlock;
};
struct WhileInstruction53
{
	Instruction44 __parent;
	Expression21 *condition;
	Block38 *block;
	char hasBreak;
	char hasContinue;
};
struct BreakInstruction54
{
	Instruction44 __parent;
	WhileInstruction53 *instruction;
};
struct Collection56
{
	int size;
	Choice60 *firstElement;
	Choice60 *lastElement;
};
struct SwitchInstruction55
{
	Instruction44 __parent;
	Expression21 *value;
	Collection56 choices;
	Block38 *elseBlock;
	char terminated;
};
struct BlockInstruction57
{
	Instruction44 __parent;
	Block38 *block;
};
struct DeferInstruction58
{
	Instruction44 __parent;
	Block38 block;
};
struct Rule59
{
	Location45 __parent;
	Rule59 *nextSibling;
	Module7 *module;
	Expression21 *condition;
	Block38 *block;
	void *generator;
};
struct Choice60
{
	Location45 __parent;
	Choice60 *nextSibling;
	ExpressionList61 *values;
	Block38 *block;
	void *generator;
};
struct Collection63
{
	int size;
	CollectionPoolElement205 *firstElement;
	CollectionPoolElement205 *lastElement;
};
struct CollectionPool62
{
	Collection63 __parent;
};
struct ExpressionList61
{
	CollectionPool62 __parent;
};
struct ExpressionTypeList64
{
	ExpressionList61 __parent;
};
struct ExpressionIterator65
{
	CollectionPoolElement205 *element;
	int index;
};
struct String8Expression66
{
	Expression21 __parent;
	unsigned char *value;
	String8Expression66 *next;
};
struct String16Expression67
{
	Expression21 __parent;
	unsigned short *value;
	unsigned char *value8;
	String16Expression67 *next;
};
struct StructureExpression68
{
	Expression21 __parent;
	StructureType104 *structure;
	ExpressionList61 *values;
	StructureExpression68 *next;
};
struct ArrayExpression69
{
	Expression21 __parent;
	ArrayType102 *arrayType;
	ExpressionList61 *values;
	ArrayExpression69 *next;
};
struct FunctionExpression70
{
	Expression21 __parent;
	Prototype31 *value;
	FunctionExpression70 *next;
};
struct GlobalExpression71
{
	Expression21 __parent;
	GlobalVariable97 *variable;
};
struct BinaryExpression72
{
	Expression21 __parent;
	Expression21 *argument1;
	Expression21 *argument2;
};
struct UnaryExpression73
{
	Expression21 __parent;
	Expression21 *argument;
};
struct TypeExpression74
{
	Expression21 __parent;
	Type98 *type;
};
struct CompositeExpression75
{
	Expression21 __parent;
	CompositeExpression75 *nextComposite;
	TypeSequence108 *types;
};
struct FunctionCallExpression76
{
	CompositeExpression75 __parent;
	Function33 *func;
	ExpressionList61 *arguments;
};
struct ExternFunctionCallExpression77
{
	CompositeExpression75 __parent;
	ExternFunction36 *func;
	ExpressionList61 *arguments;
};
struct PointerCallExpression78
{
	CompositeExpression75 __parent;
	Expression21 *func;
	ExpressionList61 *arguments;
};
struct ParameterExpression79
{
	Expression21 __parent;
	Parameter35 *parameter;
};
struct LocalVariableExpression80
{
	Expression21 __parent;
	Variable41 *variable;
};
struct GlobalVariableExpression81
{
	Expression21 __parent;
	GlobalVariable97 *variable;
};
struct CondExpression82
{
	CompositeExpression75 __parent;
	Expression21 *condition;
	ExpressionList61 *argument1;
	ExpressionList61 *argument2;
};
struct VargsEachExpression83
{
	Expression21 __parent;
	Block38 *block;
};
struct AttributeExpression84
{
	Expression21 __parent;
	Expression21 *argument;
	Attribute107 *attribute;
};
struct MacroCallExpression85
{
	CompositeExpression75 __parent;
	MacroBlock86 *block;
};
struct MacroBlock86
{
	Block38 __parent;
	void *generator;
};
struct SelectExpression87
{
	Expression21 __parent;
	Expression21 *argument;
	int index;
};
struct VargsExpression88
{
	Expression21 __parent;
	ExpressionList61 *expressions;
};
struct Alias89
{
	Definition32 __parent;
	ASTAlias117 *source;
	unsigned char state;
	char used;
	Type98 *context;
	Expression21 *expression;
	void *generator;
};
struct TypeDefinition91
{
	Definition32 __parent;
	Type98 *type;
};
struct SubTypeDefinition92
{
	Definition32 __parent;
	ASTType118 *source;
	unsigned char state;
	Type98 *type;
};
struct OperationDefinition93
{
	Definition32 __parent;
	int ecode;
};
struct Collection96
{
	int size;
	CollectionPoolElement245 *firstElement;
	CollectionPoolElement245 *lastElement;
};
struct CollectionPool95
{
	Collection96 __parent;
};
struct GenericType94
{
	Definition32 __parent;
	ASTType118 *source;
	Collection34 parameters;
	CollectionPool95 instances;
};
struct GlobalVariable97
{
	Definition32 __parent;
	ASTGlobalVariable114 *source;
	unsigned char state;
	char used;
	Type98 *storageType;
	Expression21 *expression;
	Expression21 *initialValue;
	void *generator;
};
struct Type98
{
	int code;
	unsigned char state;
	ASTNode110 *source;
	size_t size;
	size_t align;
	Type98 *parent;
	char subType;
	MetaType99 *cachedMeta;
	PointerType101 *cachedPointer;
	Expression21 *cachedExpression;
	DefinitionDictionary9 *definitions;
	SymbolDictionary27 *symbols;
	Scope8 scope;
	ExpressionList61 *arguments;
	void *generator;
};
struct MetaType99
{
	Type98 __parent;
	Type98 *type;
};
struct BuiltinType100
{
	Type98 __parent;
	void *name;
};
struct PointerType101
{
	Type98 __parent;
	void *name;
	Type98 *target;
};
struct ArrayType102
{
	Type98 __parent;
	Type98 *cellType;
	size_t arraySize;
};
struct FunctionType103
{
	Type98 __parent;
	unsigned char callingConvention;
	TypeSequence108 *types;
	TypeSequence108 *returnTypes;
};
struct Collection105
{
	int size;
	Attribute107 *firstElement;
	Attribute107 *lastElement;
};
struct StructureType104
{
	Type98 __parent;
	void *name;
	char used;
	StructureType104 *parentStructure;
	Collection105 attributes;
};
struct TypeArgument106
{
	Definition32 __parent;
	TypeArgument106 *nextSibling;
	Expression21 *value;
};
struct Attribute107
{
	Definition32 __parent;
	Attribute107 *nextSibling;
	ASTAttribute122 *source;
	StructureType104 *structure;
	Type98 *storageType;
	size_t offset;
	Type98 *type;
	void *generator;
};
struct TypeSequence108
{
	int size;
	Type98 *(array)[];
};
struct ASTElement109
{
	Location45 __parent;
	ASTElement109 *nextSibling;
	int code;
	DirectiveSet156 *directives;
};
struct Collection111
{
	int size;
	ASTElement109 *firstElement;
	ASTElement109 *lastElement;
};
struct ASTNode110
{
	ASTElement109 __parent;
	Collection111 children;
};
struct ASTModule112
{
	ASTNode110 __parent;
	unsigned char *filename;
};
struct ASTImport113
{
	ASTElement109 __parent;
	unsigned char *name;
};
struct ASTGlobalVariable114
{
	ASTElement109 __parent;
	void *name;
	ASTExpression140 *type;
	ASTExpression140 *initialValue;
};
struct ASTFunction115
{
	ASTElement109 __parent;
	void *name;
	char isVariadic;
	char isMacro;
	char generic;
	char selfGeneric;
	Collection202 *parameters;
	Collection203 *returnTypes;
	Collection204 *body;
};
struct ASTExternFunction116
{
	ASTElement109 __parent;
	void *name;
	unsigned char *publicName;
	Collection203 *parameters;
	Collection203 *returns;
};
struct ASTAlias117
{
	ASTElement109 __parent;
	void *name;
	ASTExpression140 *expression;
};
struct ASTType118
{
	ASTNode110 __parent;
	void *name;
	ASTExpression140 *parent;
	Collection202 *parameters;
};
struct ASTExtension119
{
	ASTNode110 __parent;
	ASTExpression140 *type;
};
struct ASTParameter120
{
	Location45 __parent;
	ASTParameter120 *nextSibling;
	void *name;
	ASTExpression140 *type;
};
struct ASTSymbol121
{
	ASTElement109 __parent;
	void *name;
	ASTExpression140 *expression;
};
struct ASTAttribute122
{
	ASTElement109 __parent;
	void *name;
	ASTExpression140 *type;
};
struct ASTInstruction123
{
	Location45 __parent;
	ASTInstruction123 *nextSibling;
	int code;
};
struct ASTEvaluate124
{
	ASTInstruction123 __parent;
	Collection203 *values;
};
struct ASTAssign125
{
	ASTInstruction123 __parent;
	Collection203 *leftValues;
	Collection203 *rightValues;
};
struct ASTLocalVariables126
{
	ASTInstruction123 __parent;
	Collection244 *variables;
	Collection203 *expressions;
};
struct ASTLocalVariable127
{
	ASTInstruction123 __parent;
	void *variable;
	ASTExpression140 *type;
	ASTFreeCall141 *call;
};
struct ASTLocalAlias128
{
	ASTInstruction123 __parent;
	void *name;
	ASTExpression140 *expression;
};
struct ASTReturn129
{
	ASTInstruction123 __parent;
	Collection203 *expressions;
};
struct ASTBreak130
{
	ASTInstruction123 __parent;
	Collection203 *arguments;
};
struct ASTWhile131
{
	ASTInstruction123 __parent;
	ASTExpression140 *condition;
	Collection204 *block;
};
struct Collection133
{
	int size;
	ASTChoice137 *firstElement;
	ASTChoice137 *lastElement;
};
struct ASTSwitch132
{
	ASTInstruction123 __parent;
	ASTExpression140 *value;
	Collection133 choices;
	Collection204 *elseBlock;
};
struct Collection135
{
	int size;
	ASTRule136 *firstElement;
	ASTRule136 *lastElement;
};
struct ASTIf134
{
	ASTInstruction123 __parent;
	Collection135 rules;
	Collection204 *elseBlock;
};
struct ASTRule136
{
	Location45 __parent;
	ASTRule136 *nextSibling;
	ASTExpression140 *condition;
	Collection204 *block;
};
struct ASTChoice137
{
	Location45 __parent;
	ASTChoice137 *nextSibling;
	Collection203 *values;
	Collection204 *block;
};
struct ASTBegin138
{
	ASTInstruction123 __parent;
	Collection204 *mainBlock;
};
struct ASTDefer139
{
	ASTInstruction123 __parent;
	ASTInstruction123 *instruction;
};
struct ASTExpression140
{
	Location45 __parent;
	ASTExpression140 *nextSibling;
	int code;
};
struct ASTFreeCall141
{
	ASTExpression140 __parent;
	void *name;
	Collection203 *arguments;
	ASTBlockClosure154 *block;
};
struct ASTContextCall142
{
	ASTFreeCall141 __parent;
	ASTExpression140 *context;
};
struct ASTUnary143
{
	ASTExpression140 __parent;
	ASTExpression140 *argument;
};
struct ASTBinary144
{
	ASTExpression140 __parent;
	ASTExpression140 *argument1;
	ASTExpression140 *argument2;
};
struct ASTArray145
{
	ASTExpression140 __parent;
	Collection203 *arguments;
};
struct ASTFunctionType146
{
	ASTExpression140 __parent;
	Collection203 *parameters;
	Collection203 *returnTypes;
	unsigned char callingConvention;
};
struct ASTArrayType147
{
	ASTExpression140 __parent;
	ASTExpression140 *cellType;
	ASTExpression140 *arraySize;
};
struct ASTFunctionReference148
{
	ASTExpression140 __parent;
	void *name;
	ASTExpression140 *context;
	Collection203 *types;
};
struct ASTInteger149
{
	ASTExpression140 __parent;
	unsigned long long integer;
};
struct ASTString150
{
	ASTExpression140 __parent;
	unsigned char *string;
};
struct ASTSymbolName151
{
	ASTExpression140 __parent;
	void *symbol;
};
struct ASTOffset152
{
	ASTExpression140 __parent;
	ASTExpression140 *type;
	void *name;
};
struct ASTCond153
{
	ASTExpression140 __parent;
	ASTExpression140 *condition;
	Collection203 *arguments1;
	Collection203 *arguments2;
};
struct ASTBlockClosure154
{
	Collection244 *parameters;
	Collection204 *instructions;
};
struct ASTId155
{
	Location45 __parent;
	ASTId155 *nextSibling;
	void *name;
};
struct DirectiveSet156
{
	unsigned char visibility;
	unsigned char namingConvention;
	unsigned char callingConvention;
	char entry;
	char skip;
	char mustCheck;
};
struct Identifiers157
{
	void *empty;
	void *Anything;
	void *Nil;
	void *Bool;
	void *Int8;
	void *Int16;
	void *Int32;
	void *Int64;
	void *Uint8;
	void *Uint16;
	void *Uint32;
	void *Uint64;
	void *Size;
	void *Void;
	void *Composite;
	void *main;
	void *self;
	void *size;
	void *target;
	void *cell;
	void *nil;
	void *super;
	void *call;
	void *true;
	void *false;
	void *release;
	void *vargsSize;
	void *vargsEach;
	void *isNil;
	void *notNil;
	void *vtable;
	void *_upcast;
	void *_downcast;
	void *_cast;
	void *public;
	void *private;
	void *c;
	void *zstdcall;
	void *zcdecl;
	void *fast;
	void *entry;
	void *mustcheck;
	void *ifeq;
	void *ifne;
	void *ifdef;
	void *ifndef;
	void *at;
	void *pos;
	void *neg;
	void *add;
	void *sub;
	void *dist;
	void *mul;
	void *div;
	void *mod;
	void *shl;
	void *shr;
	void *logicalAnd;
	void *logicalOr;
	void *logicalXor;
	void *logicalNot;
	void *eq;
	void *ne;
	void *le;
	void *lt;
	void *ge;
	void *gt;
	void *cadd;
	void *csub;
	void *cmul;
	void *cdiv;
	void *cmod;
	void *cshl;
	void *cshr;
	void *cand;
	void *cor;
	void *cxor;
	void *cinc;
	void *cdec;
};
struct ErrorReporter158
{
	int dummy;
};
struct MemoryBuffer159
{
	unsigned char *buffer;
	size_t used;
	size_t bufferSize;
};
struct MemoryPool160
{
	unsigned char *chunkBase;
	unsigned char *chunkFree;
	size_t chunkSize;
	size_t total;
};
struct ErrorCode161
{
	unsigned char dummy;
};
struct Error162
{
	ErrorCode161 *code;
	ErrorClass163 *class;
};
struct ErrorClass163
{
	void (*getMessage)(Error162 *, StringBuffer2 *);
	void (*delete)(Error162 *);
};
struct SimpleError164
{
	Error162 __parent;
	unsigned char *message;
};
struct SystemError165
{
	Error162 __parent;
	int error;
};
struct File166
{
	FILE170 *handle;
};
struct FILE170
{
	int dummy;
};
struct LinkCollection172
{
	LocalPool180 *firstElement;
	LocalPool180 *lastElement;
};
struct Dictionary175
{
	Association199 *associations;
	int tally;
	int allocated;
	int collisions;
};
struct SimpleDictionary174
{
	Dictionary175 __parent;
};
struct IntegerConstantDictionary173
{
	SimpleDictionary174 __parent;
};
struct Vector176
{
	Function33 **array;
	int size;
	int allocated;
};
struct Builder171
{
	ErrorReporter158 __parent;
	ImportPath10 *importPath;
	SimpleDictionary186 *defines;
	Program5 *program;
	MemoryBuffer159 nameBuffer;
	unsigned int nameIndex;
	LinkCollection172 localPools;
	LocalPool180 *currentLocalPool;
	IntegerConstantDictionary173 integerConstants;
	Vector176 functionsToDefine;
};
struct BuilderContext177
{
	BuilderContext177 *parent;
	Builder171 *builder;
	Scope8 *base;
	Scope8 *scope;
	Block38 *block;
	MemoryPool160 *pool;
	int returnCount;
	TypeSequence108 *returnTypes;
	TypeSequence108 *fixedReturnTypes;
	BreakContext179 *breakContext;
	ExpressionList61 *extra;
	MacroContext178 *macroContext;
	CompositeExpression75 *composites;
};
struct MacroContext178
{
	Location45 *location;
	Function33 *macro;
	MacroBlock86 *block;
	ASTBlockClosure154 *sourceBlock;
};
struct BreakContext179
{
	WhileInstruction53 *instruction;
	BuilderContext177 *context;
	MacroBlock86 *block;
	TypeSequence108 *types;
};
struct LinkCollectionElement181
{
	LocalPool180 *nextSibling;
	LocalPool180 *previousSibling;
};
struct LocalPool180
{
	LinkCollectionElement181 __parent;
	MemoryPool160 pool;
};
struct TokenStream183
{
	SimpleDictionary186 *defines;
	int line;
	int token;
	unsigned char *string;
	unsigned long long integer;
	void *symbol;
	MemoryPool160 *pool;
	IdentifierDictionary19 *identifiers;
	unsigned char *beginningOfLine;
	unsigned char *p;
	unsigned char *id;
	unsigned char *file;
	ErrorReporter158 *errorReporter;
};
struct Parser182
{
	MemoryPool160 *pool;
	TokenStream183 stream;
	char isMacro;
	DirectiveSet156 *directives;
	ASTModule112 *module;
	SimpleDictionary186 *defines;
	ErrorReporter158 *errorReporter;
};
struct Slot184
{
	unsigned char *buffer;
	int size;
};
struct MemoryPoolHead185
{
	unsigned char *next;
	size_t size;
};
struct Dictionary187
{
	Association188 *associations;
	int tally;
	int allocated;
	int collisions;
};
struct SimpleDictionary186
{
	Dictionary187 __parent;
};
struct Association188
{
	unsigned char *key;
	unsigned char *value;
};
struct DefinitionItem189
{
	DefinitionItem189 *next;
	Definition32 *definition;
	unsigned char visibility;
};
struct CollectionPoolElement190
{
	CollectionPoolElement190 *nextSibling;
	StructureType104 *object;
};
struct CollectionPoolElement191
{
	CollectionPoolElement191 *nextSibling;
	Function33 *object;
};
struct CollectionPoolElement192
{
	CollectionPoolElement192 *nextSibling;
	ExternFunction36 *object;
};
struct CollectionPoolElement193
{
	CollectionPoolElement193 *nextSibling;
	GlobalVariable97 *object;
};
struct IdentifierAssociation194
{
	void *name;
	int token;
};
struct Association195
{
	String8Expression66 *key;
	String8Expression66 *value;
};
struct Association196
{
	String16Expression67 *key;
	String16Expression67 *value;
};
struct Association197
{
	ArrayType102 *key;
	ArrayType102 *value;
};
struct Association198
{
	FunctionType103 *key;
	FunctionType103 *value;
};
struct Association199
{
	IntegerExpression20 *key;
	IntegerExpression20 *value;
};
struct Keyword200
{
	unsigned char *name;
	int token;
};
struct SequenceIterator201
{
	ASTExpression140 *source;
	ExpressionList61 *arguments;
	CollectionPoolElement205 *element;
	int index;
};
struct Collection202
{
	int size;
	ASTParameter120 *firstElement;
	ASTParameter120 *lastElement;
};
struct Collection203
{
	int size;
	ASTExpression140 *firstElement;
	ASTExpression140 *lastElement;
};
struct Collection204
{
	int size;
	ASTInstruction123 *firstElement;
	ASTInstruction123 *lastElement;
};
struct CollectionPoolElement205
{
	CollectionPoolElement205 *nextSibling;
	Expression21 *object;
};
struct CStatement206
{
	CStatement206 *nextSibling;
	void (*writeFunction)(CStatement206 *, StringBuffer2 *, StringBuffer2 *);
};
struct CAssign207
{
	CStatement206 __parent;
	CExpression221 *left;
	CExpression221 *right;
};
struct Collection209
{
	int size;
	CStatement206 *firstElement;
	CStatement206 *lastElement;
};
struct CBlock208
{
	CStatement206 __parent;
	Collection209 header;
	Collection209 body;
};
struct CDeclaration210
{
	CStatement206 __parent;
	unsigned char *name;
	Type98 *type;
};
struct CEvaluate211
{
	CStatement206 __parent;
	CExpression221 *value;
};
struct CGoto212
{
	CStatement206 __parent;
	unsigned char *label;
};
struct CLabel213
{
	CStatement206 __parent;
	unsigned char *label;
};
struct CIf214
{
	CStatement206 __parent;
	CExpression221 *condition;
	CBlock208 *thenBlock;
	CBlock208 *elseBlock;
};
struct CWhile215
{
	CStatement206 __parent;
	CExpression221 *condition;
	CBlock208 *block;
};
struct Collection217
{
	int size;
	CChoice218 *firstElement;
	CChoice218 *lastElement;
};
struct CSwitch216
{
	CStatement206 __parent;
	CExpression221 *value;
	Collection217 choices;
	CBlock208 *elseBlock;
};
struct Collection219
{
	int size;
	CExpression221 *firstElement;
	CExpression221 *lastElement;
};
struct CChoice218
{
	CChoice218 *nextSibling;
	Collection219 values;
	CBlock208 *block;
};
struct CReturn220
{
	CStatement206 __parent;
	CExpression221 *value;
};
struct CExpression221
{
	CExpression221 *nextSibling;
	void (*writeFunction)(CExpression221 *, StringBuffer2 *);
};
struct CAttributeExpression222
{
	CExpression221 __parent;
	CExpression221 *structure;
	unsigned char *attribute;
};
struct CCallExpression223
{
	CExpression221 __parent;
	CExpression221 *f;
	Collection219 arguments;
};
struct CCastExpression224
{
	CExpression221 __parent;
	CExpression221 *expression;
	Type98 *type;
};
struct CCompareExpression225
{
	CExpression221 __parent;
	unsigned char *op;
	CExpression221 *left;
	CExpression221 *right;
};
struct CCondExpression226
{
	CExpression221 __parent;
	unsigned char *op;
	CExpression221 *condition;
	CExpression221 *left;
	CExpression221 *right;
};
struct CDereferenceExpression227
{
	CExpression221 __parent;
	CExpression221 *e;
};
struct CIndexExpression228
{
	CExpression221 __parent;
	CExpression221 *array;
	CExpression221 *index;
};
struct CInfixExpression229
{
	CExpression221 __parent;
	unsigned char *op;
	CExpression221 *left;
	CExpression221 *right;
};
struct CIntegerExpression230
{
	CExpression221 __parent;
	IntegerExpression20 *e;
};
struct COutExpression231
{
	CExpression221 __parent;
	int index;
};
struct CPrefixExpression232
{
	CExpression221 __parent;
	unsigned char *op;
	CExpression221 *value;
};
struct CReferenceExpression233
{
	CExpression221 __parent;
	CExpression221 *e;
};
struct CStringExpression234
{
	CExpression221 __parent;
	unsigned char *str;
};
struct CFunctionTypeExpression235
{
	CExpression221 __parent;
	FunctionType103 *type;
	CExpression221 *inner;
};
struct CArrayExpression236
{
	CExpression221 __parent;
	size_t size;
	CExpression221 *inner;
};
struct CPointerExpression237
{
	CExpression221 __parent;
	CExpression221 *inner;
};
struct CFunctionExpression238
{
	CExpression221 __parent;
	Function33 *f;
};
struct CExternFunctionExpression239
{
	CExpression221 __parent;
	ExternFunction36 *f;
};
struct ConstantWriter240
{
	ExpressionIterator65 __parent;
	char comma;
};
struct LeaveContext241
{
	unsigned char *exitLabel;
	UnwindItem243 *startUnwind;
	unsigned char **returnValues;
	TypeSequence108 *returnTypes;
};
struct PWhile242
{
	unsigned char *exitLabel;
	unsigned char *continueLabel;
	UnwindItem243 *startUnwind;
};
struct UnwindItem243
{
	UnwindItem243 *next;
	Block38 *block;
};
struct Collection244
{
	int size;
	ASTId155 *firstElement;
	ASTId155 *lastElement;
};
struct CollectionPoolElement245
{
	CollectionPoolElement245 *nextSibling;
	Type98 *object;
};
extern int CDECL main(int zargc, unsigned char **zargv);
static int _run246(int zargc, unsigned char **zargv);
static unsigned char *MemoryPool_getFilename247(MemoryPool160 *zpool, unsigned char *zarg);
static void SimpleDictionary_addStandardDefinesTo248(SimpleDictionary186 *zdefines);
static size_t ArrayType_hashArrayType249(ArrayType102 *zt);
static char ArrayType_equalsArrayType250(ArrayType102 *zt1, ArrayType102 *zt2);
static unsigned char *MemoryPool_newString251(MemoryPool160 *zpool, unsigned char *zs);
static unsigned char *MemoryPool_newString8FromString252(MemoryPool160 *zpool, unsigned char *zs);
static unsigned char *MemoryPool_newString8FromSubString253(MemoryPool160 *zpool, unsigned char *zs, int zsize);
static unsigned char *MemoryPool_newStringFromString8254(MemoryPool160 *zpool, unsigned char *zs);
static unsigned short *MemoryPool_newString16FromString8255(MemoryPool160 *zpool, unsigned char *zs);
static void MemoryBuffer_addUnsignedToBuffer256(MemoryBuffer159 *zbuffer, unsigned int zvalue);
static unsigned char *_allocateBytes257(size_t zsize);
static void _freeBytes258(void *zp, size_t zsize);
static void _copyBytes259(void *zdst, void *zsrc, size_t zsize);
static int _compareBytes260(void *zdst, void *zsrc, size_t zsize);
static char _areBytesEquals261(void *zdst, void *zsrc, size_t zsize);
static void _println262(unsigned char *zs);
static void _print263(unsigned char *zs);
static unsigned char *_toSubString264(unsigned int zchar, unsigned char *zout, int *r1x);
static unsigned int _asUnsigned265(int zself);
static unsigned long long _asUnsigned266(long long zself);
static size_t _hash267(size_t zself);
static void _initialize268();
static void _release269();
static void StringBuffer_initialize270(StringBuffer2 *zself);
static void StringBuffer_initializeWithSize271(StringBuffer2 *zself, int zinitialSize);
static void StringBuffer_release272(StringBuffer2 *zself);
static unsigned char *StringBuffer_base273(StringBuffer2 *zself);
static int StringBuffer_size274(StringBuffer2 *zself);
static unsigned char *StringBuffer_addSegment275(StringBuffer2 *zself, unsigned char *zs);
static void StringBuffer_addChar7276(StringBuffer2 *zself, unsigned char zc);
static void StringBuffer_addChar277(StringBuffer2 *zself, unsigned int zc);
static void StringBuffer_addCodeUnit278(StringBuffer2 *zself, unsigned char zu);
static void StringBuffer_addString279(StringBuffer2 *zself, unsigned char *zstr);
static void StringBuffer_addSubString280(StringBuffer2 *zself, unsigned char *zstr, int zsize);
static void StringBuffer_addUnsigned281(StringBuffer2 *zself, unsigned int zn);
static void StringBuffer_addInteger282(StringBuffer2 *zself, int zn);
static void StringBuffer_addUnsigned64283(StringBuffer2 *zself, unsigned long long zn);
static void StringBuffer_addInteger64284(StringBuffer2 *zself, long long zn);
static void StringBuffer_addHexaByte285(StringBuffer2 *zself, unsigned char zbyte);
static void StringBuffer_removeAll286(StringBuffer2 *zself);
static void StringBuffer_removeLastChar287(StringBuffer2 *zself);
static unsigned char *StringBuffer_toString288(StringBuffer2 *zself);
static unsigned char *StringBuffer_string289(StringBuffer2 *zself);
static char StringBuffer_isEmpty290(StringBuffer2 *zself);
static char StringBuffer_endsWithChar291(StringBuffer2 *zself, unsigned int zc);
static unsigned char *StringBuffer_reserve292(StringBuffer2 *zself, int zl);
static void MemoryPool_initialize293(MemoryPool160 *zself);
static void MemoryPool_initializeWithSize294(MemoryPool160 *zself, size_t zsize);
static void MemoryPool_release295(MemoryPool160 *zself);
static size_t MemoryPool_size296(MemoryPool160 *zself);
static unsigned char *MemoryPool_allocateBytes297(MemoryPool160 *zself, size_t zs);
static void MemoryPool_reset298(MemoryPool160 *zself);
static void MemoryPool_newChunk299(MemoryPool160 *zself, size_t zsize);
static unsigned char *_allocate300(int zsize);
static void _delete301(unsigned char *zself, int zsize);
static unsigned char *_asString302(unsigned char *zself);
static unsigned int _nextChar303(unsigned char *zself, int *r1x);
static int __dist304(unsigned char *zself, unsigned char *zother);
static unsigned char *_findLastCodeUnit305(unsigned char *zself, int zsize, unsigned char zc);
static char _endsWithChar306(unsigned char *zself, int zsize, unsigned int zc);
static char _endsWithSubString307(unsigned char *zself, int zsize, unsigned char *zsubstr, int zsubstrSize);
static int _writeChar308(unsigned char *zself, unsigned int zchar);
static void _copy309(unsigned char *zself, unsigned char *zsrc, int zsize);
static unsigned char *_allocate310(int zsize);
static unsigned char *_fromSubString311(unsigned char *zsub, int zsize);
static void _delete312(unsigned char *zself);
static void _deleteWithSize313(unsigned char *zself, int zsize);
static unsigned char *_asSubString314(unsigned char *zself);
static int _size315(unsigned char *zself);
static int __dist316(unsigned char *zself, unsigned char *zother);
static char _isEqual317(unsigned char *zself, unsigned char *zother);
static unsigned char *_getCopy318(unsigned char *zself);
static unsigned char *_getCopyTo319(unsigned char *zself, unsigned char *zlimit);
static unsigned char *_findChar320(unsigned char *zself, unsigned int zc);
static unsigned char *_findSubString321(unsigned char *zself, unsigned char *zsubstr, int zsubstrSize);
static unsigned char *_findLastCodeUnit322(unsigned char *zself, unsigned char zc);
static void ImportPath_initialize323(ImportPath10 *zself, unsigned char *zpath, ImportPath10 *znext);
static size_t _hash324(unsigned char *zself);
static int _size325(unsigned char *zself);
static int __dist326(unsigned char *zself, unsigned char *zother);
static char _isEqual327(unsigned char *zself, unsigned char *zother);
static unsigned long long _decimalToUnsigned64328(unsigned char *zself, unsigned char **r1x);
static void _addToStringBuffer329(unsigned char *zself, StringBuffer2 *zsb);
static size_t _hash330(unsigned char zself);
static unsigned int _toUinteger331(unsigned char zself);
static char _isNul332(unsigned char zself);
static char _notNul333(unsigned char zself);
static char _isIdentifierFirstChar334(unsigned char zself);
static char _isIdentifierChar335(unsigned char zself);
static void Dictionary_initialize336(Dictionary187 *zself);
static void Dictionary_release337(Dictionary187 *zself);
static unsigned char *Dictionary_add338(Dictionary187 *zself, unsigned char *zk, unsigned char *zv);
static unsigned char *Dictionary__at339(Dictionary187 *zself, unsigned char *zk);
static char Dictionary_hasKey340(Dictionary187 *zself, unsigned char *zk);
static void Dictionary_resize341(Dictionary187 *zself, int zs);
static void Dictionary_increaseTally342(Dictionary187 *zself);
static int Dictionary_hash343(Dictionary187 *zself, unsigned char *zk, int zmod);
static char Dictionary_isEqual344(Dictionary187 *zself, unsigned char *zk1, unsigned char *zk2);
static int Dictionary_slot345(Dictionary187 *zself, unsigned char *zk);
static char Association_isEmpty346(Association188 *zself);
static Association188 *_allocateArray347(int zn);
static void _addToStringBuffer348(unsigned char zself, StringBuffer2 *zsb);
static char _isContinuation349(unsigned char zself);
static char _isNul350(unsigned char zself);
static char _notNul351(unsigned char zself);
static size_t _toByteSize352(int zself);
static long long _getSize64353(unsigned char *zfilename, Error162 **r1x);
static size_t _getSize354(unsigned char *zfilename, Error162 **r1x);
static void _addNativeNameTo355(StringBuffer2 *zout, unsigned char *zfilename);
static File166 *_openRead356(unsigned char *zfilename, Error162 **r1x);
static File166 *_openWrite357(unsigned char *zfilename, Error162 **r1x);
static char _exists358(unsigned char *zfilename);
static SystemError165 *File_close359(File166 *zself);
static size_t File_read360(File166 *zself, unsigned char *zbase, size_t zsize, Error162 **r1x);
static size_t File_write361(File166 *zself, unsigned char *zbase, size_t zsize, Error162 **r1x);
static File166 *File_initialize362(File166 *zself, FILE170 *zhandle);
static unsigned char *_toFilename363(unsigned char *zfilename);
static void _deleteFilename364(unsigned char *zfilename);
static StringBuffer2 *StringBuffer__shl365(StringBuffer2 *zself, unsigned char zobj);
static size_t _max366(size_t zx, size_t v1x);
static StringBuffer2 *StringBuffer__shl367(StringBuffer2 *zself, unsigned char *zobj);
static void _addToStringBuffer368(unsigned char *zself, StringBuffer2 *zx);
static ImportPath10 *MemoryPool_new369(MemoryPool160 *zself, unsigned char *v1x, ImportPath10 *v2x);
static ImportPath10 *MemoryPool_allocate370(MemoryPool160 *zself);
static int _toInteger371(unsigned int zself);
static unsigned char _toCodeUnit372(unsigned int zself);
static void _addToStringBuffer373(unsigned int zself, StringBuffer2 *zsb);
static char _isNul374(unsigned int zself);
static int _umod375(int zself, int zd);
static char Association_notEmpty376(Association188 *zself);
static int _max377(int zx, int v1x);
static void _freeArray378(void *zp, int zn);
static void _output379(unsigned char *ztemplate);
static void StringBuffer_printFormat380(StringBuffer2 *zself, unsigned char *zs);
static void StringBuffer_addFormat381(StringBuffer2 *zself, unsigned char *zs);
static void Program_initialize382(Program5 *zself, MemoryPool160 *zpool);
static void Program_release383(Program5 *zself);
static Type98 *Program_getArrayType384(Program5 *zself, Type98 *zcellType, size_t zarraySize);
static FunctionType103 *Program_getFunctionType385(Program5 *zself, unsigned char zcallingConvention, TypeSequence108 *ztypes, TypeSequence108 *zreturnTypes);
static BuiltinType100 *Program_getBuiltinType386(Program5 *zself, Scope8 *zscope, Type98 *zparent, int zcode, size_t zsize, void *zname);
static PointerType101 *Program_getPointerType387(Program5 *zself, Scope8 *zscope, Type98 *ztarget, Type98 *zparent, void *zname);
static FunctionExpression70 *Program_getFunctionReference388(Program5 *zself, Prototype31 *zproto, TypeSequence108 *ztypes);
static String8Expression66 *Program_getString8389(Program5 *zself, unsigned char *zstring, Type98 *ztype);
static String16Expression67 *Program_getString16390(Program5 *zself, unsigned char *zstring, Type98 *ztype);
static IntegerExpression20 *Program_getInteger391(Program5 *zself, unsigned long long zinteger, Type98 *ztype);
static IntegerExpression20 *Program_getBoolean392(Program5 *zself, char zvalue);
static IntegerExpression20 *Program_getTrue393(Program5 *zself);
static IntegerExpression20 *Program_getFalse394(Program5 *zself);
static IntegerExpression20 *Program_getNil395(Program5 *zself);
static IntegerExpression20 *Program_getTypedNil396(Program5 *zself, Type98 *ztype);
static UnaryExpression73 *Program_getUnary397(Program5 *zself, int zcode, Type98 *ztype, Expression21 *zargument);
static BinaryExpression72 *Program_getBinary398(Program5 *zself, int zcode, Type98 *ztype, Expression21 *zargument1, Expression21 *zargument2);
static PointerCallExpression78 *Program_getPointerCall399(Program5 *zself, Expression21 *zf, ExpressionList61 *zarguments, TypeSequence108 *ztypes);
static CondExpression82 *Program_getCond400(Program5 *zself, Expression21 *zcondition, ExpressionList61 *zargument1, ExpressionList61 *zargument2, TypeSequence108 *ztypes);
static VargsExpression88 *Program_getVargs401(Program5 *zself, ExpressionList61 *zexpressions);
static ExternFunctionCallExpression77 *Program_getExternFunctionCall402(Program5 *zself, ExternFunction36 *zf, ExpressionList61 *zarguments);
static FunctionCallExpression76 *Program_getFunctionCall403(Program5 *zself, Function33 *zf, ExpressionList61 *zarguments);
static MacroCallExpression85 *Program_getMacroCall404(Program5 *zself, TypeSequence108 *zreturnTypes, MacroBlock86 *zblock);
static MacroBlock86 *Program_getMacroBlock405(Program5 *zself);
static SelectExpression87 *Program_getSelect406(Program5 *zself, Expression21 *zargument, int zindex, Type98 *ztype);
static StructureExpression68 *Program_getStructureInitializer407(Program5 *zself, ExpressionList61 *zvalues, Type98 *ztype, StructureType104 *zstructure);
static ArrayExpression69 *Program_getArrayInitializer408(Program5 *zself, ExpressionList61 *zvalues, Type98 *ztype, ArrayType102 *zarrayType);
static VargsEachExpression83 *Program_getVargsEach409(Program5 *zself, Block38 *zblock);
static AttributeExpression84 *Program_getAttribute410(Program5 *zself, Expression21 *zargument, Attribute107 *zattribute);
static Type98 *Program_getSingletonType411(Program5 *zself, TypeSequence108 *ztypes);
static Block38 *Program_getBlock412(Program5 *zself);
static ExpressionList61 *Program_getExpressionList413(Program5 *zself);
static TypeArgument106 *Program_getTypeArgument414(Program5 *zself, Module7 *zmodule, ASTParameter120 *zsource, Expression21 *zargument);
static TypeDefinition91 *Program_getTypeDefinition415(Program5 *zself, Module7 *zmodule, int zline, void *zname, Type98 *ztype);
static SubTypeDefinition92 *Program_getSubTypeDefinition416(Program5 *zself, Scope8 *zscope, ASTType118 *zsource);
static Symbol29 *Program_getSymbol417(Program5 *zself, ASTSymbol121 *zsource);
static VargParameter42 *Program_getVargParameter418(Program5 *zself, Module7 *zmodule, ASTId155 *zsource, Expression21 *zexpression);
static LocalAlias43 *Program_getLocalAlias419(Program5 *zself, Module7 *zmodule, int zline, void *zname, Expression21 *zexpression);
static Scope8 *Program_getScope420(Program5 *zself, Scope8 *zparent, int zsize);
static Module7 *Program_createModule421(Program5 *zself, unsigned char *zfilename, ImportPath10 *zimportPath);
static StructureType104 *Program_createStructure422(Program5 *zself, Scope8 *zscope, ASTType118 *zsource, ExpressionList61 *zarguments);
static Function33 *Program_createFunction423(Program5 *zself, Scope8 *zscope, ASTFunction115 *zsource, Type98 *zcontext);
static ExternFunction36 *Program_createExternFunction424(Program5 *zself, Module7 *zmodule, ASTExternFunction116 *zsource, Scope8 *zscope, Type98 *zcontext);
static GlobalVariable97 *Program_createGlobalVariable425(Program5 *zself, Scope8 *zscope, ASTGlobalVariable114 *zsource);
static Alias89 *Program_createAlias426(Program5 *zself, Scope8 *zscope, Type98 *zcontext, ASTAlias117 *zsource);
static GenericFunction37 *Program_createGenericFunction427(Program5 *zself, Scope8 *zscope, ASTFunction115 *zsource, Type98 *zcontext);
static GenericType94 *Program_createGenericType428(Program5 *zself, Scope8 *zscope, ASTType118 *zsource);
static Module7 *Program_findModule429(Program5 *zself, unsigned char *zfilename);
static void Program_initializeIdentifiers430(Program5 *zself);
static void Program_initializeBuiltins431(Program5 *zself);
static void Program_addSignedNumeric432(Program5 *zself, Type98 *ztype);
static void Program_addUnsignedNumeric433(Program5 *zself, Type98 *ztype);
static void Program_addBinary434(Program5 *zself, Type98 *ztype, int zcode, void *zname, int zecode);
static void Program_addUnary435(Program5 *zself, Type98 *ztype, int zcode, void *zname, int zecode);
static void Program_addBuiltinDefinition436(Program5 *zself, int zcode, void *zname);
static void Program_addDefinition437(Program5 *zself, Definition32 *zdefinition);
static void Program_addBuiltinContextDefinition438(Program5 *zself, Type98 *ztype, int zcode, void *zname);
static BuiltinType100 *Program_newBuiltinType439(Program5 *zself, Type98 *zparent, int zcode, size_t zsize, void *zname);
static void Collection_initialize440(Collection6 *zself);
static void Collection_add441(Collection6 *zself, Module7 *ze);
static void Scope_initialize442(Scope8 *zself, Scope8 *zparent, Module7 *zmodule, MemoryPool160 *zpool, int zsize);
static Definition32 *Scope_addDefinition443(Scope8 *zself, Definition32 *zdefinition);
static Definition32 *Scope_addDefinitionWithVisibility444(Scope8 *zself, Definition32 *zdefinition, unsigned char zvisibility);
static Definition32 *Scope_lookupDefinition445(Scope8 *zself, void *zname);
static void DefinitionDictionary_initialize446(DefinitionDictionary9 *zself, MemoryPool160 *zpool, int zsize);
static Definition32 *DefinitionDictionary_add447(DefinitionDictionary9 *zself, Definition32 *zdefinition, unsigned char zvisibility);
static DefinitionItem189 *DefinitionDictionary_findDefinition448(DefinitionDictionary9 *zself, void *zname);
static unsigned int DefinitionDictionary_slot449(DefinitionDictionary9 *zself, void *zname);
static void Module_initialize450(Module7 *zself, Program5 *zprogram, unsigned char *zfilename, Scope8 *zscope, ImportPath10 *zimportPath);
static unsigned char *_newFilePath451(unsigned char *zfilename);
static void Module_release452(Module7 *zself);
static unsigned char *Module_getFullName453(Module7 *zself, unsigned char *zmoduleName);
static void Collection_initialize454(Collection12 *zself);
static void Collection_add455(Collection12 *zself, CollectionPoolElement190 *ze);
static void CollectionPool_add456(CollectionPool11 *zself, MemoryPool160 *zpool, StructureType104 *zobject);
static void Collection_initialize457(Collection14 *zself);
static void Collection_add458(Collection14 *zself, CollectionPoolElement191 *ze);
static void CollectionPool_add459(CollectionPool13 *zself, MemoryPool160 *zpool, Function33 *zobject);
static void Collection_initialize460(Collection16 *zself);
static void Collection_add461(Collection16 *zself, CollectionPoolElement192 *ze);
static void CollectionPool_add462(CollectionPool15 *zself, MemoryPool160 *zpool, ExternFunction36 *zobject);
static void Collection_initialize463(Collection18 *zself);
static void Collection_add464(Collection18 *zself, CollectionPoolElement193 *ze);
static void CollectionPool_add465(CollectionPool17 *zself, MemoryPool160 *zpool, GlobalVariable97 *zobject);
static void IdentifierDictionary_initialize466(IdentifierDictionary19 *zself, MemoryPool160 *zpool, int zinitialSize);
static void IdentifierDictionary_release467(IdentifierDictionary19 *zself);
static void *IdentifierDictionary__at468(IdentifierDictionary19 *zself, unsigned char *zstr);
static IdentifierAssociation194 *IdentifierDictionary_get469(IdentifierDictionary19 *zself, unsigned char *zstr);
static IdentifierAssociation194 *IdentifierDictionary_lookup470(IdentifierDictionary19 *zself, unsigned char *zstr, int zsize, size_t zhash);
static void IdentifierDictionary_resize471(IdentifierDictionary19 *zself, int zs);
static void IdentifierDictionary_increaseTally472(IdentifierDictionary19 *zself);
static void *IdentifierDictionary_name473(IdentifierDictionary19 *zself, int zi);
static char IdentifierDictionary_notEmpty474(IdentifierDictionary19 *zself, int zi);
static void Expression_initialize475(Expression21 *zself, int zcode, Type98 *ztype);
static unsigned long long Expression_constantInteger476(Expression21 *zself);
static IntegerExpression20 *Expression_asConstantInteger477(Expression21 *zself);
static String8Expression66 *Expression_asConstantString8478(Expression21 *zself);
static String16Expression67 *Expression_asConstantString16479(Expression21 *zself);
static StructureExpression68 *Expression_asConstantStructure480(Expression21 *zself);
static ArrayExpression69 *Expression_asConstantArray481(Expression21 *zself);
static FunctionExpression70 *Expression_asConstantFunction482(Expression21 *zself);
static GlobalExpression71 *Expression_asConstantGlobal483(Expression21 *zself);
static TypeExpression74 *Expression_asType484(Expression21 *zself);
static AttributeExpression84 *Expression_asAttribute485(Expression21 *zself);
static UnaryExpression73 *Expression_asUnary486(Expression21 *zself);
static BinaryExpression72 *Expression_asBinary487(Expression21 *zself);
static CondExpression82 *Expression_asCond488(Expression21 *zself);
static FunctionCallExpression76 *Expression_asFunctionCall489(Expression21 *zself);
static ExternFunctionCallExpression77 *Expression_asExternFunctionCall490(Expression21 *zself);
static ParameterExpression79 *Expression_asParameter491(Expression21 *zself);
static LocalVariableExpression80 *Expression_asLocalVariable492(Expression21 *zself);
static GlobalVariableExpression81 *Expression_asGlobalVariable493(Expression21 *zself);
static SelectExpression87 *Expression_asSelect494(Expression21 *zself);
static MacroCallExpression85 *Expression_asMacroCall495(Expression21 *zself);
static VargsEachExpression83 *Expression_asVargsEach496(Expression21 *zself);
static PointerCallExpression78 *Expression_asPointerCall497(Expression21 *zself);
static VargsExpression88 *Expression_asVargs498(Expression21 *zself);
static CompositeExpression75 *Expression_asComposite499(Expression21 *zself);
static void Expression_addToStringBuffer500(Expression21 *zself, StringBuffer2 *zsb);
static char Expression_isConstant501(Expression21 *zself);
static char Expression_isConstantInteger502(Expression21 *zself);
static char Expression_isLocalVariable503(Expression21 *zself);
static char Expression_isParameter504(Expression21 *zself);
static char Expression_isType505(Expression21 *zself);
static char Expression_isConstantEqual506(Expression21 *zself, Expression21 *zother);
static char Expression_isLvalue507(Expression21 *zself);
static char Expression_isVoid508(Expression21 *zself);
static char Expression_isComposite509(Expression21 *zself);
static char Expression_isVargs510(Expression21 *zself);
static void IntegerExpression_initialize511(IntegerExpression20 *zself, unsigned long long zvalue, Type98 *ztype);
static unsigned int IntegerExpression_unsignedValue512(IntegerExpression20 *zself);
static unsigned int IntegerExpression_hash513(IntegerExpression20 *zself);
static void IntegerExpression_addToStringBuffer514(IntegerExpression20 *zself, StringBuffer2 *zsb);
static char IntegerExpression_isEqual515(IntegerExpression20 *zself, IntegerExpression20 *zother);
static void String8Expression_initialize516(String8Expression66 *zself, unsigned char *zvalue, Program5 *zprogram, Type98 *ztype);
static size_t String8Expression_hashKey517(String8Expression66 *zself);
static void String8Expression_addToStringBuffer518(String8Expression66 *zself, StringBuffer2 *zsb);
static char String8Expression_isKeyEqual519(String8Expression66 *zself, String8Expression66 *zother);
static void Type_initialize520(Type98 *zself, Scope8 *zscope, Type98 *zparent, int zcode, size_t zsize, size_t zalign);
static size_t Type_hash521(Type98 *zself);
static void Type_setParent522(Type98 *zself, Type98 *zparent);
static MetaType99 *Type_metaType523(Type98 *zself);
static PointerType101 *Type_pointer524(Type98 *zself);
static Type98 *Type_effective525(Type98 *zself);
static Expression21 *Type_expression526(Type98 *zself);
static Module7 *Type_module527(Type98 *zself);
static Definition32 *Type_addDefinition528(Type98 *zself, Definition32 *zdefinition, unsigned char zvisibility);
static Symbol29 *Type_addSymbol529(Type98 *zself, Symbol29 *zsymbol);
static char Type_match530(Type98 *zself, Type98 *zother);
static Type98 *Type_common531(Type98 *zself, Type98 *zother);
static BuiltinType100 *Type_asBuiltin532(Type98 *zself);
static PointerType101 *Type_asPointer533(Type98 *zself);
static ArrayType102 *Type_asArray534(Type98 *zself);
static StructureType104 *Type_asStructure535(Type98 *zself);
static MetaType99 *Type_asMeta536(Type98 *zself);
static FunctionType103 *Type_asFunction537(Type98 *zself);
static char Type_checkIntegerLimits538(Type98 *zself, unsigned long long zn);
static char Type_checkNegativeIntegerLimits539(Type98 *zself, unsigned long long zn);
static unsigned long long Type_evaluateIntegerBinaryOperation540(Type98 *zself, unsigned long long zleft, unsigned long long zright, int zop);
static char Type_evaluateIntegerBinaryComparison541(Type98 *zself, unsigned long long zleft, unsigned long long zright, int zop);
static unsigned long long Type_evaluateIntegerUnaryOperation542(Type98 *zself, unsigned long long zn, int zop);
static StringBuffer2 *Type_addToStringBuffer543(Type98 *zself, StringBuffer2 *zstream);
static void Type_addArguments544(Type98 *zself, StringBuffer2 *zstream);
static DefinitionItem189 *Type_findDefinition545(Type98 *zself, void *zname);
static Symbol29 *Type_findSymbol546(Type98 *zself, void *zname);
static char Type_isBoolean547(Type98 *zself);
static char Type_isPointer548(Type98 *zself);
static char Type_isStructure549(Type98 *zself);
static char Type_isArray550(Type98 *zself);
static char Type_isInteger551(Type98 *zself);
static char Type_isSigned552(Type98 *zself);
static char Type_isSimple553(Type98 *zself);
static char Type_isMeta554(Type98 *zself);
static char Type_isFunction555(Type98 *zself);
static char Type_hasSize556(Type98 *zself);
static char Type_hasArguments557(Type98 *zself);
static char Type_matchArguments558(Type98 *zself, ExpressionList61 *zvalues);
static char Type_mustCheck559(Type98 *zself);
static void Dictionary_initialize560(Dictionary22 *zself);
static void Dictionary_release561(Dictionary22 *zself);
static String8Expression66 *Dictionary_add562(Dictionary22 *zself, String8Expression66 *zk, String8Expression66 *zv);
static String8Expression66 *Dictionary__at563(Dictionary22 *zself, String8Expression66 *zk);
static void Dictionary_resize564(Dictionary22 *zself, int zs);
static void Dictionary_increaseTally565(Dictionary22 *zself);
static int Dictionary_hash566(Dictionary22 *zself, String8Expression66 *zk, int zmod);
static char Dictionary_isEqual567(Dictionary22 *zself, String8Expression66 *zk1, String8Expression66 *zk2);
static int Dictionary_slot568(Dictionary22 *zself, String8Expression66 *zk);
static void String16Expression_initialize569(String16Expression67 *zself, unsigned short *zvalue, unsigned char *zvalue8, Program5 *zprogram, Type98 *ztype);
static size_t String16Expression_hashKey570(String16Expression67 *zself);
static void String16Expression_addToStringBuffer571(String16Expression67 *zself, StringBuffer2 *zsb);
static char String16Expression_isKeyEqual572(String16Expression67 *zself, String16Expression67 *zother);
static void Dictionary_initialize573(Dictionary23 *zself);
static void Dictionary_release574(Dictionary23 *zself);
static String16Expression67 *Dictionary_add575(Dictionary23 *zself, String16Expression67 *zk, String16Expression67 *zv);
static String16Expression67 *Dictionary__at576(Dictionary23 *zself, String16Expression67 *zk);
static void Dictionary_resize577(Dictionary23 *zself, int zs);
static void Dictionary_increaseTally578(Dictionary23 *zself);
static int Dictionary_hash579(Dictionary23 *zself, String16Expression67 *zk, int zmod);
static char Dictionary_isEqual580(Dictionary23 *zself, String16Expression67 *zk1, String16Expression67 *zk2);
static int Dictionary_slot581(Dictionary23 *zself, String16Expression67 *zk);
static void ArrayType_initialize582(ArrayType102 *zself, Type98 *zcellType, size_t zarraySize, Type98 *zparent);
static char ArrayType_match583(ArrayType102 *zself, ArrayType102 *zother);
static void Dictionary_initialize584(Dictionary24 *zself);
static void Dictionary_release585(Dictionary24 *zself);
static ArrayType102 *Dictionary_add586(Dictionary24 *zself, ArrayType102 *zk, ArrayType102 *zv);
static ArrayType102 *Dictionary__at587(Dictionary24 *zself, ArrayType102 *zk);
static void Dictionary_resize588(Dictionary24 *zself, int zs);
static void Dictionary_increaseTally589(Dictionary24 *zself);
static int Dictionary_hash590(Dictionary24 *zself, ArrayType102 *zk, int zmod);
static char Dictionary_isEqual591(Dictionary24 *zself, ArrayType102 *zk1, ArrayType102 *zk2);
static int Dictionary_slot592(Dictionary24 *zself, ArrayType102 *zk);
static void FunctionType_initialize593(FunctionType103 *zself, unsigned char zcallingConvention, TypeSequence108 *ztypes, TypeSequence108 *zreturnTypes, Type98 *zparent);
static size_t FunctionType_hash594(FunctionType103 *zself);
static char FunctionType_match595(FunctionType103 *zself, FunctionType103 *zother);
static char FunctionType_isEqual596(FunctionType103 *zself, FunctionType103 *zother);
static void FunctionType_addToStringBuffer597(FunctionType103 *zself, StringBuffer2 *zstream);
static TypeSequence108 *_new598(MemoryPool160 *zpool, int zsize);
static TypeSequence108 *_fromExpressions599(MemoryPool160 *zpool, ExpressionList61 *zexpressions);
static TypeSequence108 *_fromParameters600(MemoryPool160 *zpool, Collection34 *zparameters);
static void TypeSequence_initialize601(TypeSequence108 *zself, int zsize);
static void TypeSequence_set602(TypeSequence108 *zself, int zindex, Type98 *ztype);
static Type98 *TypeSequence__at603(TypeSequence108 *zself, int zindex);
static Type98 *TypeSequence_first604(TypeSequence108 *zself);
static char TypeSequence_merge605(TypeSequence108 *zself, ExpressionList61 *zexpressions);
static void TypeSequence_addToStringBuffer606(TypeSequence108 *zself, StringBuffer2 *zs);
static char TypeSequence_isEmpty607(TypeSequence108 *zself);
static char TypeSequence_isEqual608(TypeSequence108 *zself, TypeSequence108 *zother);
static char TypeSequence_match609(TypeSequence108 *zself, TypeSequence108 *zother);
static void Dictionary_initialize610(Dictionary26 *zself);
static void Dictionary_release611(Dictionary26 *zself);
static FunctionType103 *Dictionary_add612(Dictionary26 *zself, FunctionType103 *zk, FunctionType103 *zv);
static FunctionType103 *Dictionary__at613(Dictionary26 *zself, FunctionType103 *zk);
static void Dictionary_resize614(Dictionary26 *zself, int zs);
static void Dictionary_increaseTally615(Dictionary26 *zself);
static int Dictionary_hash616(Dictionary26 *zself, FunctionType103 *zk, int zmod);
static char Dictionary_isEqual617(Dictionary26 *zself, FunctionType103 *zk1, FunctionType103 *zk2);
static int Dictionary_slot618(Dictionary26 *zself, FunctionType103 *zk);
static void Builder_initialize619(Builder171 *zself, ImportPath10 *zimportPath, SimpleDictionary186 *zdefines, Program5 *zprogram);
static void Builder_release620(Builder171 *zself);
static char Builder_compile621(Builder171 *zself, unsigned char *zfilename);
static Module7 *Builder_loadModule622(Builder171 *zself, unsigned char *zfilename, unsigned char *zfile, int zline);
static MemoryPool160 *Builder_getLocalPool623(Builder171 *zself);
static void Builder_releaseLocalPool624(Builder171 *zself);
static ASTModule112 *Builder_loadAST625(Builder171 *zself, unsigned char *zfilename, unsigned char *zfile, int zline);
static Error162 *_loadFile626(unsigned char *zfilename, MemoryBuffer159 *zbuffer);
static void MemoryBuffer_initialize627(MemoryBuffer159 *zself);
static void MemoryBuffer_release628(MemoryBuffer159 *zself);
static unsigned char *MemoryBuffer_base629(MemoryBuffer159 *zself);
static size_t MemoryBuffer_size630(MemoryBuffer159 *zself);
static unsigned char *MemoryBuffer_allocate631(MemoryBuffer159 *zself, size_t zsize);
static void MemoryBuffer_addByte632(MemoryBuffer159 *zself, unsigned char zx);
static void MemoryBuffer_addBlock633(MemoryBuffer159 *zself, void *zbase, size_t zsize);
static void MemoryBuffer_removeAll634(MemoryBuffer159 *zself);
static unsigned char *MemoryBuffer_reserve635(MemoryBuffer159 *zself, size_t zl);
static void LinkCollection_initialize636(LinkCollection172 *zself);
static void LinkCollection_deleteAllAndRelease637(LinkCollection172 *zself);
static void LinkCollection_add638(LinkCollection172 *zself, LocalPool180 *ze);
static void Dictionary_initialize639(Dictionary175 *zself);
static void Dictionary_release640(Dictionary175 *zself);
static IntegerExpression20 *Dictionary_add641(Dictionary175 *zself, IntegerExpression20 *zk, IntegerExpression20 *zv);
static void Dictionary_removeAll642(Dictionary175 *zself);
static IntegerExpression20 *Dictionary__at643(Dictionary175 *zself, IntegerExpression20 *zk);
static void Dictionary_resize644(Dictionary175 *zself, int zs);
static void Dictionary_increaseTally645(Dictionary175 *zself);
static int Dictionary_hash646(Dictionary175 *zself, IntegerExpression20 *zk, int zmod);
static char Dictionary_isEqual647(Dictionary175 *zself, IntegerExpression20 *zk1, IntegerExpression20 *zk2);
static int Dictionary_slot648(Dictionary175 *zself, IntegerExpression20 *zk);
static void IntegerConstantDictionary_add649(IntegerConstantDictionary173 *zself, IntegerExpression20 *zconstant);
static char IntegerConstantDictionary_has650(IntegerConstantDictionary173 *zself, IntegerExpression20 *zc);
static void Vector_initialize651(Vector176 *zself);
static void Vector_initializeWithSize652(Vector176 *zself, int zinitialAllocated);
static void Vector_release653(Vector176 *zself);
static Function33 *Vector__at654(Vector176 *zself, int zi);
static Function33 *Vector_last655(Vector176 *zself);
static void Vector_add656(Vector176 *zself, Function33 *zvalue);
static void Vector_removeLast657(Vector176 *zself);
static char Vector_isEmpty658(Vector176 *zself);
static void Vector_increaseAllocated659(Vector176 *zself);
static void Vector_allocate660(Vector176 *zself, int zn);
static char Association_isEmpty661(Association197 *zself);
static Association197 *_allocateArray662(int zn);
static char Association_isEmpty663(Association198 *zself);
static Association198 *_allocateArray664(int zn);
static IdentifierAssociation194 *_allocateArray665(int zn);
static unsigned char *_string666(void *zself);
static char _isEqual667(void *zself, unsigned char *zstr, int zsize);
static size_t _hash668(void *zself);
static void _addToStringBuffer669(void *zself, StringBuffer2 *zsb);
static size_t _toByteSize670(int zself);
static unsigned char *MemoryPool_allocateArray671(MemoryPool160 *zself, int zn);
static void _add672(int zself, StringBuffer2 *zsb, unsigned long long zinteger, unsigned char *zstring, void *zidentifier);
static void _addToStringBuffer673(int zself, StringBuffer2 *zsb);
static unsigned char *_findName674(int zself, Keyword200 *zlist);
static void _freeArray675(void *zp, int zn);
static BuiltinType100 *MemoryPool_new676(MemoryPool160 *zself, Module7 *v1x, Type98 *v2x, int v3x, size_t v4x, void *v5x, char v6x);
static BuiltinType100 *MemoryPool_allocate677(MemoryPool160 *zself);
static void BuiltinType_initialize678(BuiltinType100 *zself, Scope8 *zscope, Type98 *zparent, int zcode, size_t zsize, void *zname, char zsubType);
static TypeDefinition91 *MemoryPool_new679(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, Type98 *v4x);
static TypeDefinition91 *MemoryPool_allocate680(MemoryPool160 *zself);
static void Definition_initialize681(Definition32 *zself, Scope8 *zscope, int zline, void *zname, int zcode);
static Module7 *Definition_module682(Definition32 *zself);
static Function33 *Definition_asFunction683(Definition32 *zself);
static GenericFunction37 *Definition_asGenericFunction684(Definition32 *zself);
static ExternFunction36 *Definition_asExternFunction685(Definition32 *zself);
static Alias89 *Definition_asAlias686(Definition32 *zself);
static GlobalVariable97 *Definition_asGlobalVariable687(Definition32 *zself);
static Variable41 *Definition_asVariable688(Definition32 *zself);
static Parameter35 *Definition_asParameter689(Definition32 *zself);
static VargParameter42 *Definition_asVargParameter690(Definition32 *zself);
static LocalAlias43 *Definition_asLocalAlias691(Definition32 *zself);
static Attribute107 *Definition_asAttribute692(Definition32 *zself);
static TypeArgument106 *Definition_asTypeArgument693(Definition32 *zself);
static OperationDefinition93 *Definition_asOperation694(Definition32 *zself);
static TypeDefinition91 *Definition_asType695(Definition32 *zself);
static SubTypeDefinition92 *Definition_asSubType696(Definition32 *zself);
static GenericType94 *Definition_asGenericType697(Definition32 *zself);
static char Definition_hasLocation698(Definition32 *zself);
static void TypeDefinition_initialize699(TypeDefinition91 *zself, Module7 *zmodule, int zline, void *zname, Type98 *ztype);
static DefinitionItem189 **MemoryPool_allocateArray700(MemoryPool160 *zself, int zn);
static void DefinitionItem_initialize701(DefinitionItem189 *zself, Definition32 *zdefinition, unsigned char zvisibility);
static char DefinitionItem_isPublic702(DefinitionItem189 *zself);
static DefinitionItem189 *MemoryPool_new703(MemoryPool160 *zself, Definition32 *v1x, unsigned char v2x);
static DefinitionItem189 *MemoryPool_allocate704(MemoryPool160 *zself);
static Definition32 *MemoryPool_new705(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, int v4x);
static Definition32 *MemoryPool_allocate706(MemoryPool160 *zself);
static DefinitionDictionary9 *MemoryPool_new707(MemoryPool160 *zself, MemoryPool160 *v1x, int v2x);
static DefinitionDictionary9 *MemoryPool_allocate708(MemoryPool160 *zself);
static void MetaType_initialize709(MetaType99 *zself, Type98 *ztype);
static OperationDefinition93 *MemoryPool_new710(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, int v4x, int v5x);
static OperationDefinition93 *MemoryPool_allocate711(MemoryPool160 *zself);
static void OperationDefinition_initialize712(OperationDefinition93 *zself, Module7 *zmodule, int zline, void *zname, int zcode, int zecode);
static void PointerType_initialize713(PointerType101 *zself, Scope8 *zscope, Type98 *ztarget, Type98 *zparent, void *zname);
static char Association_isEmpty714(Association195 *zself);
static Association195 *_allocateArray715(int zn);
static char Association_isEmpty716(Association196 *zself);
static Association196 *_allocateArray717(int zn);
static char Association_isEmpty718(Association199 *zself);
static Association199 *_allocateArray719(int zn);
static void Prototype_use720(Prototype31 *zself);
static void Function_initialize721(Function33 *zself, Scope8 *zscope, ASTFunction115 *zsource, Type98 *zcontext);
static void Function_createParameter722(Function33 *zself, int zline, void *zname, Type98 *ztype, char zgeneralizable);
static void Function_prepareLocals723(Function33 *zself);
static char Function_isInstance724(Function33 *zself);
static void Function_addToStringBuffer725(Function33 *zself, StringBuffer2 *zsb);
static void Collection_initialize726(Collection34 *zself);
static void Collection_add727(Collection34 *zself, Parameter35 *ze);
static char Collection_isEmpty728(Collection34 *zself);
static Function33 **_allocateArray729(int zn);
static void CollectionPoolElement_initialize730(CollectionPoolElement191 *zself, Function33 *zobject);
static void BuilderContext_initialize731(BuilderContext177 *zself, BuilderContext177 *zparent, Builder171 *zbuilder, Scope8 *zscope, MemoryPool160 *zpool, MacroContext178 *zmacro);
static char BuilderContext_declareContent732(BuilderContext177 *zself, ASTNode110 *zsource, Type98 *zcontext, MetaType99 *zmetaType);
static char BuilderContext_declareExtensions733(BuilderContext177 *zself, ASTNode110 *zsource);
static char BuilderContext_declareExtension734(BuilderContext177 *zself, ASTExtension119 *zsource);
static char BuilderContext_declareStructure735(BuilderContext177 *zself, ASTType118 *zss, Type98 *zcontext);
static char BuilderContext_declareType736(BuilderContext177 *zself, ASTType118 *zst, Type98 *zcontext);
static char BuilderContext_processImport737(BuilderContext177 *zself, ASTImport113 *zi);
static char BuilderContext_defineAlias738(BuilderContext177 *zself, Alias89 *zalias);
static char BuilderContext_defineFunctionType739(BuilderContext177 *zself, Function33 *zf);
static char BuilderContext_defineGenericFunction740(BuilderContext177 *zself, GenericFunction37 *zf);
static char BuilderContext_defineFunctionBody741(BuilderContext177 *zself, Function33 *zf);
static char BuilderContext_finalizeBody742(BuilderContext177 *zself, Function33 *zf, Block38 *zbody);
static char BuilderContext_defineExternFunction743(BuilderContext177 *zself, ExternFunction36 *zf);
static char BuilderContext_defineGlobalVariable744(BuilderContext177 *zself, GlobalVariable97 *zv);
static char BuilderContext_defineType745(BuilderContext177 *zself, Type98 *ztype);
static char BuilderContext_definePointer746(BuilderContext177 *zself, PointerType101 *zpointer);
static char BuilderContext_defineStructure747(BuilderContext177 *zself, StructureType104 *zstructure);
static char BuilderContext_defineStructureParent748(BuilderContext177 *zself, StructureType104 *zstructure, ASTExpression140 *zpe);
static char BuilderContext_defineStructureAttribute749(BuilderContext177 *zself, Attribute107 *zattribute);
static char BuilderContext_defineArray750(BuilderContext177 *zself, ArrayType102 *zarray);
static char BuilderContext_defineMeta751(BuilderContext177 *zself, MetaType99 *zmetaType);
static char BuilderContext_defineOther752(BuilderContext177 *zself, Type98 *ztype);
static char BuilderContext_defineTypeSize753(BuilderContext177 *zself, Type98 *ztype);
static char BuilderContext_defineSymbol754(BuilderContext177 *zself, Type98 *ztype, Symbol29 *zstart);
static char BuilderContext_defineSymbolValue755(BuilderContext177 *zself, Type98 *ztype, Symbol29 *zsymbol, unsigned long long *zcurrentValue);
static ExpressionList61 *BuilderContext_evaluateExpressions756(BuilderContext177 *zself, Collection203 *zsource);
static ExpressionList61 *BuilderContext_evaluateArguments757(BuilderContext177 *zself, Location45 *zlocation, Collection203 *zsource, Collection34 *zparameters, char zisVariadic, Expression21 *zcontext);
static ExpressionList61 *BuilderContext_evaluateTypedArguments758(BuilderContext177 *zself, Location45 *zlocation, Collection203 *zsource, TypeSequence108 *ztypes, Expression21 *zcontext);
static int BuilderContext_evaluateAndExpandExpression759(BuilderContext177 *zself, ASTExpression140 *zsource, Type98 *ztype, ExpressionList61 *zlist);
static Expression21 *BuilderContext_evaluateCondition760(BuilderContext177 *zself, ASTExpression140 *zsource);
static Expression21 *BuilderContext_evaluateExpression761(BuilderContext177 *zself, ASTExpression140 *zsource, Type98 *ztype);
static Expression21 *BuilderContext_evaluateString762(BuilderContext177 *zself, ASTString150 *zsource, Type98 *ztypespace);
static IntegerExpression20 *BuilderContext_evaluateInteger763(BuilderContext177 *zself, ASTInteger149 *zsource, Type98 *ztype);
static IntegerExpression20 *BuilderContext_evaluateNegativeInteger764(BuilderContext177 *zself, ASTInteger149 *zsource, Type98 *ztype);
static Expression21 *BuilderContext_evaluateSymbol765(BuilderContext177 *zself, ASTSymbolName151 *zsource, Type98 *ztypespace);
static Expression21 *BuilderContext_evaluateSequence766(BuilderContext177 *zself, ASTArray145 *zsource, Type98 *ztypespace);
static StructureExpression68 *BuilderContext_evaluateStructureInitializer767(BuilderContext177 *zself, ASTArray145 *zsource, Type98 *ztype);
static ArrayExpression69 *BuilderContext_evaluateArrayInitializer768(BuilderContext177 *zself, ASTArray145 *zsource, Type98 *ztype);
static char BuilderContext_checkStructureInitializer769(BuilderContext177 *zself, Location45 *zlocation, StructureType104 *zstructure, SequenceIterator201 *ziter);
static char BuilderContext_checkArrayInitializer770(BuilderContext177 *zself, Location45 *zlocation, ArrayType102 *ztype, SequenceIterator201 *ziter);
static char BuilderContext_checkInitializer771(BuilderContext177 *zself, Location45 *zlocation, Type98 *ztype, SequenceIterator201 *ziter);
static Expression21 *BuilderContext_evaluateFreeCall772(BuilderContext177 *zself, ASTFreeCall141 *zsrc);
static Expression21 *BuilderContext_evaluateContextCall773(BuilderContext177 *zself, ASTContextCall142 *zsrc, Type98 *ztype);
static Expression21 *BuilderContext_evaluateArrayType774(BuilderContext177 *zself, ASTArrayType147 *zsrc);
static Expression21 *BuilderContext_evaluateTypeof775(BuilderContext177 *zself, ASTUnary143 *zsrc);
static Expression21 *BuilderContext_evaluatePointer776(BuilderContext177 *zself, ASTUnary143 *zsrc);
static Expression21 *BuilderContext_evaluateColon777(BuilderContext177 *zself, ASTBinary144 *zsrc);
static Expression21 *BuilderContext_evaluateFunctionType778(BuilderContext177 *zself, ASTFunctionType146 *zsource);
static FunctionExpression70 *BuilderContext_evaluateFunctionReference779(BuilderContext177 *zself, ASTFunctionReference148 *zsource);
static char BuilderContext_checkExactParameters780(BuilderContext177 *zself, Location45 *zlocation, Collection34 *zparameters, TypeSequence108 *zargumentTypes);
static char BuilderContext_checkExactTypes781(BuilderContext177 *zself, Location45 *zlocation, TypeSequence108 *zparameterTypes, TypeSequence108 *zargumentTypes);
static char BuilderContext_checkExact782(BuilderContext177 *zself, Location45 *zlocation, int zposition, Type98 *ztype, Type98 *zexpected);
static CondExpression82 *BuilderContext_evaluateCond783(BuilderContext177 *zself, ASTCond153 *zsource, Type98 *ztype);
static ExpressionList61 *BuilderContext_evaluateCondExpressions784(BuilderContext177 *zself, Location45 *zlocation, Collection203 *zsource, Type98 *ztype);
static Expression21 *BuilderContext_evaluateMinimal785(BuilderContext177 *zself, ASTBinary144 *zsource, int zcode);
static VargsExpression88 *BuilderContext_evaluateEllipsis786(BuilderContext177 *zself, ASTExpression140 *zsource);
static Expression21 *BuilderContext_evaluateOffset787(BuilderContext177 *zself, ASTOffset152 *zsource, Type98 *ztype);
static MacroCallExpression85 *BuilderContext_evaluateYield788(BuilderContext177 *zself, ASTArray145 *zsource);
static Expression21 *BuilderContext_evaluateDefinition789(BuilderContext177 *zself, ASTFreeCall141 *zsrc, Definition32 *zdefinition, Expression21 *ze1);
static Type98 *BuilderContext_evaluateCastArgument790(BuilderContext177 *zself, ASTFreeCall141 *zsrc);
static Expression21 *BuilderContext_evaluateCompatibleArgument791(BuilderContext177 *zself, ASTFreeCall141 *zsource, Type98 *ztype);
static Expression21 *BuilderContext_evaluateArgument792(BuilderContext177 *zself, ASTFreeCall141 *zsource, Type98 *ztype);
static CompositeExpression75 *BuilderContext_evaluateCall793(BuilderContext177 *zself, ASTFreeCall141 *zsrc, Function33 *zf, ExpressionList61 *zarguments);
static MacroCallExpression85 *BuilderContext_evaluateMacroCall794(BuilderContext177 *zself, ASTFreeCall141 *zsrc, Function33 *zf, ExpressionList61 *zarguments, ASTBlockClosure154 *zsourceBlock);
static char BuilderContext_defineInlineParameters795(BuilderContext177 *zself, Function33 *zmacro, ExpressionList61 *zarguments);
static char BuilderContext_fillStructure796(BuilderContext177 *zself, Location45 *zlocation, ExpressionList61 *zarguments, StructureType104 *zstructure, Type98 *zcontext);
static Expression21 *BuilderContext_evaluateDefinitionForInitializer797(BuilderContext177 *zself, Location45 *zlocation, Definition32 *zdefinition);
static char BuilderContext_checkNoArgument798(BuilderContext177 *zself, ASTFreeCall141 *zsrc);
static TypeSequence108 *BuilderContext_evaluateSimpleTypes799(BuilderContext177 *zself, Collection203 *zsource);
static TypeSequence108 *BuilderContext_evaluateSimpleTypesWithContext800(BuilderContext177 *zself, Collection203 *zsource, Type98 *zcontext);
static Type98 *BuilderContext_evaluateSimpleType801(BuilderContext177 *zself, ASTExpression140 *zsource);
static Type98 *BuilderContext_evaluateType802(BuilderContext177 *zself, ASTExpression140 *zsource);
static Block38 *BuilderContext_evaluateBlock803(BuilderContext177 *zself, Collection204 *zsource);
static char BuilderContext_evaluateInstructions804(BuilderContext177 *zself, Collection204 *zsource);
static char BuilderContext_evaluateInstruction805(BuilderContext177 *zself, ASTInstruction123 *zsource);
static char BuilderContext_evaluateEvaluate806(BuilderContext177 *zself, ASTEvaluate124 *zsource);
static char BuilderContext_evaluateAssign807(BuilderContext177 *zself, ASTAssign125 *zsource);
static char BuilderContext_evaluateLocalVariables808(BuilderContext177 *zself, ASTLocalVariables126 *zsource);
static char BuilderContext_evaluateLocalVariable809(BuilderContext177 *zself, ASTLocalVariable127 *zsource);
static char BuilderContext_evaluateFinit810(BuilderContext177 *zself, ASTFreeCall141 *zcall, Expression21 *ze1, Block38 *zblock);
static char BuilderContext_hasRelease811(BuilderContext177 *zself, Type98 *zcontext);
static char BuilderContext_evaluateLocalAlias812(BuilderContext177 *zself, ASTLocalAlias128 *zsource);
static char BuilderContext_evaluateReturn813(BuilderContext177 *zself, ASTReturn129 *zsource);
static char BuilderContext_evaluateIf814(BuilderContext177 *zself, ASTIf134 *zsource);
static char BuilderContext_evaluateWhile815(BuilderContext177 *zself, ASTWhile131 *zsource);
static char BuilderContext_evaluateBreak816(BuilderContext177 *zself, ASTBreak130 *zsource);
static char BuilderContext_evaluateContinue817(BuilderContext177 *zself, ASTBreak130 *zsource);
static char BuilderContext_evaluateSwitch818(BuilderContext177 *zself, ASTSwitch132 *zsource);
static char BuilderContext_evaluateBegin819(BuilderContext177 *zself, ASTBegin138 *zsource);
static char BuilderContext_evaluateDefer820(BuilderContext177 *zself, ASTDefer139 *zsource);
static char BuilderContext_evaluateReturnOrBreak821(BuilderContext177 *zself, Location45 *zlocation, Collection203 *zsource, BuilderContext177 *zreturnContext);
static Expression21 *BuilderContext_getCast822(BuilderContext177 *zself, Location45 *zlocation, Expression21 *zvalue, Type98 *ztargetType);
static Attribute107 *BuilderContext_getAttribute823(BuilderContext177 *zself, ASTOffset152 *zsource, Type98 *ztype);
static Definition32 *BuilderContext_getDefinition824(BuilderContext177 *zself, Location45 *zsource, void *zname);
static Definition32 *BuilderContext_getContextualDefinition825(BuilderContext177 *zself, Location45 *zsource, void *zname, Type98 *zcontext);
static Function33 *BuilderContext_getFunctionInstanceFromTypes826(BuilderContext177 *zself, GenericFunction37 *zgeneric, TypeSequence108 *ztypes);
static Function33 *BuilderContext_getFunctionInstance827(BuilderContext177 *zself, GenericFunction37 *zgeneric, ExpressionList61 *zarguments);
static Type98 *BuilderContext_instanciateType828(BuilderContext177 *zself, GenericType94 *zgeneric, ExpressionList61 *zarguments);
static Variable41 *BuilderContext_createVariable829(BuilderContext177 *zself, int zline, void *zname, Type98 *ztype, Expression21 *zvalue);
static Type98 *BuilderContext_createSubType830(BuilderContext177 *zself, Scope8 *zscope, ASTType118 *zsource, ExpressionList61 *zarguments);
static int BuilderContext_expandExpression831(BuilderContext177 *zself, ExpressionList61 *zlist, Expression21 *ze);
static char BuilderContext_merge832(BuilderContext177 *zself, ExpressionList61 *zarguments);
static char BuilderContext_terminated833(BuilderContext177 *zself);
static void BuilderContext_terminate834(BuilderContext177 *zself);
static Program5 *BuilderContext_program835(BuilderContext177 *zself);
static Module7 *BuilderContext_module836(BuilderContext177 *zself);
static char BuilderContext_hasMacro837(BuilderContext177 *zself, Function33 *zf);
static char BuilderContext_addLocalDefinition838(BuilderContext177 *zself, Definition32 *zdefinition);
static char BuilderContext_addGlobalDefinition839(BuilderContext177 *zself, Scope8 *zscope, Definition32 *zdefinition, unsigned char zvisibility);
static char BuilderContext_addContextualDefinition840(BuilderContext177 *zself, Type98 *ztype, Definition32 *zdefinition, unsigned char zvisibility);
static char BuilderContext_addContextualSymbol841(BuilderContext177 *zself, Type98 *ztype, Symbol29 *zsymbol);
static char BuilderContext_checkCompatible842(BuilderContext177 *zself, Location45 *zlocation, int zposition, Expression21 *zexpression, Type98 *zexpected);
static char BuilderContext_checkLvalue843(BuilderContext177 *zself, Location45 *zlocation, Expression21 *zexpression);
static char BuilderContext_checkNoType844(BuilderContext177 *zself, Location45 *zlocation, Expression21 *zexpression);
static char BuilderContext_checkMustCheck845(BuilderContext177 *zself, Location45 *zlocation, ExpressionList61 *zlist);
static char BuilderContext_checkVargs846(BuilderContext177 *zself, Location45 *zlocation);
static char BuilderContext_checkConstant847(BuilderContext177 *zself, Location45 *zlocation, Expression21 *zexpression);
static char BuilderContext_checkInteger848(BuilderContext177 *zself, Location45 *zlocation, Type98 *ztype);
static void BuilderContext_reportConflict849(BuilderContext177 *zself, Definition32 *zdefinition, Definition32 *zconflictingDefinition);
static void LocalPool_initialize850(LocalPool180 *zself);
static void LocalPool_release851(LocalPool180 *zself);
static void LocalPool_reset852(LocalPool180 *zself);
static LocalPool180 *_new853();
static LocalPool180 *_allocate854();
static void BuilderContext_reportDefinitionError855(BuilderContext177 *zself, Definition32 *zdefinition, unsigned char *zfmt, void *v3x);
static void BuilderContext_reportError856(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x);
static void ErrorReporter_reportError857(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x);
static StringBuffer2 *StringBuffer__shl858(StringBuffer2 *zself, int zobj);
static void _addToStringBuffer859(int zself, StringBuffer2 *zx);
static void StringBuffer_addFormat860(StringBuffer2 *zself, unsigned char *zs, void *v2x);
static StringBuffer2 *StringBuffer__shl861(StringBuffer2 *zself, void *zobj);
static StringBuffer2 *StringBuffer__shl862(StringBuffer2 *zself, unsigned char *zobj);
static StringBuffer2 *StringBuffer__shl863(StringBuffer2 *zself, unsigned int zobj);
static ASTType118 *ASTElement_asType864(ASTElement109 *zself);
static ASTGlobalVariable114 *ASTElement_asGlobalVariable865(ASTElement109 *zself);
static ASTFunction115 *ASTElement_asFunction866(ASTElement109 *zself);
static ASTExternFunction116 *ASTElement_asExternFunction867(ASTElement109 *zself);
static ASTAttribute122 *ASTElement_asAttribute868(ASTElement109 *zself);
static ASTAlias117 *ASTElement_asAlias869(ASTElement109 *zself);
static ASTSymbol121 *ASTElement_asSymbol870(ASTElement109 *zself);
static ASTImport113 *ASTElement_asImport871(ASTElement109 *zself);
static ASTExtension119 *ASTElement_asExtension872(ASTElement109 *zself);
static Parameter35 *MemoryPool_new873(MemoryPool160 *zself, Scope8 *v1x, int v2x, void *v3x, Type98 *v4x, char v5x);
static Parameter35 *MemoryPool_allocate874(MemoryPool160 *zself);
static void Parameter_initialize875(Parameter35 *zself, Scope8 *zscope, int zline, void *zname, Type98 *ztype, char zgeneralizable);
static void _assert876(char zcondition, unsigned char *zs);
static TypeExpression74 *MemoryPool_new877(MemoryPool160 *zself, Type98 *v1x);
static TypeExpression74 *MemoryPool_allocate878(MemoryPool160 *zself);
static void TypeExpression_initialize879(TypeExpression74 *zself, Type98 *ztype);
static void TypeExpression_addToStringBuffer880(TypeExpression74 *zself, StringBuffer2 *zsb);
static ParameterExpression79 *MemoryPool_new881(MemoryPool160 *zself, Parameter35 *v1x);
static ParameterExpression79 *MemoryPool_allocate882(MemoryPool160 *zself);
static void ParameterExpression_initialize883(ParameterExpression79 *zself, Parameter35 *zp);
static void Collection_initialize884(Collection202 *zself);
static void Collection_add885(Collection202 *zself, ASTParameter120 *ze);
static char Collection_isEmpty886(Collection202 *zself);
static void Collection_initialize887(Collection203 *zself);
static void Collection_add888(Collection203 *zself, ASTExpression140 *ze);
static char Collection_isEmpty889(Collection203 *zself);
static void BuilderContext_reportDefinitionError890(BuilderContext177 *zself, Definition32 *zdefinition, unsigned char *zfmt);
static void BuilderContext_reportError891(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt);
static void ErrorReporter_reportError892(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt);
static TypeSequence108 *MemoryPool_allocateWithArray893(MemoryPool160 *zself, int zn);
static ASTInteger149 *ASTExpression_asInteger894(ASTExpression140 *zself);
static ASTArray145 *ASTExpression_asArray895(ASTExpression140 *zself);
static ASTString150 *ASTExpression_asString896(ASTExpression140 *zself);
static ASTSymbolName151 *ASTExpression_asSymbol897(ASTExpression140 *zself);
static ExpressionList61 *MemoryPool_new898(MemoryPool160 *zself);
static ExpressionList61 *MemoryPool_allocate899(MemoryPool160 *zself);
static void Collection_initialize900(Collection63 *zself);
static void Collection_add901(Collection63 *zself, CollectionPoolElement205 *ze);
static char Collection_isEmpty902(Collection63 *zself);
static void CollectionPool_add903(CollectionPool62 *zself, MemoryPool160 *zpool, Expression21 *zobject);
static Expression21 *CollectionPool_last904(CollectionPool62 *zself);
static Expression21 *ExpressionList_first905(ExpressionList61 *zself);
static ExpressionTypeList64 *ExpressionList_asTypes906(ExpressionList61 *zself);
static void ExpressionList_addToStringBuffer907(ExpressionList61 *zself, StringBuffer2 *zsb);
static char ExpressionList_matchInstance908(ExpressionList61 *zself, Collection34 *zparameters);
static char ExpressionList_areConstantEquals909(ExpressionList61 *zself, ExpressionList61 *zother);
static CollectionPoolElement205 *MemoryPool_new910(MemoryPool160 *zself, Expression21 *v1x);
static CollectionPoolElement205 *MemoryPool_allocate911(MemoryPool160 *zself);
static void CollectionPoolElement_initialize912(CollectionPoolElement205 *zself, Expression21 *zobject);
static CollectionPoolElement205 *CollectionPoolElement_skip913(CollectionPoolElement205 *zself, int zn);
static void Block_initialize914(Block38 *zself);
static Variable41 *Block_createVariable915(Block38 *zself, Module7 *zmodule, int zline, void *zname, Type98 *ztype);
static void Collection_initialize916(Collection39 *zself);
static void Collection_add917(Collection39 *zself, Variable41 *ze);
static void Collection_initialize918(Collection40 *zself);
static void Collection_add919(Collection40 *zself, Instruction44 *ze);
static void BuilderContext_reportSourceError920(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, TypeSequence108 *v3x);
static void BuilderContext_reportError921(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, TypeSequence108 *v4x);
static void ErrorReporter_reportError922(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, TypeSequence108 *v4x);
static void StringBuffer_addFormat923(StringBuffer2 *zself, unsigned char *zs, TypeSequence108 *v2x);
static StringBuffer2 *StringBuffer__shl924(StringBuffer2 *zself, TypeSequence108 *zobj);
static StringBuffer2 *StringBuffer__shl925(StringBuffer2 *zself, Type98 *zobj);
static void BuilderContext_reportSourceError926(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, TypeSequence108 *v3x, TypeSequence108 *v4x);
static void BuilderContext_reportError927(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, TypeSequence108 *v4x, TypeSequence108 *v5x);
static void ErrorReporter_reportError928(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, TypeSequence108 *v4x, TypeSequence108 *v5x);
static void StringBuffer_addFormat929(StringBuffer2 *zself, unsigned char *zs, TypeSequence108 *v2x, TypeSequence108 *v3x);
static unsigned char *Builder_getPublicName930(Builder171 *zself, Function33 *zf);
static void MemoryBuffer_add931(MemoryBuffer159 *zself, unsigned char zx);
static void _copyArray932(void *zdst, void *zsrc, int zn);
static void _freeArray933(void *zp, int zn);
static char Vector_notEmpty934(Vector176 *zself);
static void CodeGenerator_initialize935(CodeGenerator1 *zself, Program5 *zprogram, char zdebug, char zdump);
static void CodeGenerator_release936(CodeGenerator1 *zself);
static Error162 *CodeGenerator_generate937(CodeGenerator1 *zself, unsigned char *zoutFilename);
static void CodeGenerator_preDeclareStructures938(CodeGenerator1 *zself);
static void CodeGenerator_scanStructure939(CodeGenerator1 *zself, StructureType104 *zs);
static void CodeGenerator_declareFunctions940(CodeGenerator1 *zself);
static unsigned char *CodeGenerator_getFunctionParameterName941(CodeGenerator1 *zself, void *zid, int zindex);
static void CodeGenerator_declareExternFunctions942(CodeGenerator1 *zself);
static void CodeGenerator_declareGlobalVariables943(CodeGenerator1 *zself);
static void CodeGenerator_declareStructureConstants944(CodeGenerator1 *zself);
static void CodeGenerator_declareArrayConstants945(CodeGenerator1 *zself);
static void CodeGenerator_defineStructures946(CodeGenerator1 *zself);
static void CodeGenerator_generateAttributes947(CodeGenerator1 *zself, StructureType104 *zs, char zincludeEmpty);
static void CodeGenerator_defineString8Constants948(CodeGenerator1 *zself);
static void CodeGenerator_defineString16Constants949(CodeGenerator1 *zself);
static void CodeGenerator_defineStructureConstants950(CodeGenerator1 *zself);
static void CodeGenerator_defineArrayConstants951(CodeGenerator1 *zself);
static void CodeGenerator_defineGlobalVariables952(CodeGenerator1 *zself);
static void CodeGenerator_defineFunctions953(CodeGenerator1 *zself);
static void CodeGenerator_readConstantStructure954(CodeGenerator1 *zself, StructureType104 *zstructure, ConstantWriter240 *ziter);
static void CodeGenerator_readConstantArray955(CodeGenerator1 *zself, ArrayType102 *zarrayType, ConstantWriter240 *ziter);
static void CodeGenerator_readConstantValue956(CodeGenerator1 *zself, Type98 *ztype, ConstantWriter240 *ziter);
static CBlock208 *CodeGenerator_generateBlock957(CodeGenerator1 *zself, Block38 *zblock);
static void CodeGenerator_generateInstruction958(CodeGenerator1 *zself, Instruction44 *zi);
static void CodeGenerator_generateEvaluate959(CodeGenerator1 *zself, EvaluateInstruction46 *zi);
static void CodeGenerator_generateVariable960(CodeGenerator1 *zself, VariableInstruction48 *zi);
static void CodeGenerator_generateAssign961(CodeGenerator1 *zself, AssignInstruction47 *zinstruction);
static void CodeGenerator_generateIf962(CodeGenerator1 *zself, IfInstruction51 *zi);
static void CodeGenerator_generateCondition963(CodeGenerator1 *zself, Rule59 *zrule, Block38 *zelseBlock);
static void CodeGenerator_generateWhile964(CodeGenerator1 *zself, WhileInstruction53 *zi);
static void CodeGenerator_generateBreak965(CodeGenerator1 *zself, BreakInstruction54 *zi);
static void CodeGenerator_generateContinue966(CodeGenerator1 *zself, BreakInstruction54 *zi);
static void CodeGenerator_generateSwitch967(CodeGenerator1 *zself, SwitchInstruction55 *zi);
static void CodeGenerator_generateReturn968(CodeGenerator1 *zself, ReturnInstruction49 *zinstruction);
static void CodeGenerator_generateLeave969(CodeGenerator1 *zself, LeaveInstruction50 *zinstruction);
static void CodeGenerator_generateDefer970(CodeGenerator1 *zself, DeferInstruction58 *zi);
static void CodeGenerator_generateUnwindTo971(CodeGenerator1 *zself, UnwindItem243 *zlimit);
static void CodeGenerator_generateUnwind972(CodeGenerator1 *zself, UnwindItem243 *zitem);
static CExpression221 *CodeGenerator_generateExpressionWithType973(CodeGenerator1 *zself, Expression21 *ze, Type98 *ztype);
static CExpression221 *CodeGenerator_generateExpression974(CodeGenerator1 *zself, Expression21 *ze);
static CInfixExpression229 *CodeGenerator_generateBinary975(CodeGenerator1 *zself, Expression21 *ze, unsigned char *zop);
static CCompareExpression225 *CodeGenerator_generateCompare976(CodeGenerator1 *zself, Expression21 *ze, unsigned char *zop);
static CCompareExpression225 *CodeGenerator_generateUnsignedCompare977(CodeGenerator1 *zself, Expression21 *ze, unsigned char *zop);
static CInfixExpression229 *CodeGenerator_generateCompound978(CodeGenerator1 *zself, Expression21 *ze, unsigned char *zop);
static CCallExpression223 *CodeGenerator_generateCall979(CodeGenerator1 *zself, Expression21 *ze, ExpressionList61 *zarguments, TypeSequence108 *zreturnTypes);
static CStringExpression234 *CodeGenerator_generateAutoLoad980(CodeGenerator1 *zself, Expression21 *ze, Type98 *ztype);
static void CodeGenerator_generateLoad981(CodeGenerator1 *zself, unsigned char *zname, Expression21 *ze, Type98 *ztype);
static void CodeGenerator_generateLabel982(CodeGenerator1 *zself, unsigned char *zname);
static void CodeGenerator_generateGoto983(CodeGenerator1 *zself, unsigned char *zlabel);
static unsigned char *CodeGenerator_getGlobal984(CodeGenerator1 *zself, unsigned char *zname);
static unsigned char *CodeGenerator_getLocal985(CodeGenerator1 *zself, unsigned char *zname);
static unsigned char *CodeGenerator_getIdentifier986(CodeGenerator1 *zself, void *zid);
static unsigned char *CodeGenerator_getFunctionName987(CodeGenerator1 *zself, Function33 *zf);
static unsigned char *CodeGenerator_getExternFunctionName988(CodeGenerator1 *zself, ExternFunction36 *zf);
static void CodeGenerator_declareLocal989(CodeGenerator1 *zself, Type98 *ztype, unsigned char *zname);
static Type98 *CodeGenerator_cellType990(CodeGenerator1 *zself, BinaryExpression72 *ze);
static void StringBuffer_flushFunctionDeclaration991(StringBuffer2 *zout, Function33 *zf);
static void StringBuffer_flushStringDeclaration992(StringBuffer2 *zout, Type98 *ztype, unsigned char *zname);
static void StringBuffer_flushDeclaration993(StringBuffer2 *zout, Type98 *ztype, CExpression221 *ze);
static void StringBuffer_appendReturnTypes994(StringBuffer2 *zout, TypeSequence108 *zreturnTypes, char zcomm);
static Type98 *Prototype_functionType995(Prototype31 *zf);
static Type98 *TypeSequence_returnType996(TypeSequence108 *ztypes);
static void StringBuffer_flushCallingConvention997(StringBuffer2 *zout, unsigned char zcc);
static void StringBuffer_flushChar998(StringBuffer2 *zout, unsigned int zc);
static unsigned char *Type_cname999(Type98 *zself);
static unsigned char *Prototype_cname1000(Prototype31 *zself);
static unsigned char *Parameter_cname1001(Parameter35 *zself);
static void Variable_initialize1002(Variable41 *zself, Module7 *zmodule, int zline, void *zname, Type98 *zstorageType);
static unsigned char *Variable_cname1003(Variable41 *zself);
static void Attribute_initialize1004(Attribute107 *zself, StructureType104 *zstructure, ASTAttribute122 *zsource);
static unsigned char *Attribute_cname1005(Attribute107 *zself);
static void GlobalVariable_initialize1006(GlobalVariable97 *zself, Scope8 *zscope, ASTGlobalVariable114 *zsource);
static void GlobalVariable_setInitialValue1007(GlobalVariable97 *zself, Expression21 *zinitialValue);
static void GlobalVariable_setStorageType1008(GlobalVariable97 *zself, Type98 *zstorageType);
static void GlobalVariable_use1009(GlobalVariable97 *zself);
static unsigned char *GlobalVariable_cname1010(GlobalVariable97 *zself);
static unsigned char *Expression_cname1011(Expression21 *zself);
static void Vector_initialize1012(Vector3 *zself);
static void Vector_initializeWithSize1013(Vector3 *zself, int zinitialAllocated);
static void Vector_release1014(Vector3 *zself);
static StructureType104 *Vector__at1015(Vector3 *zself, int zi);
static void Vector_add1016(Vector3 *zself, StructureType104 *zvalue);
static void Vector_increaseAllocated1017(Vector3 *zself);
static void Vector_allocate1018(Vector3 *zself, int zn);
static void IdentitySet_initialize1019(IdentitySet4 *zself);
static char IdentitySet_add1020(IdentitySet4 *zself, void *zv);
static char IdentitySet_has1021(IdentitySet4 *zself, void *zv);
static void IdentitySet_resize1022(IdentitySet4 *zself, int zs);
static void IdentitySet_increaseTally1023(IdentitySet4 *zself);
static size_t IdentitySet_hash1024(IdentitySet4 *zself, void *zobj);
static int IdentitySet_slot1025(IdentitySet4 *zself, void *zobj);
static void **IdentitySet_newArray1026(IdentitySet4 *zself, int zs);
static void StructureType_initialize1027(StructureType104 *zself, Scope8 *zscope, ASTType118 *zsource, ExpressionList61 *zarguments);
static void StructureType_setParentStructure1028(StructureType104 *zself, StructureType104 *zparent);
static void StructureType_use1029(StructureType104 *zself);
static Attribute107 *StructureType_createAttribute1030(StructureType104 *zself, ASTAttribute122 *zsource);
static Attribute107 *StructureType_findAttribute1031(StructureType104 *zself, void *zname);
static char StructureType_isFlexible1032(StructureType104 *zself);
static void Collection_initialize1033(Collection105 *zself);
static void Collection_add1034(Collection105 *zself, Attribute107 *ze);
static StructureType104 **_allocateArray1035(int zn);
static void **_allocateArray1036(int zn);
static void _freeArray1037(void *zp, int zn);
static void CollectionPoolElement_initialize1038(CollectionPoolElement190 *zself, StructureType104 *zobject);
static StringBuffer2 *StringBuffer__shl1039(StringBuffer2 *zself, int zobj);
static void CExpression_addToStringBuffer1040(CExpression221 *zself, StringBuffer2 *zout);
static void CFunctionExpression_initialize1041(CFunctionExpression238 *zself, Function33 *zf);
static void CFunctionExpression_write1042(CFunctionExpression238 *zself, StringBuffer2 *zout);
static void COutExpression_initialize1043(COutExpression231 *zself, int zi);
static void COutExpression_write1044(COutExpression231 *zself, StringBuffer2 *zout);
static void CPointerExpression_initialize1045(CPointerExpression237 *zself, CExpression221 *zinner);
static void CPointerExpression_write1046(CPointerExpression237 *zself, StringBuffer2 *zout);
static StringBuffer2 *StringBuffer__shl1047(StringBuffer2 *zself, CExpression221 *zobj);
static void CollectionPoolElement_initialize1048(CollectionPoolElement192 *zself, ExternFunction36 *zobject);
static void ExternFunction_initialize1049(ExternFunction36 *zself, Module7 *zmodule, ASTExternFunction116 *zsource, Scope8 *zscope, Type98 *zcontext);
static void CExternFunctionExpression_initialize1050(CExternFunctionExpression239 *zself, ExternFunction36 *zf);
static void CExternFunctionExpression_write1051(CExternFunctionExpression239 *zself, StringBuffer2 *zout);
static void CollectionPoolElement_initialize1052(CollectionPoolElement193 *zself, GlobalVariable97 *zobject);
static void StructureExpression_initialize1053(StructureExpression68 *zself, ExpressionList61 *zvalues, Program5 *zprogram, Type98 *ztype, StructureType104 *zstructure);
static void StructureExpression_addToStringBuffer1054(StructureExpression68 *zself, StringBuffer2 *zsb);
static char StructureExpression_isEqual1055(StructureExpression68 *zself, StructureExpression68 *zother);
static void ArrayExpression_initialize1056(ArrayExpression69 *zself, ExpressionList61 *zvalues, Program5 *zprogram, Type98 *ztype, ArrayType102 *zarrayType);
static void ArrayExpression_addToStringBuffer1057(ArrayExpression69 *zself, StringBuffer2 *zsb);
static char ArrayExpression_isEqual1058(ArrayExpression69 *zself, ArrayExpression69 *zother);
static void _addToStringBuffer1059(unsigned short *zself, StringBuffer2 *zsb);
static char _isNul1060(unsigned short zself);
static char _notNul1061(unsigned short zself);
static void ExpressionIterator_initialize1062(ExpressionIterator65 *zself, ExpressionList61 *zarguments);
static char ExpressionIterator_isEOF1063(ExpressionIterator65 *zself);
static Expression21 *ExpressionIterator_value1064(ExpressionIterator65 *zself);
static void ExpressionIterator_next1065(ExpressionIterator65 *zself);
static void ConstantWriter_initialize1066(ConstantWriter240 *zself, ExpressionList61 *zarguments);
static void CompositeExpression_initialize1067(CompositeExpression75 *zself, int zcode, TypeSequence108 *ztypes, Program5 *zprogram);
static void CStatement_write1068(CStatement206 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static void CBlock_initialize1069(CBlock208 *zself);
static void CBlock_write1070(CBlock208 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static void Collection_initialize1071(Collection209 *zself);
static void Collection_add1072(Collection209 *zself, CStatement206 *ze);
static StringBuffer2 *StringBuffer__shl1073(StringBuffer2 *zself, StringBuffer2 *zobj);
static void StringBuffer_addToStringBuffer1074(StringBuffer2 *zself, StringBuffer2 *zx);
static unsigned char *_allocateArray1075(int zn);
static void Error_initialize1076(Error162 *zself, ErrorClass163 *zclass, ErrorCode161 *zcode);
static void Error_delete1077(Error162 *zself);
static void Error_addToStringBuffer1078(Error162 *zself, StringBuffer2 *zsb);
static Error162 *Error__or1079(Error162 *zself, Error162 *zother);
static void _free1080(void *zp);
static void SystemError_initialize1081(SystemError165 *zself);
static void SystemError_onDelete1082(SystemError165 *zself);
static void SystemError_addMessageTo1083(SystemError165 *zself, StringBuffer2 *zout);
static SystemError165 *_new1084();
static SystemError165 *_allocate1085();
static void _free1086(void *zp);
static void _freeArray1087(void *zp, int zn);
static void _output1088(unsigned char *ztemplate, Error162 *v1x);
static void StringBuffer_printFormat1089(StringBuffer2 *zself, unsigned char *zs, Error162 *v2x);
static void StringBuffer_addFormat1090(StringBuffer2 *zself, unsigned char *zs, Error162 *v2x);
static StringBuffer2 *StringBuffer__shl1091(StringBuffer2 *zself, Error162 *zobj);
static void _freeArray1092(void *zp, int zn);
static void _freeArray1093(void *zp, int zn);
static void LocalPool_delete1094(LocalPool180 *zself);
static void _freeArray1095(void *zp, int zn);
static void _freeArray1096(void *zp, int zn);
static void _freeArray1097(void *zp, int zn);
static void _freeArray1098(void *zp, int zn);
static StringBuffer2 *StringBuffer__shl1099(StringBuffer2 *zself, size_t zobj);
static void _addToStringBuffer1100(size_t zself, StringBuffer2 *zsb);
static void _output1101(unsigned char *ztemplate, size_t v1x);
static void StringBuffer_printFormat1102(StringBuffer2 *zself, unsigned char *zs, size_t v2x);
static void StringBuffer_addFormat1103(StringBuffer2 *zself, unsigned char *zs, size_t v2x);
static void LocalPool_basicDelete1104(LocalPool180 *zself);
static void _free1105(void *zp);
static File166 *_new1106(FILE170 *v0x);
static File166 *_allocate1107();
static CBlock208 *MemoryPool_new1108(MemoryPool160 *zself);
static CBlock208 *MemoryPool_allocate1109(MemoryPool160 *zself);
static CDeclaration210 *MemoryPool_new1110(MemoryPool160 *zself, unsigned char *v1x, Type98 *v2x);
static CDeclaration210 *MemoryPool_allocate1111(MemoryPool160 *zself);
static void CDeclaration_initialize1112(CDeclaration210 *zself, unsigned char *zname, Type98 *ztype);
static void CDeclaration_write1113(CDeclaration210 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static void Instruction_initialize1114(Instruction44 *zself, Module7 *zmodule, int zline, int zcode);
static EvaluateInstruction46 *Instruction_asEvaluate1115(Instruction44 *zself);
static AssignInstruction47 *Instruction_asAssign1116(Instruction44 *zself);
static VariableInstruction48 *Instruction_asVariable1117(Instruction44 *zself);
static ReturnInstruction49 *Instruction_asReturn1118(Instruction44 *zself);
static LeaveInstruction50 *Instruction_asLeave1119(Instruction44 *zself);
static SwitchInstruction55 *Instruction_asSwitch1120(Instruction44 *zself);
static IfInstruction51 *Instruction_asIf1121(Instruction44 *zself);
static WhileInstruction53 *Instruction_asWhile1122(Instruction44 *zself);
static BreakInstruction54 *Instruction_asBreak1123(Instruction44 *zself);
static BlockInstruction57 *Instruction_asBlock1124(Instruction44 *zself);
static DeferInstruction58 *Instruction_asDefer1125(Instruction44 *zself);
static void EvaluateInstruction_initialize1126(EvaluateInstruction46 *zself, Module7 *zmodule, int zline, ExpressionList61 *zvalues);
static CEvaluate211 *MemoryPool_new1127(MemoryPool160 *zself, CExpression221 *v1x);
static CEvaluate211 *MemoryPool_allocate1128(MemoryPool160 *zself);
static void CEvaluate_initialize1129(CEvaluate211 *zself, CExpression221 *zvalue);
static void CEvaluate_write1130(CEvaluate211 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static CStringExpression234 *MemoryPool_new1131(MemoryPool160 *zself, unsigned char *v1x);
static CStringExpression234 *MemoryPool_allocate1132(MemoryPool160 *zself);
static void CStringExpression_initialize1133(CStringExpression234 *zself, unsigned char *zstr);
static void CStringExpression_write1134(CStringExpression234 *zself, StringBuffer2 *zout);
static CAssign207 *MemoryPool_new1135(MemoryPool160 *zself, CStringExpression234 *v1x, CExpression221 *v2x);
static CAssign207 *MemoryPool_allocate1136(MemoryPool160 *zself);
static void CAssign_initialize1137(CAssign207 *zself, CExpression221 *zleft, CExpression221 *zright);
static void CAssign_write1138(CAssign207 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static void VariableInstruction_initialize1139(VariableInstruction48 *zself, Module7 *zmodule, int zline, Variable41 *zvariable, Expression21 *zvalue);
static void AssignInstruction_initialize1140(AssignInstruction47 *zself, Module7 *zmodule, int zline, ExpressionList61 *zleft, ExpressionList61 *zright);
static CStringExpression234 **MemoryPool_allocateArray1141(MemoryPool160 *zself, int zn);
static CAssign207 *MemoryPool_new1142(MemoryPool160 *zself, CExpression221 *v1x, CExpression221 *v2x);
static CAssign207 *MemoryPool_new1143(MemoryPool160 *zself, CExpression221 *v1x, CStringExpression234 *v2x);
static void ReturnInstruction_initialize1144(ReturnInstruction49 *zself, Module7 *zmodule, int zline, ExpressionList61 *zexpressions);
static CReturn220 *MemoryPool_new1145(MemoryPool160 *zself);
static CReturn220 *MemoryPool_allocate1146(MemoryPool160 *zself);
static void CReturn_initialize1147(CReturn220 *zself);
static void CReturn_write1148(CReturn220 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static COutExpression231 *MemoryPool_new1149(MemoryPool160 *zself, int v1x);
static COutExpression231 *MemoryPool_allocate1150(MemoryPool160 *zself);
static CDereferenceExpression227 *MemoryPool_new1151(MemoryPool160 *zself, COutExpression231 *v1x);
static CDereferenceExpression227 *MemoryPool_allocate1152(MemoryPool160 *zself);
static void CDereferenceExpression_initialize1153(CDereferenceExpression227 *zself, CExpression221 *ze);
static void CDereferenceExpression_write1154(CDereferenceExpression227 *zself, StringBuffer2 *zout);
static CAssign207 *MemoryPool_new1155(MemoryPool160 *zself, CDereferenceExpression227 *v1x, CExpression221 *v2x);
static void LeaveInstruction_initialize1156(LeaveInstruction50 *zself, Module7 *zmodule, int zline, MacroBlock86 *zblock, ExpressionList61 *zarguments);
static CGoto212 *MemoryPool_new1157(MemoryPool160 *zself, unsigned char *v1x);
static CGoto212 *MemoryPool_allocate1158(MemoryPool160 *zself);
static void CGoto_initialize1159(CGoto212 *zself, unsigned char *zlabel);
static void CGoto_write1160(CGoto212 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static void IfInstruction_initialize1161(IfInstruction51 *zself, Module7 *zmodule, int zline);
static void IfInstruction_addRule1162(IfInstruction51 *zself, Module7 *zmodule, int zline, Expression21 *zcondition, Block38 *zblock);
static void Collection_initialize1163(Collection52 *zself);
static void Collection_add1164(Collection52 *zself, Rule59 *ze);
static void WhileInstruction_initialize1165(WhileInstruction53 *zself, Module7 *zmodule, int zline);
static CWhile215 *MemoryPool_new1166(MemoryPool160 *zself);
static CWhile215 *MemoryPool_allocate1167(MemoryPool160 *zself);
static void CWhile_initialize1168(CWhile215 *zself);
static void CWhile_write1169(CWhile215 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static CLabel213 *MemoryPool_new1170(MemoryPool160 *zself, unsigned char *v1x);
static CLabel213 *MemoryPool_allocate1171(MemoryPool160 *zself);
static void CLabel_initialize1172(CLabel213 *zself, unsigned char *zlabel);
static void CLabel_write1173(CLabel213 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static void BreakInstruction_initialize1174(BreakInstruction54 *zself, Module7 *zmodule, int zline, int zcode, WhileInstruction53 *zinstruction);
static CSwitch216 *MemoryPool_new1175(MemoryPool160 *zself);
static CSwitch216 *MemoryPool_allocate1176(MemoryPool160 *zself);
static void CSwitch_initialize1177(CSwitch216 *zself);
static void CSwitch_write1178(CSwitch216 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static void Collection_initialize1179(Collection217 *zself);
static void Collection_add1180(Collection217 *zself, CChoice218 *ze);
static void CChoice_initialize1181(CChoice218 *zself);
static void Collection_initialize1182(Collection219 *zself);
static void Collection_add1183(Collection219 *zself, CExpression221 *ze);
static void SwitchInstruction_initialize1184(SwitchInstruction55 *zself, Module7 *zmodule, int zline, Expression21 *zvalue);
static void SwitchInstruction_addChoice1185(SwitchInstruction55 *zself, Program5 *zprogram, int zline, ExpressionList61 *zvalues, Block38 *zblock);
static void Collection_initialize1186(Collection56 *zself);
static void Collection_add1187(Collection56 *zself, Choice60 *ze);
static CChoice218 *MemoryPool_new1188(MemoryPool160 *zself);
static CChoice218 *MemoryPool_allocate1189(MemoryPool160 *zself);
static void BlockInstruction_initialize1190(BlockInstruction57 *zself, Module7 *zmodule, int zline, Block38 *zblock);
static UnwindItem243 *MemoryPool_allocate1191(MemoryPool160 *zself);
static void DeferInstruction_initialize1192(DeferInstruction58 *zself, Module7 *zmodule, int zline);
static void _assertFailure1193(unsigned char *zs);
static CIf214 *MemoryPool_new1194(MemoryPool160 *zself);
static CIf214 *MemoryPool_allocate1195(MemoryPool160 *zself);
static void CIf_initialize1196(CIf214 *zself);
static void CIf_write1197(CIf214 *zself, StringBuffer2 *zout, StringBuffer2 *zindent);
static CCastExpression224 *MemoryPool_new1198(MemoryPool160 *zself, CExpression221 *v1x, Type98 *v2x);
static CCastExpression224 *MemoryPool_allocate1199(MemoryPool160 *zself);
static void CCastExpression_initialize1200(CCastExpression224 *zself, CExpression221 *ze, Type98 *zt);
static void CCastExpression_write1201(CCastExpression224 *zself, StringBuffer2 *zout);
static void SelectExpression_initialize1202(SelectExpression87 *zself, Expression21 *zargument, int zindex, Type98 *ztype);
static CIntegerExpression230 *MemoryPool_new1203(MemoryPool160 *zself, IntegerExpression20 *v1x);
static CIntegerExpression230 *MemoryPool_allocate1204(MemoryPool160 *zself);
static void CIntegerExpression_initialize1205(CIntegerExpression230 *zself, IntegerExpression20 *ze);
static void CIntegerExpression_write1206(CIntegerExpression230 *zself, StringBuffer2 *zout);
static StringBuffer2 *StringBuffer__shl1207(StringBuffer2 *zself, unsigned int zobj);
static void _addToStringBuffer1208(unsigned int zself, StringBuffer2 *zx);
static StringBuffer2 *StringBuffer__shl1209(StringBuffer2 *zself, unsigned long long zobj);
static void _addToStringBuffer1210(unsigned long long zself, StringBuffer2 *zx);
static StringBuffer2 *StringBuffer__shl1211(StringBuffer2 *zself, long long zobj);
static void _addToStringBuffer1212(long long zself, StringBuffer2 *zx);
static CReferenceExpression233 *MemoryPool_new1213(MemoryPool160 *zself, CStringExpression234 *v1x);
static CReferenceExpression233 *MemoryPool_allocate1214(MemoryPool160 *zself);
static void CReferenceExpression_initialize1215(CReferenceExpression233 *zself, CExpression221 *ze);
static void CReferenceExpression_write1216(CReferenceExpression233 *zself, StringBuffer2 *zout);
static void FunctionExpression_initialize1217(FunctionExpression70 *zself, Prototype31 *zvalue, Program5 *zprogram, Type98 *ztype);
static void FunctionExpression_addToStringBuffer1218(FunctionExpression70 *zself, StringBuffer2 *zsb);
static void GlobalExpression_initialize1219(GlobalExpression71 *zself, GlobalVariable97 *zvariable, Type98 *ztype);
static void BinaryExpression_initialize1220(BinaryExpression72 *zself, int zcode, Type98 *ztype, Expression21 *zargument1, Expression21 *zargument2);
static CInfixExpression229 *MemoryPool_new1221(MemoryPool160 *zself, CExpression221 *v1x, unsigned char *v2x, CExpression221 *v3x);
static CInfixExpression229 *MemoryPool_allocate1222(MemoryPool160 *zself);
static void CInfixExpression_initialize1223(CInfixExpression229 *zself, CExpression221 *zleft, unsigned char *zop, CExpression221 *zright);
static void CInfixExpression_write1224(CInfixExpression229 *zself, StringBuffer2 *zout);
static void CondExpression_initialize1225(CondExpression82 *zself, Program5 *zprogram, Expression21 *zcondition, ExpressionList61 *zargument1, ExpressionList61 *zargument2, TypeSequence108 *ztypes);
static unsigned char **MemoryPool_allocateArray1226(MemoryPool160 *zself, int zn);
static CCondExpression226 *MemoryPool_new1227(MemoryPool160 *zself, CExpression221 *v1x, CExpression221 *v2x, CExpression221 *v3x);
static CCondExpression226 *MemoryPool_allocate1228(MemoryPool160 *zself);
static void CCondExpression_initialize1229(CCondExpression226 *zself, CExpression221 *zcondition, CExpression221 *zleft, CExpression221 *zright);
static void CCondExpression_write1230(CCondExpression226 *zself, StringBuffer2 *zout);
static void FunctionCallExpression_initialize1231(FunctionCallExpression76 *zself, Function33 *zf, ExpressionList61 *zarguments);
static CCallExpression223 *MemoryPool_new1232(MemoryPool160 *zself);
static CCallExpression223 *MemoryPool_allocate1233(MemoryPool160 *zself);
static void CCallExpression_initialize1234(CCallExpression223 *zself);
static void CCallExpression_write1235(CCallExpression223 *zself, StringBuffer2 *zout);
static char StringBuffer_writeComma1236(StringBuffer2 *zout, char zcomma);
static Expression21 *CollectionPool_elementValue1237(CollectionPool62 *zself, CollectionPoolElement205 *zelement);
static CollectionPoolElement205 *Collection_nextElement1238(Collection63 *zself, CollectionPoolElement205 *zelement);
static void ExternFunctionCallExpression_initialize1239(ExternFunctionCallExpression77 *zself, ExternFunction36 *zf, ExpressionList61 *zarguments);
static void PointerCallExpression_initialize1240(PointerCallExpression78 *zself, Program5 *zprogram, Expression21 *zf, ExpressionList61 *zarguments, TypeSequence108 *ztypes);
static CAssign207 *MemoryPool_new1241(MemoryPool160 *zself, CStringExpression234 *v1x, CCallExpression223 *v2x);
static void LocalVariableExpression_initialize1242(LocalVariableExpression80 *zself, Variable41 *zv, Type98 *ztype);
static CReferenceExpression233 *MemoryPool_new1243(MemoryPool160 *zself, CExpression221 *v1x);
static void GlobalVariableExpression_initialize1244(GlobalVariableExpression81 *zself, GlobalVariable97 *zv, Type98 *ztype);
static void AttributeExpression_initialize1245(AttributeExpression84 *zself, Expression21 *zargument, Attribute107 *zattribute);
static CAttributeExpression222 *MemoryPool_new1246(MemoryPool160 *zself, CExpression221 *v1x, unsigned char *v2x);
static CAttributeExpression222 *MemoryPool_allocate1247(MemoryPool160 *zself);
static void CAttributeExpression_initialize1248(CAttributeExpression222 *zself, CExpression221 *zstructure, unsigned char *zattribute);
static void CAttributeExpression_write1249(CAttributeExpression222 *zself, StringBuffer2 *zout);
static void VargsEachExpression_initialize1250(VargsEachExpression83 *zself, Block38 *zblock, Program5 *zprogram);
static void UnaryExpression_initialize1251(UnaryExpression73 *zself, int zcode, Type98 *ztype, Expression21 *zargument);
static void MacroCallExpression_initialize1252(MacroCallExpression85 *zself, Program5 *zprogram, TypeSequence108 *zreturnTypes, MacroBlock86 *zblock);
static CPrefixExpression232 *MemoryPool_new1253(MemoryPool160 *zself, unsigned char *v1x, CExpression221 *v2x);
static CPrefixExpression232 *MemoryPool_allocate1254(MemoryPool160 *zself);
static void CPrefixExpression_initialize1255(CPrefixExpression232 *zself, unsigned char *zop, CExpression221 *zvalue);
static void CPrefixExpression_write1256(CPrefixExpression232 *zself, StringBuffer2 *zout);
static CCompareExpression225 *MemoryPool_new1257(MemoryPool160 *zself, CExpression221 *v1x, unsigned char *v2x, CExpression221 *v3x);
static CCompareExpression225 *MemoryPool_allocate1258(MemoryPool160 *zself);
static void CCompareExpression_initialize1259(CCompareExpression225 *zself, CExpression221 *zleft, unsigned char *zop, CExpression221 *zright);
static void CCompareExpression_write1260(CCompareExpression225 *zself, StringBuffer2 *zout);
static CCompareExpression225 *MemoryPool_new1261(MemoryPool160 *zself, CCastExpression224 *v1x, unsigned char *v2x, CCastExpression224 *v3x);
static CDereferenceExpression227 *MemoryPool_new1262(MemoryPool160 *zself, CExpression221 *v1x);
static CIndexExpression228 *MemoryPool_new1263(MemoryPool160 *zself, CExpression221 *v1x, CExpression221 *v2x);
static CIndexExpression228 *MemoryPool_allocate1264(MemoryPool160 *zself);
static void CIndexExpression_initialize1265(CIndexExpression228 *zself, CExpression221 *zarray, CExpression221 *zindex);
static void CIndexExpression_write1266(CIndexExpression228 *zself, StringBuffer2 *zout);
static void _assertFailure1267(unsigned char *zs, int v1x);
static void CArrayExpression_initialize1268(CArrayExpression236 *zself, size_t zsize, CExpression221 *zinner);
static void CArrayExpression_write1269(CArrayExpression236 *zself, StringBuffer2 *zout);
static void CFunctionTypeExpression_initialize1270(CFunctionTypeExpression235 *zself, FunctionType103 *ztype, CExpression221 *zinner);
static void CFunctionTypeExpression_write1271(CFunctionTypeExpression235 *zself, StringBuffer2 *zout);
static void _copyArray1272(void *zdst, void *zsrc, int zn);
static StringBuffer2 *StringBuffer__shl1273(StringBuffer2 *zself, FunctionType103 *zobj);
static char TypeSequence_notEmpty1274(TypeSequence108 *zself);
static StringBuffer2 *StringBuffer__shl1275(StringBuffer2 *zself, Expression21 *zobj);
static StringBuffer2 *StringBuffer__shl1276(StringBuffer2 *zself, IntegerExpression20 *zobj);
static StringBuffer2 *StringBuffer__shl1277(StringBuffer2 *zself, String8Expression66 *zobj);
static StringBuffer2 *StringBuffer__shl1278(StringBuffer2 *zself, String16Expression67 *zobj);
static StringBuffer2 *StringBuffer__shl1279(StringBuffer2 *zself, unsigned short *zobj);
static StringBuffer2 *StringBuffer__shl1280(StringBuffer2 *zself, StructureExpression68 *zobj);
static StringBuffer2 *StringBuffer__shl1281(StringBuffer2 *zself, StructureType104 *zobj);
static StringBuffer2 *StringBuffer__shl1282(StringBuffer2 *zself, ExpressionList61 *zobj);
static StringBuffer2 *StringBuffer__shl1283(StringBuffer2 *zself, ArrayExpression69 *zobj);
static StringBuffer2 *StringBuffer__shl1284(StringBuffer2 *zself, ArrayType102 *zobj);
static StringBuffer2 *StringBuffer__shl1285(StringBuffer2 *zself, FunctionExpression70 *zobj);
static StringBuffer2 *StringBuffer__shl1286(StringBuffer2 *zself, Function33 *zobj);
static StringBuffer2 *StringBuffer__shl1287(StringBuffer2 *zself, GlobalExpression71 *zobj);
static StringBuffer2 *StringBuffer__shl1288(StringBuffer2 *zself, TypeExpression74 *zobj);
static char ExpressionList_notEmpty1289(ExpressionList61 *zself);
static Block38 *MemoryPool_new1290(MemoryPool160 *zself);
static Block38 *MemoryPool_allocate1291(MemoryPool160 *zself);
static void Collection_initialize1292(Collection204 *zself);
static void Collection_add1293(Collection204 *zself, ASTInstruction123 *ze);
static void BuilderContext_reportSourceError1294(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt);
static void BuilderContext_reportSourceError1295(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, Type98 *v3x);
static void BuilderContext_reportError1296(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Type98 *v4x);
static void ErrorReporter_reportError1297(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Type98 *v4x);
static void StringBuffer_addFormat1298(StringBuffer2 *zself, unsigned char *zs, Type98 *v2x);
static EvaluateInstruction46 *Block_createInstruction1299(Block38 *zself, Module7 *zmodule, int zline, ExpressionList61 *v3x);
static EvaluateInstruction46 *MemoryPool_new1300(MemoryPool160 *zself, Module7 *v1x, int v2x, ExpressionList61 *v3x);
static EvaluateInstruction46 *MemoryPool_allocate1301(MemoryPool160 *zself);
static void BuilderContext_reportSourceError1302(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, int v3x, int v4x);
static void BuilderContext_reportError1303(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, int v4x, int v5x);
static void ErrorReporter_reportError1304(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, int v4x, int v5x);
static void StringBuffer_addFormat1305(StringBuffer2 *zself, unsigned char *zs, int v2x, int v3x);
static void BuilderContext_reportSourceError1306(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, int v3x, Type98 *v4x, Type98 *v5x);
static void BuilderContext_reportError1307(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, int v4x, Type98 *v5x, Type98 *v6x);
static void ErrorReporter_reportError1308(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, int v4x, Type98 *v5x, Type98 *v6x);
static void StringBuffer_addFormat1309(StringBuffer2 *zself, unsigned char *zs, int v2x, Type98 *v3x, Type98 *v4x);
static AssignInstruction47 *Block_createInstruction1310(Block38 *zself, Module7 *zmodule, int zline, ExpressionList61 *v3x, ExpressionList61 *v4x);
static AssignInstruction47 *MemoryPool_new1311(MemoryPool160 *zself, Module7 *v1x, int v2x, ExpressionList61 *v3x, ExpressionList61 *v4x);
static AssignInstruction47 *MemoryPool_allocate1312(MemoryPool160 *zself);
static void Collection_initialize1313(Collection244 *zself);
static void Collection_add1314(Collection244 *zself, ASTId155 *ze);
static Variable41 *MemoryPool_new1315(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, Type98 *v4x);
static Variable41 *MemoryPool_allocate1316(MemoryPool160 *zself);
static LocalVariableExpression80 *MemoryPool_new1317(MemoryPool160 *zself, Variable41 *v1x, Type98 *v2x);
static LocalVariableExpression80 *MemoryPool_allocate1318(MemoryPool160 *zself);
static VariableInstruction48 *Block_createInstruction1319(Block38 *zself, Module7 *zmodule, int zline, Variable41 *v3x, Expression21 *v4x);
static VariableInstruction48 *MemoryPool_new1320(MemoryPool160 *zself, Module7 *v1x, int v2x, Variable41 *v3x, Expression21 *v4x);
static VariableInstruction48 *MemoryPool_allocate1321(MemoryPool160 *zself);
static void BuilderContext_reportSourceError1322(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, void *v3x, Type98 *v4x);
static void BuilderContext_reportError1323(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x, Type98 *v5x);
static void ErrorReporter_reportError1324(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x, Type98 *v5x);
static void StringBuffer_addFormat1325(StringBuffer2 *zself, unsigned char *zs, void *v2x, Type98 *v3x);
static void GenericFunction_initialize1326(GenericFunction37 *zself, Scope8 *zscope, ASTFunction115 *zsource, Type98 *zcontext);
static void GenericFunction_addInstance1327(GenericFunction37 *zself, Function33 *zf);
static void GenericFunction_createParameter1328(GenericFunction37 *zself, int zline, void *zname, Type98 *ztype, char zgeneralizable);
static Function33 *GenericFunction_findInstance1329(GenericFunction37 *zself, ExpressionList61 *zarguments);
static char GenericFunction_isVariadic1330(GenericFunction37 *zself);
static Parameter35 *Collection_elementValue1331(Collection34 *zself, Parameter35 *zelement);
static Parameter35 *Collection_nextElement1332(Collection34 *zself, Parameter35 *zelement);
static Function33 *MemoryPool_new1333(MemoryPool160 *zself, Scope8 *v1x, ASTFunction115 *v2x, Type98 *v3x);
static Function33 *MemoryPool_allocate1334(MemoryPool160 *zself);
static void DirectiveSet_initializeFrom1335(DirectiveSet156 *zself, DirectiveSet156 *zsrc);
static CollectionPoolElement191 *MemoryPool_new1336(MemoryPool160 *zself, Function33 *v1x);
static CollectionPoolElement191 *MemoryPool_allocate1337(MemoryPool160 *zself);
static void BuilderContext_reportSourceError1338(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, Function33 *v3x);
static void BuilderContext_reportError1339(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Function33 *v4x);
static void ErrorReporter_reportError1340(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Function33 *v4x);
static void StringBuffer_addFormat1341(StringBuffer2 *zself, unsigned char *zs, Function33 *v2x);
static FunctionCallExpression76 *MemoryPool_new1342(MemoryPool160 *zself, Function33 *v1x, ExpressionList61 *v2x);
static FunctionCallExpression76 *MemoryPool_allocate1343(MemoryPool160 *zself);
static MacroBlock86 *MemoryPool_new1344(MemoryPool160 *zself);
static MacroBlock86 *MemoryPool_allocate1345(MemoryPool160 *zself);
static LocalAlias43 *MemoryPool_new1346(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, Expression21 *v4x);
static LocalAlias43 *MemoryPool_allocate1347(MemoryPool160 *zself);
static void LocalAlias_initialize1348(LocalAlias43 *zself, Module7 *zmodule, int zline, void *zname, Expression21 *zexpression);
static MacroCallExpression85 *MemoryPool_new1349(MemoryPool160 *zself, Program5 *v1x, TypeSequence108 *v2x, MacroBlock86 *v3x);
static MacroCallExpression85 *MemoryPool_allocate1350(MemoryPool160 *zself);
static void GenericType_initialize1351(GenericType94 *zself, Scope8 *zscope, ASTType118 *zsource);
static void GenericType_add1352(GenericType94 *zself, Type98 *ztype);
static Type98 *GenericType_findInstance1353(GenericType94 *zself, ExpressionList61 *zvalues);
static void Collection_initialize1354(Collection96 *zself);
static void Collection_add1355(Collection96 *zself, CollectionPoolElement245 *ze);
static void CollectionPool_add1356(CollectionPool95 *zself, MemoryPool160 *zpool, Type98 *zobject);
static void BuilderContext_reportSourceError1357(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, void *v3x);
static void CollectionPoolElement_initialize1358(CollectionPoolElement245 *zself, Type98 *zobject);
static void ASTNode__shl1359(ASTNode110 *zself, ASTElement109 *ze);
static void Collection_initialize1360(Collection111 *zself);
static void Collection_add1361(Collection111 *zself, ASTElement109 *ze);
static char ASTType_generic1362(ASTType118 *zself);
static StructureType104 *MemoryPool_new1363(MemoryPool160 *zself, Scope8 *v1x, ASTType118 *v2x, ExpressionList61 *v3x);
static StructureType104 *MemoryPool_allocate1364(MemoryPool160 *zself);
static CollectionPoolElement190 *MemoryPool_new1365(MemoryPool160 *zself, StructureType104 *v1x);
static CollectionPoolElement190 *MemoryPool_allocate1366(MemoryPool160 *zself);
static BuiltinType100 *MemoryPool_new1367(MemoryPool160 *zself, Scope8 *v1x, Type98 *v2x, int v3x, size_t v4x, void *v5x, char v6x);
static PointerType101 *MemoryPool_new1368(MemoryPool160 *zself, Scope8 *v1x, Type98 *v2x, Type98 *v3x, void *v4x);
static PointerType101 *MemoryPool_allocate1369(MemoryPool160 *zself);
static ASTParameter120 *Collection_elementValue1370(Collection202 *zself, ASTParameter120 *zelement);
static TypeArgument106 *MemoryPool_new1371(MemoryPool160 *zself, Module7 *v1x, ASTParameter120 *v2x, Expression21 *v3x);
static TypeArgument106 *MemoryPool_allocate1372(MemoryPool160 *zself);
static void TypeArgument_initialize1373(TypeArgument106 *zself, Module7 *zmodule, ASTParameter120 *zsource, Expression21 *zvalue);
static ASTParameter120 *Collection_nextElement1374(Collection202 *zself, ASTParameter120 *zelement);
static CollectionPoolElement245 *MemoryPool_new1375(MemoryPool160 *zself, Type98 *v1x);
static CollectionPoolElement245 *MemoryPool_allocate1376(MemoryPool160 *zself);
static unsigned char *Builder_getPublicName1377(Builder171 *zself, ExternFunction36 *zf);
static ExternFunctionCallExpression77 *MemoryPool_new1378(MemoryPool160 *zself, ExternFunction36 *v1x, ExpressionList61 *v2x);
static ExternFunctionCallExpression77 *MemoryPool_allocate1379(MemoryPool160 *zself);
static char Collection_notEmpty1380(Collection203 *zself);
static GlobalVariableExpression81 *MemoryPool_new1381(MemoryPool160 *zself, GlobalVariable97 *v1x, Type98 *v2x);
static GlobalVariableExpression81 *MemoryPool_allocate1382(MemoryPool160 *zself);
static GlobalExpression71 *MemoryPool_new1383(MemoryPool160 *zself, GlobalVariable97 *v1x, Type98 *v2x);
static GlobalExpression71 *MemoryPool_allocate1384(MemoryPool160 *zself);
static void Alias_initialize1385(Alias89 *zself, Scope8 *zscope, Type98 *zcontext, ASTAlias117 *zsource);
static void Alias_use1386(Alias89 *zself);
static Parameter35 *MemoryPool_new1387(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, Type98 *v4x, char v5x);
static void SubTypeDefinition_initialize1388(SubTypeDefinition92 *zself, Scope8 *zscope, ASTType118 *zsource);
static void VargParameter_initialize1389(VargParameter42 *zself, Module7 *zmodule, ASTId155 *zsource, Expression21 *zexpression);
static VargParameter42 *MemoryPool_new1390(MemoryPool160 *zself, Module7 *v1x, ASTId155 *v2x, Expression21 *v3x);
static VargParameter42 *MemoryPool_allocate1391(MemoryPool160 *zself);
static VargsEachExpression83 *MemoryPool_new1392(MemoryPool160 *zself, Block38 *v1x, Program5 *v2x);
static VargsEachExpression83 *MemoryPool_allocate1393(MemoryPool160 *zself);
static IntegerExpression20 *MemoryPool_new1394(MemoryPool160 *zself, unsigned long long v1x, Type98 *v2x);
static IntegerExpression20 *MemoryPool_allocate1395(MemoryPool160 *zself);
static AttributeExpression84 *MemoryPool_new1396(MemoryPool160 *zself, Expression21 *v1x, Attribute107 *v2x);
static AttributeExpression84 *MemoryPool_allocate1397(MemoryPool160 *zself);
static UnaryExpression73 *MemoryPool_new1398(MemoryPool160 *zself, int v1x, Type98 *v2x, Expression21 *v3x);
static UnaryExpression73 *MemoryPool_allocate1399(MemoryPool160 *zself);
static void BuilderContext_reportSourceError1400(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, Type98 *v3x, Type98 *v4x);
static void BuilderContext_reportError1401(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Type98 *v4x, Type98 *v5x);
static void ErrorReporter_reportError1402(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Type98 *v4x, Type98 *v5x);
static void StringBuffer_addFormat1403(StringBuffer2 *zself, unsigned char *zs, Type98 *v2x, Type98 *v3x);
static StructureExpression68 *MemoryPool_new1404(MemoryPool160 *zself, ExpressionList61 *v1x, Program5 *v2x, Type98 *v3x, StructureType104 *v4x);
static StructureExpression68 *MemoryPool_allocate1405(MemoryPool160 *zself);
static BinaryExpression72 *MemoryPool_new1406(MemoryPool160 *zself, int v1x, Type98 *v2x, Expression21 *v3x, Expression21 *v4x);
static BinaryExpression72 *MemoryPool_allocate1407(MemoryPool160 *zself);
static void BuilderContext_reportSourceError1408(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, PointerType101 *v3x);
static void BuilderContext_reportError1409(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, PointerType101 *v4x);
static void ErrorReporter_reportError1410(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, PointerType101 *v4x);
static void StringBuffer_addFormat1411(StringBuffer2 *zself, unsigned char *zs, PointerType101 *v2x);
static StringBuffer2 *StringBuffer__shl1412(StringBuffer2 *zself, PointerType101 *zobj);
static PointerCallExpression78 *MemoryPool_new1413(MemoryPool160 *zself, Program5 *v1x, Expression21 *v2x, ExpressionList61 *v3x, TypeSequence108 *v4x);
static PointerCallExpression78 *MemoryPool_allocate1414(MemoryPool160 *zself);
static DeferInstruction58 *Block_createInstruction1415(Block38 *zself, Module7 *zmodule, int zline);
static DeferInstruction58 *MemoryPool_new1416(MemoryPool160 *zself, Module7 *v1x, int v2x);
static DeferInstruction58 *MemoryPool_allocate1417(MemoryPool160 *zself);
static void ExpressionTypeList_addToStringBuffer1418(ExpressionTypeList64 *zself, StringBuffer2 *zsb);
static void BuilderContext_reportSourceError1419(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, ExpressionTypeList64 *v3x, TypeSequence108 *v4x);
static void BuilderContext_reportError1420(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, ExpressionTypeList64 *v4x, TypeSequence108 *v5x);
static void ErrorReporter_reportError1421(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, ExpressionTypeList64 *v4x, TypeSequence108 *v5x);
static void StringBuffer_addFormat1422(StringBuffer2 *zself, unsigned char *zs, ExpressionTypeList64 *v2x, TypeSequence108 *v3x);
static StringBuffer2 *StringBuffer__shl1423(StringBuffer2 *zself, ExpressionTypeList64 *zobj);
static char ExpressionTypeList_notEmpty1424(ExpressionTypeList64 *zself);
static ReturnInstruction49 *Block_createInstruction1425(Block38 *zself, Module7 *zmodule, int zline, ExpressionList61 *v3x);
static ReturnInstruction49 *MemoryPool_new1426(MemoryPool160 *zself, Module7 *v1x, int v2x, ExpressionList61 *v3x);
static ReturnInstruction49 *MemoryPool_allocate1427(MemoryPool160 *zself);
static LeaveInstruction50 *Block_createInstruction1428(Block38 *zself, Module7 *zmodule, int zline, MacroBlock86 *v3x, ExpressionList61 *v4x);
static LeaveInstruction50 *MemoryPool_new1429(MemoryPool160 *zself, Module7 *v1x, int v2x, MacroBlock86 *v3x, ExpressionList61 *v4x);
static LeaveInstruction50 *MemoryPool_allocate1430(MemoryPool160 *zself);
static void Collection_initialize1431(Collection135 *zself);
static void Collection_add1432(Collection135 *zself, ASTRule136 *ze);
static IfInstruction51 *Block_createInstruction1433(Block38 *zself, Module7 *zmodule, int zline);
static IfInstruction51 *MemoryPool_new1434(MemoryPool160 *zself, Module7 *v1x, int v2x);
static IfInstruction51 *MemoryPool_allocate1435(MemoryPool160 *zself);
static Rule59 *MemoryPool_allocate1436(MemoryPool160 *zself);
static WhileInstruction53 *Block_createInstruction1437(Block38 *zself, Module7 *zmodule, int zline);
static WhileInstruction53 *MemoryPool_new1438(MemoryPool160 *zself, Module7 *v1x, int v2x);
static WhileInstruction53 *MemoryPool_allocate1439(MemoryPool160 *zself);
static void BreakContext_initializeWhile1440(BreakContext179 *zself, WhileInstruction53 *zi);
static void BreakContext_initializeBlock1441(BreakContext179 *zself, BuilderContext177 *zcontext, MacroBlock86 *zblock);
static BreakInstruction54 *Block_createInstruction1442(Block38 *zself, Module7 *zmodule, int zline, int v3x, WhileInstruction53 *v4x);
static BreakInstruction54 *MemoryPool_new1443(MemoryPool160 *zself, Module7 *v1x, int v2x, int v3x, WhileInstruction53 *v4x);
static BreakInstruction54 *MemoryPool_allocate1444(MemoryPool160 *zself);
static void Collection_initialize1445(Collection133 *zself);
static void Collection_add1446(Collection133 *zself, ASTChoice137 *ze);
static SwitchInstruction55 *Block_createInstruction1447(Block38 *zself, Module7 *zmodule, int zline, Expression21 *v3x);
static SwitchInstruction55 *MemoryPool_new1448(MemoryPool160 *zself, Module7 *v1x, int v2x, Expression21 *v3x);
static SwitchInstruction55 *MemoryPool_allocate1449(MemoryPool160 *zself);
static Choice60 *MemoryPool_allocate1450(MemoryPool160 *zself);
static char Association_notEmpty1451(Association199 *zself);
static BlockInstruction57 *Block_createInstruction1452(Block38 *zself, Module7 *zmodule, int zline, Block38 *v3x);
static BlockInstruction57 *MemoryPool_new1453(MemoryPool160 *zself, Module7 *v1x, int v2x, Block38 *v3x);
static BlockInstruction57 *MemoryPool_allocate1454(MemoryPool160 *zself);
static FunctionType103 *MemoryPool_new1455(MemoryPool160 *zself, unsigned char v1x, TypeSequence108 *v2x, TypeSequence108 *v3x, BuiltinType100 *v4x);
static FunctionType103 *MemoryPool_allocate1456(MemoryPool160 *zself);
static char Association_notEmpty1457(Association198 *zself);
static FunctionExpression70 *MemoryPool_new1458(MemoryPool160 *zself, Prototype31 *v1x, Program5 *v2x, PointerType101 *v3x);
static FunctionExpression70 *MemoryPool_allocate1459(MemoryPool160 *zself);
static void BuilderContext_reportSourceError1460(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, void *v3x, Type98 *v4x, Type98 *v5x);
static void BuilderContext_reportError1461(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x, Type98 *v5x, Type98 *v6x);
static void ErrorReporter_reportError1462(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x, Type98 *v5x, Type98 *v6x);
static void StringBuffer_addFormat1463(StringBuffer2 *zself, unsigned char *zs, void *v2x, Type98 *v3x, Type98 *v4x);
static GenericFunction37 *MemoryPool_new1464(MemoryPool160 *zself, Scope8 *v1x, ASTFunction115 *v2x, Type98 *v3x);
static GenericFunction37 *MemoryPool_allocate1465(MemoryPool160 *zself);
static Alias89 *MemoryPool_new1466(MemoryPool160 *zself, Scope8 *v1x, Type98 *v2x, ASTAlias117 *v3x);
static Alias89 *MemoryPool_allocate1467(MemoryPool160 *zself);
static GlobalVariable97 *MemoryPool_new1468(MemoryPool160 *zself, Scope8 *v1x, ASTGlobalVariable114 *v2x);
static GlobalVariable97 *MemoryPool_allocate1469(MemoryPool160 *zself);
static CollectionPoolElement193 *MemoryPool_new1470(MemoryPool160 *zself, GlobalVariable97 *v1x);
static CollectionPoolElement193 *MemoryPool_allocate1471(MemoryPool160 *zself);
static char Collection_notEmpty1472(Collection202 *zself);
static GenericType94 *MemoryPool_new1473(MemoryPool160 *zself, Scope8 *v1x, ASTType118 *v2x);
static GenericType94 *MemoryPool_allocate1474(MemoryPool160 *zself);
static SubTypeDefinition92 *MemoryPool_new1475(MemoryPool160 *zself, Scope8 *v1x, ASTType118 *v2x);
static SubTypeDefinition92 *MemoryPool_allocate1476(MemoryPool160 *zself);
static ExternFunction36 *MemoryPool_new1477(MemoryPool160 *zself, Module7 *v1x, ASTExternFunction116 *v2x, Scope8 *v3x, Type98 *v4x);
static ExternFunction36 *MemoryPool_allocate1478(MemoryPool160 *zself);
static CollectionPoolElement192 *MemoryPool_new1479(MemoryPool160 *zself, ExternFunction36 *v1x);
static CollectionPoolElement192 *MemoryPool_allocate1480(MemoryPool160 *zself);
static char StringBuffer_notEmpty1481(StringBuffer2 *zself);
static Symbol29 *MemoryPool_new1482(MemoryPool160 *zself, ASTSymbol121 *v1x);
static Symbol29 *MemoryPool_allocate1483(MemoryPool160 *zself);
static void Symbol_initialize1484(Symbol29 *zself, ASTSymbol121 *zsource);
static void *Symbol_name1485(Symbol29 *zself);
static void Symbol_addToStringBuffer1486(Symbol29 *zself, StringBuffer2 *zsb);
static void SymbolDictionary_initialize1487(SymbolDictionary27 *zself, MemoryPool160 *zpool, int zsize);
static Symbol29 *SymbolDictionary_add1488(SymbolDictionary27 *zself, Symbol29 *zsymbol);
static Symbol29 *SymbolDictionary_find1489(SymbolDictionary27 *zself, void *zname);
static int SymbolDictionary_slot1490(SymbolDictionary27 *zself, void *zname);
static void Collection_initialize1491(Collection28 *zself);
static void Collection_add1492(Collection28 *zself, Symbol29 *ze);
static SymbolDictionary27 *MemoryPool_new1493(MemoryPool160 *zself, MemoryPool160 *v1x, int v2x);
static SymbolDictionary27 *MemoryPool_allocate1494(MemoryPool160 *zself);
static Symbol29 **MemoryPool_allocateArray1495(MemoryPool160 *zself, int zn);
static Attribute107 *MemoryPool_new1496(MemoryPool160 *zself, StructureType104 *v1x, ASTAttribute122 *v2x);
static Attribute107 *MemoryPool_allocate1497(MemoryPool160 *zself);
static Scope8 *MemoryPool_new1498(MemoryPool160 *zself, Scope8 *v1x, Module7 *v2x, MemoryPool160 *v3x, int v4x);
static Scope8 *MemoryPool_allocate1499(MemoryPool160 *zself);
static void VargsExpression_initialize1500(VargsExpression88 *zself, ExpressionList61 *zexpressions, Program5 *zprogram);
static SelectExpression87 *MemoryPool_new1501(MemoryPool160 *zself, Expression21 *v1x, int v2x, Type98 *v3x);
static SelectExpression87 *MemoryPool_allocate1502(MemoryPool160 *zself);
static String8Expression66 *MemoryPool_new1503(MemoryPool160 *zself, unsigned char *v1x, Program5 *v2x, Type98 *v3x);
static String8Expression66 *MemoryPool_allocate1504(MemoryPool160 *zself);
static char Association_notEmpty1505(Association195 *zself);
static unsigned short *MemoryPool_allocateArray1506(MemoryPool160 *zself, int zn);
static String16Expression67 *MemoryPool_new1507(MemoryPool160 *zself, unsigned short *v1x, unsigned char *v2x, Program5 *v3x, Type98 *v4x);
static String16Expression67 *MemoryPool_allocate1508(MemoryPool160 *zself);
static char Association_notEmpty1509(Association196 *zself);
static void BuilderContext_reportSourceError1510(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, size_t v3x);
static void BuilderContext_reportError1511(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, size_t v4x);
static void ErrorReporter_reportError1512(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, size_t v4x);
static void BuilderContext_reportSourceError1513(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, Symbol29 *v3x);
static void BuilderContext_reportError1514(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Symbol29 *v4x);
static void ErrorReporter_reportError1515(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Symbol29 *v4x);
static void StringBuffer_addFormat1516(StringBuffer2 *zself, unsigned char *zs, Symbol29 *v2x);
static StringBuffer2 *StringBuffer__shl1517(StringBuffer2 *zself, Symbol29 *zobj);
static void SequenceIterator_initialize1518(SequenceIterator201 *zself, ExpressionList61 *zarguments, Collection203 *zsource);
static char SequenceIterator_isEOF1519(SequenceIterator201 *zself);
static ArrayExpression69 *MemoryPool_new1520(MemoryPool160 *zself, ExpressionList61 *v1x, Program5 *v2x, Type98 *v3x, ArrayType102 *v4x);
static ArrayExpression69 *MemoryPool_allocate1521(MemoryPool160 *zself);
static Expression21 *MemoryPool_allocate1522(MemoryPool160 *zself);
static void BuilderContext_reportSourceError1523(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, ExpressionTypeList64 *v3x, ExpressionTypeList64 *v4x);
static void BuilderContext_reportError1524(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, ExpressionTypeList64 *v4x, ExpressionTypeList64 *v5x);
static void ErrorReporter_reportError1525(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, ExpressionTypeList64 *v4x, ExpressionTypeList64 *v5x);
static void StringBuffer_addFormat1526(StringBuffer2 *zself, unsigned char *zs, ExpressionTypeList64 *v2x, ExpressionTypeList64 *v3x);
static CondExpression82 *MemoryPool_new1527(MemoryPool160 *zself, Program5 *v1x, Expression21 *v2x, ExpressionList61 *v3x, ExpressionList61 *v4x, TypeSequence108 *v5x);
static CondExpression82 *MemoryPool_allocate1528(MemoryPool160 *zself);
static VargsExpression88 *MemoryPool_new1529(MemoryPool160 *zself, ExpressionList61 *v1x, Program5 *v2x);
static VargsExpression88 *MemoryPool_allocate1530(MemoryPool160 *zself);
static void ErrorReporter_reportError1531(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, unsigned char *v4x);
static void StringBuffer_addFormat1532(StringBuffer2 *zself, unsigned char *zs, unsigned char *v2x);
static void Parser_initialize1533(Parser182 *zself, MemoryPool160 *zpool, unsigned char *zsource, unsigned char *zfile, SimpleDictionary186 *zdefines, IdentifierDictionary19 *zidentifiers, ErrorReporter158 *zerrorReporter);
static void Parser_release1534(Parser182 *zself);
static ASTModule112 *Parser_getModule1535(Parser182 *zself);
static void Parser_readContent1536(Parser182 *zself, ASTNode110 *zs, int zmask);
static ASTAlias117 *Parser_getAlias1537(Parser182 *zself, int zcode);
static ASTGlobalVariable114 *Parser_getGlobalVariable1538(Parser182 *zself, int zcode);
static ASTFunction115 *Parser_getFunction1539(Parser182 *zself, int zcode);
static ASTType118 *Parser_getStructure1540(Parser182 *zself, int zcode);
static ASTAttribute122 *Parser_getAttribute1541(Parser182 *zself);
static ASTType118 *Parser_getSubType1542(Parser182 *zself, int zcode);
static ASTExternFunction116 *Parser_getImportFunction1543(Parser182 *zself, int zcode);
static ASTImport113 *Parser_getImport1544(Parser182 *zself);
static ASTExtension119 *Parser_getExtension1545(Parser182 *zself);
static ASTSymbol121 *Parser_getSymbol1546(Parser182 *zself);
static Collection202 *Parser_getTypeParameterList1547(Parser182 *zself);
static Collection203 *Parser_getArgumentList1548(Parser182 *zself);
static Collection203 *Parser_getExpressionList1549(Parser182 *zself);
static Collection204 *Parser_getInstructionList1550(Parser182 *zself);
static Collection244 *Parser_getIdList1551(Parser182 *zself);
static ASTInstruction123 *Parser_getInstruction1552(Parser182 *zself);
static ASTInstruction123 *Parser_getInstructionNoPrefix1553(Parser182 *zself);
static ASTBlockClosure154 *Parser_getBlockClosure1554(Parser182 *zself);
static Collection204 *Parser_getBlock1555(Parser182 *zself);
static Collection204 *Parser_getMiniBlock1556(Parser182 *zself);
static ASTExpression140 *Parser_getExpression1557(Parser182 *zself);
static ASTExpression140 *Parser_getExpressionWitthPriority1558(Parser182 *zself, int zcurrentPriority);
static ASTFreeCall141 *Parser_getFreeCall1559(Parser182 *zself);
static ASTRule136 *Parser_getRule1560(Parser182 *zself);
static ASTChoice137 *Parser_getChoice1561(Parser182 *zself);
static ASTId155 *Parser_getId1562(Parser182 *zself);
static void *Parser_getName1563(Parser182 *zself);
static DirectiveSet156 *Parser_getDirectives1564(Parser182 *zself);
static ASTInstruction123 *Parser_getTrailingConditional1565(Parser182 *zself, ASTInstruction123 *zinstruction);
static char Parser_expect1566(Parser182 *zself, int zexpectedToken);
static void Parser_skipEmptyTokens1567(Parser182 *zself);
static int Parser_token1568(Parser182 *zself);
static void Parser_nextToken1569(Parser182 *zself);
static unsigned char *Parser_string1570(Parser182 *zself);
static void *Parser_identifier1571(Parser182 *zself);
static unsigned long long Parser_integer1572(Parser182 *zself);
static int Parser_line1573(Parser182 *zself);
static void *Parser_operatorParams1574(Parser182 *zself, int zop, int *r1x, int *r2x);
static void *Parser_prefixParams1575(Parser182 *zself, int zop, int *r1x);
static char Parser_unexpected1576(Parser182 *zself, int zexpectedToken);
static void Parser_syntaxError1577(Parser182 *zself);
static DirectiveSet156 *Parser_cloneDirectives1578(Parser182 *zself);
static void Parser_applyCurrentDirective1579(Parser182 *zself);
static void Parser_applyDirective1580(Parser182 *zself, DirectiveSet156 *zdirectives);
static char Parser_applyIfdef1581(Parser182 *zself, DirectiveSet156 *zdirectives);
static char Parser_readIfdef1582(Parser182 *zself, DirectiveSet156 *zdirectives, char zinvert);
static void Parser_readIfeq1583(Parser182 *zself, DirectiveSet156 *zdirectives, char zinvert);
static void TokenStream_initialize1584(TokenStream183 *zself, MemoryPool160 *zpool, unsigned char *zs, SimpleDictionary186 *zdefines, IdentifierDictionary19 *zidentifiers, unsigned char *zfile, ErrorReporter158 *zerrorReporter);
static void TokenStream_release1585(TokenStream183 *zself);
static void TokenStream_nextToken1586(TokenStream183 *zself);
static void TokenStream_error1587(TokenStream183 *zself, unsigned char *zp, unsigned char *zmsg);
static ASTModule112 *MemoryPool_new1588(MemoryPool160 *zself, unsigned char *v1x);
static ASTModule112 *MemoryPool_allocate1589(MemoryPool160 *zself);
static void ASTModule_initialize1590(ASTModule112 *zself, unsigned char *zfilename);
static StringBuffer2 *StringBuffer__shl1591(StringBuffer2 *zself, int zobj);
static void Parser_reportError1592(Parser182 *zself, unsigned char *zfmt, unsigned char *v2x, unsigned char *v3x);
static void ErrorReporter_reportError1593(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, unsigned char *v4x, unsigned char *v5x);
static void StringBuffer_addFormat1594(StringBuffer2 *zself, unsigned char *zs, unsigned char *v2x, unsigned char *v3x);
static Module7 *MemoryPool_new1595(MemoryPool160 *zself, Program5 *v1x, unsigned char *v2x, Module7 *v3x, ImportPath10 *v4x);
static Module7 *MemoryPool_allocate1596(MemoryPool160 *zself);
static DirectiveSet156 *MemoryPool_allocate1597(MemoryPool160 *zself);
static void Parser_reportError1598(Parser182 *zself, unsigned char *zfmt, unsigned char *v2x);
static ASTSymbol121 *MemoryPool_allocate1599(MemoryPool160 *zself);
static ASTFunction115 *MemoryPool_allocate1600(MemoryPool160 *zself);
static void Parser_reportError1601(Parser182 *zself, unsigned char *zfmt);
static Collection202 *MemoryPool_new1602(MemoryPool160 *zself);
static Collection202 *MemoryPool_allocate1603(MemoryPool160 *zself);
static ASTParameter120 *MemoryPool_allocate1604(MemoryPool160 *zself);
static Collection203 *MemoryPool_new1605(MemoryPool160 *zself);
static Collection203 *MemoryPool_allocate1606(MemoryPool160 *zself);
static ASTAlias117 *MemoryPool_allocate1607(MemoryPool160 *zself);
static ASTGlobalVariable114 *MemoryPool_allocate1608(MemoryPool160 *zself);
static ASTType118 *MemoryPool_allocate1609(MemoryPool160 *zself);
static ASTExtension119 *MemoryPool_allocate1610(MemoryPool160 *zself);
static ASTExternFunction116 *MemoryPool_allocate1611(MemoryPool160 *zself);
static ASTImport113 *MemoryPool_allocate1612(MemoryPool160 *zself);
static ASTAttribute122 *MemoryPool_allocate1613(MemoryPool160 *zself);
static Collection204 *MemoryPool_new1614(MemoryPool160 *zself);
static Collection204 *MemoryPool_allocate1615(MemoryPool160 *zself);
static ASTDefer139 *MemoryPool_allocate1616(MemoryPool160 *zself);
static ASTBegin138 *MemoryPool_allocate1617(MemoryPool160 *zself);
static ASTReturn129 *MemoryPool_allocate1618(MemoryPool160 *zself);
static ASTIf134 *MemoryPool_allocate1619(MemoryPool160 *zself);
static ASTRule136 *MemoryPool_allocate1620(MemoryPool160 *zself);
static ASTWhile131 *MemoryPool_allocate1621(MemoryPool160 *zself);
static ASTSwitch132 *MemoryPool_allocate1622(MemoryPool160 *zself);
static ASTChoice137 *MemoryPool_allocate1623(MemoryPool160 *zself);
static ASTId155 *MemoryPool_allocate1624(MemoryPool160 *zself);
static ASTLocalVariable127 *MemoryPool_allocate1625(MemoryPool160 *zself);
static ASTFreeCall141 *MemoryPool_allocate1626(MemoryPool160 *zself);
static ASTBlockClosure154 *MemoryPool_allocate1627(MemoryPool160 *zself);
static Collection244 *MemoryPool_new1628(MemoryPool160 *zself);
static Collection244 *MemoryPool_allocate1629(MemoryPool160 *zself);
static ASTLocalVariables126 *MemoryPool_allocate1630(MemoryPool160 *zself);
static ASTLocalAlias128 *MemoryPool_allocate1631(MemoryPool160 *zself);
static ASTBreak130 *MemoryPool_allocate1632(MemoryPool160 *zself);
static ASTAssign125 *MemoryPool_allocate1633(MemoryPool160 *zself);
static ASTEvaluate124 *MemoryPool_allocate1634(MemoryPool160 *zself);
static ASTArrayType147 *MemoryPool_allocate1635(MemoryPool160 *zself);
static ASTArray145 *MemoryPool_allocate1636(MemoryPool160 *zself);
static ASTInteger149 *MemoryPool_allocate1637(MemoryPool160 *zself);
static ASTString150 *MemoryPool_allocate1638(MemoryPool160 *zself);
static ASTSymbolName151 *MemoryPool_allocate1639(MemoryPool160 *zself);
static ASTUnary143 *MemoryPool_allocate1640(MemoryPool160 *zself);
static ASTContextCall142 *MemoryPool_allocate1641(MemoryPool160 *zself);
static ASTExpression140 *MemoryPool_allocate1642(MemoryPool160 *zself);
static ASTFunctionType146 *MemoryPool_allocate1643(MemoryPool160 *zself);
static ASTFunctionReference148 *MemoryPool_allocate1644(MemoryPool160 *zself);
static ASTCond153 *MemoryPool_allocate1645(MemoryPool160 *zself);
static ASTBinary144 *MemoryPool_allocate1646(MemoryPool160 *zself);
static ASTOffset152 *MemoryPool_allocate1647(MemoryPool160 *zself);
static void SimpleError_onDelete1648(SimpleError164 *zself);
static void SimpleError_addMessageTo1649(SimpleError164 *zself, StringBuffer2 *zsb);
static SimpleError164 *_new1650(ErrorCode161 *zcode, unsigned char *zmessage, unsigned char *v2x);
static SimpleError164 *_allocate1651();
static void SimpleError_initialize1652(SimpleError164 *zself, ErrorCode161 *zcode, unsigned char *zmessage, unsigned char *v3x);
static void _free1653(void *zp);
static void StringBuffer_printFormat1654(StringBuffer2 *zself, unsigned char *zs, unsigned char *v2x);
static ArrayType102 *MemoryPool_new1655(MemoryPool160 *zself, Type98 *v1x, size_t v2x, Type98 *v3x);
static ArrayType102 *MemoryPool_allocate1656(MemoryPool160 *zself);
static char Association_notEmpty1657(Association197 *zself);
static MetaType99 *MemoryPool_new1658(MemoryPool160 *zself, Type98 *v1x);
static MetaType99 *MemoryPool_allocate1659(MemoryPool160 *zself);
static PointerType101 *MemoryPool_new1660(MemoryPool160 *zself, Scope8 *v1x, Type98 *v2x, Type98 *v3x, void* v4x);
extern int CDECL file_exists(unsigned char *);
extern long long CDECL file_size(unsigned char *);
extern int CDECL get_errno();
extern FILE170 *CDECL fopen(unsigned char *, unsigned char *);
extern int CDECL fclose(FILE170 *);
extern size_t CDECL fread(unsigned char *, size_t , size_t , FILE170 *);
extern size_t CDECL fwrite(unsigned char *, size_t , size_t , FILE170 *);
extern int CDECL ferror(FILE170 *);
extern void *CDECL malloc(size_t );
extern void CDECL free(void *);
extern int CDECL putchar(int );
extern Identifiers157 identifiers1661;
extern size_t leftBlock1662;
extern size_t leftBytes1663;
extern ErrorCode161 ErrorCodeSystem1664;
extern ErrorCode161 ErrorCodeFileTooBig1665;
extern Slot184 (stringBufferPool1666)[4];
extern Slot184 *stringBufferTop1667;
extern Slot184 *stringBufferBottom1668;
extern Slot184 *stringBufferCurrent1669;
extern ErrorClass163 S1670;
extern Collection244 S1671;
extern Collection202 S1672;
extern DirectiveSet156 S1673;
extern Collection203 S1674;
extern TypeSequence108 S1675;
extern ErrorClass163 S1676;
extern ExpressionList61 S1677;
extern unsigned char (A1678)[256];
extern char (A1679)[];
extern Keyword200 (A1680)[];
extern Keyword200 (A1681)[];
extern int (A1682)[];
extern unsigned char *(A1683)[];
extern unsigned char *(A1684)[];

/* Define all strings */
static unsigned char S1685[]="Can\'t get size of file \a: over 4GB";
static unsigned char S1686[]="r";
static unsigned char S1687[]="undefined string constant";
static unsigned char S1688[]="syntax error: \a unexpected";
static unsigned char S1689[]="syntax error: expecting \a but found \a";
static unsigned char S1690[]="<unknown>";
static unsigned char S1691[]=".";
static unsigned char S1692[]="->";
static unsigned char S1693[]="@";
static unsigned char S1694[]="...";
static unsigned char S1695[]="}";
static unsigned char S1696[]="{";
static unsigned char S1697[]="]";
static unsigned char S1698[]="[";
static unsigned char S1699[]=")";
static unsigned char S1700[]="(";
static unsigned char S1701[]=":";
static unsigned char S1702[]=",";
static unsigned char S1703[]=">";
static unsigned char S1704[]=">=";
static unsigned char S1705[]="<";
static unsigned char S1706[]="<=";
static unsigned char S1707[]="<>";
static unsigned char S1708[]="==";
static unsigned char S1709[]="=";
static unsigned char S1710[]="^";
static unsigned char S1711[]="|";
static unsigned char S1712[]="&";
static unsigned char S1713[]=">>";
static unsigned char S1714[]="<<";
static unsigned char S1715[]="%";
static unsigned char S1716[]="/";
static unsigned char S1717[]="*";
static unsigned char S1718[]="~";
static unsigned char S1719[]="-";
static unsigned char S1720[]="+";
static unsigned char S1721[]="<end-of-line>";
static unsigned char S1722[]="<end-of-file>";
static unsigned char S1723[]="<a string>";
static unsigned char S1724[]="<a char>";
static unsigned char S1725[]="<an integer>";
static unsigned char S1726[]="<an identifier>";
static unsigned char S1727[]="invalid character";
static unsigned char S1728[]="invalid escape character";
static unsigned char S1729[]="unexpected end of file in character";
static unsigned char S1730[]="string too long";
static unsigned char S1731[]="unexpected end of line in string";
static unsigned char S1732[]="unexpected end of file in string";
static unsigned char S1733[]="cond";
static unsigned char S1734[]="not";
static unsigned char S1735[]="or";
static unsigned char S1736[]="and";
static unsigned char S1737[]="defer";
static unsigned char S1738[]="do";
static unsigned char S1739[]="yield";
static unsigned char S1740[]="break";
static unsigned char S1741[]="return";
static unsigned char S1742[]="case";
static unsigned char S1743[]="switch";
static unsigned char S1744[]="repeat";
static unsigned char S1745[]="else";
static unsigned char S1746[]="elsif";
static unsigned char S1747[]="if";
static unsigned char S1748[]="ref";
static unsigned char S1749[]="end";
static unsigned char S1750[]="begin";
static unsigned char S1751[]="extend";
static unsigned char S1752[]="const";
static unsigned char S1753[]="var";
static unsigned char S1754[]="meta";
static unsigned char S1755[]="function";
static unsigned char S1756[]="stype";
static unsigned char S1757[]="struct";
static unsigned char S1758[]="import";
static unsigned char S1759[]="Unsupported expression";
static unsigned char S1760[]=".co";
static unsigned char S1761[]="Unsupported instruction";
static unsigned char S1762[]="Unsupported definition";
static unsigned char S1763[]="Downcast failure: not an attribute";
static unsigned char S1764[]="Downcast failure: not a structure argument";
static unsigned char S1765[]="Downcast failure: not a variable";
static unsigned char S1766[]="Downcast failure: not a local alias";
static unsigned char S1767[]="Downcast failure: not a block parameter";
static unsigned char S1768[]="Downcast failure: not a function parameter";
static unsigned char S1769[]="Downcast failure: not a type";
static unsigned char S1770[]="Downcast failure: not an alias";
static unsigned char S1771[]="Downcast failure: not a global variable";
static unsigned char S1772[]="Downcast failure: not an extern  function";
static unsigned char S1773[]="Downcast failure: not a generic type";
static unsigned char S1774[]="Macro should have been defined with defineFunctionType";
static unsigned char S1775[]="Downcast failure: not a generic function";
static unsigned char S1776[]=") ";
static unsigned char S1777[]="Downcast failure: not a function";
static unsigned char S1778[]="Downcasting failure: not an array";
static unsigned char S1779[]="Downcasting failure: not a structure";
static unsigned char S1780[]="Downcasting failure: not a string 16";
static unsigned char S1781[]="Downcasting failure: not a string 8";
static unsigned char S1782[]="false";
static unsigned char S1783[]="true";
static unsigned char S1784[]="@(";
static unsigned char S1785[]=" -> (";
static unsigned char S1786[]=" (";
static unsigned char S1787[]=" .stdcall";
static unsigned char S1788[]=" .cdecl";
static unsigned char S1789[]="Function";
static unsigned char S1790[]="] ";
static unsigned char S1791[]="\t} __parent;\n";
static unsigned char S1792[]="\tstruct {\n";
static unsigned char S1793[]="*** unknown type ***";
static unsigned char S1794[]=")(";
static unsigned char S1795[]="size_t";
static unsigned char S1796[]="unsigned long long";
static unsigned char S1797[]="unsigned int";
static unsigned char S1798[]="unsigned short";
static unsigned char S1799[]="unsigned char";
static unsigned char S1800[]="long long";
static unsigned char S1801[]="int";
static unsigned char S1802[]="short";
static unsigned char S1803[]="char";
static unsigned char S1804[]="void*";
static unsigned char S1805[]="void";
static unsigned char S1806[]="Invalid expression \a";
static unsigned char S1807[]="Downcast failure: not an array";
static unsigned char S1808[]="!";
static unsigned char S1809[]=" > ";
static unsigned char S1810[]=" >= ";
static unsigned char S1811[]=" < ";
static unsigned char S1812[]=" <= ";
static unsigned char S1813[]=" != ";
static unsigned char S1814[]=" == ";
static unsigned char S1815[]="(char)";
static unsigned char S1816[]="--";
static unsigned char S1817[]="++";
static unsigned char S1818[]=" ^= ";
static unsigned char S1819[]=" |= ";
static unsigned char S1820[]=" &= ";
static unsigned char S1821[]=" >>= ";
static unsigned char S1822[]=" <<= ";
static unsigned char S1823[]=" %= ";
static unsigned char S1824[]=" /= ";
static unsigned char S1825[]=" *= ";
static unsigned char S1826[]=" -= ";
static unsigned char S1827[]=" += ";
static unsigned char S1828[]="-";
static unsigned char S1829[]="~";
static unsigned char S1830[]=" ^ ";
static unsigned char S1831[]=" | ";
static unsigned char S1832[]=" & ";
static unsigned char S1833[]=" >> ";
static unsigned char S1834[]=" << ";
static unsigned char S1835[]=" % ";
static unsigned char S1836[]=" / ";
static unsigned char S1837[]=" * ";
static unsigned char S1838[]=" - ";
static unsigned char S1839[]=" + ";
static unsigned char S1840[]="->";
static unsigned char S1841[]="Downcast failure: not a function type";
static unsigned char S1842[]=" || ";
static unsigned char S1843[]=" && ";
static unsigned char S1844[]="Downcasting failure: not a global constant";
static unsigned char S1845[]="Downcasting failure: not a function";
static unsigned char S1846[]="(&";
static unsigned char S1847[]="LL";
static unsigned char S1848[]="((short)";
static unsigned char S1849[]="((char)";
static unsigned char S1850[]="UL";
static unsigned char S1851[]="((unsigned short)";
static unsigned char S1852[]="((unsigned char)";
static unsigned char S1853[]="U)";
static unsigned char S1854[]="((size_t)0x";
static unsigned char S1855[]="Downcasting failure: not an integer";
static unsigned char S1856[]="((";
static unsigned char S1857[]="else\n";
static unsigned char S1858[]="if(";
static unsigned char S1859[]="Unhandled instruction";
static unsigned char S1860[]="default:\n";
static unsigned char S1861[]="break;\n";
static unsigned char S1862[]=":\n";
static unsigned char S1863[]="case ";
static unsigned char S1864[]=" )\n";
static unsigned char S1865[]="switch( ";
static unsigned char S1866[]=": ;\n";
static unsigned char S1867[]="for(;;)\n";
static unsigned char S1868[]=")\n";
static unsigned char S1869[]="while(";
static unsigned char S1870[]="goto ";
static unsigned char S1871[]="L";
static unsigned char S1872[]=")";
static unsigned char S1873[]="(*";
static unsigned char S1874[]=" ";
static unsigned char S1875[]="return";
static unsigned char S1876[]="t";
static unsigned char S1877[]="w";
static unsigned char S1878[]="Left bytes: \a";
static unsigned char S1879[]="Left blocks: \a";
static unsigned char S1880[]="Allocated in pool...: ";
static unsigned char S1881[]="================================\n";
static unsigned char S1882[]="Error while saving object file: \a";
static unsigned char S1883[]="errno = ";
static unsigned char S1884[]="}\n";
static unsigned char S1885[]="{\n";
static unsigned char S1886[]="\n/* Define functions */\n";
static unsigned char S1887[]=" = ";
static unsigned char S1888[]="\n/* Define global variables */\n";
static unsigned char S1889[]="\n/* Define array constants */\n";
static unsigned char S1890[]="\n/* Define structure constants */\n";
static unsigned char S1891[]="[]=L\"";
static unsigned char S1892[]="static unsigned short ";
static unsigned char S1893[]="\n/* Define all wstrings */\n";
static unsigned char S1894[]="\";\n";
static unsigned char S1895[]="\\\\";
static unsigned char S1896[]="\\\'";
static unsigned char S1897[]="\\\"";
static unsigned char S1898[]="\\x";
static unsigned char S1899[]="\\v";
static unsigned char S1900[]="\\t";
static unsigned char S1901[]="\\r";
static unsigned char S1902[]="\\n";
static unsigned char S1903[]="\\f";
static unsigned char S1904[]="\\b";
static unsigned char S1905[]="\\a";
static unsigned char S1906[]="[]=\"";
static unsigned char S1907[]="static unsigned char ";
static unsigned char S1908[]="\n/* Define all strings */\n";
static unsigned char S1909[]="A";
static unsigned char S1910[]="S";
static unsigned char S1911[]="\n";
static unsigned char S1912[]="STDCALL ";
static unsigned char S1913[]="CDECL ";
static unsigned char S1914[]="static ";
static unsigned char S1915[]="extern ";
static unsigned char S1916[]="Downcast failure: not a structure";
static unsigned char S1917[]="Downcast failure: not a pointer";
static unsigned char S1918[]="};\n";
static unsigned char S1919[]="\tint dummy;\n";
static unsigned char S1920[]="__parent";
static unsigned char S1921[]="\t";
static unsigned char S1922[]="\n{\n";
static unsigned char S1923[]="struct ";
static unsigned char S1924[]="\n/* Define structures */\n";
static unsigned char S1925[]=";\n";
static unsigned char S1926[]="typedef struct ";
static unsigned char S1927[]="/* Declare structures, functions, variables and constants */\n";
static unsigned char S1928[]="#define STDCALL // __stdcall\n\n";
static unsigned char S1929[]="#define CDECL // __cdecl\n";
static unsigned char S1930[]="#include <stddef.h>\n\n";
static unsigned char S1931[]="while";
static unsigned char S1932[]="volatile";
static unsigned char S1933[]="void";
static unsigned char S1934[]="unsigned";
static unsigned char S1935[]="union";
static unsigned char S1936[]="typedef";
static unsigned char S1937[]="static";
static unsigned char S1938[]="sizeof";
static unsigned char S1939[]="signed";
static unsigned char S1940[]="short";
static unsigned char S1941[]="register";
static unsigned char S1942[]="long";
static unsigned char S1943[]="int";
static unsigned char S1944[]="inline";
static unsigned char S1945[]="goto";
static unsigned char S1946[]="for";
static unsigned char S1947[]="float";
static unsigned char S1948[]="extern";
static unsigned char S1949[]="double";
static unsigned char S1950[]="default";
static unsigned char S1951[]="continue";
static unsigned char S1952[]="char";
static unsigned char S1953[]="auto";
static unsigned char S1954[]=", ";
static unsigned char S1955[]="Downcast failure: not a meta type";
static unsigned char S1956[]=": ";
static unsigned char S1957[]=":";
static unsigned char S1958[]="yield not allowed here";
static unsigned char S1959[]="the return value of type \'\a\' must be checked";
static unsigned char S1960[]="a subtype can\'t inherit from \a";
static unsigned char S1961[]="missing symbol value";
static unsigned char S1962[]="symbol \'\a already defined";
static unsigned char S1963[]="symbol \'\a not found in \a";
static unsigned char S1964[]="can\'t convert the integer to a \a";
static unsigned char S1965[]="can\'t guess the symbol type";
static unsigned char S1966[]="can\'t guess the array type";
static unsigned char S1967[]="can\'t guess the integer type";
static unsigned char S1968[]="can\'t guess the string type";
static unsigned char S1969[]="the type \'\a\' has no size";
static unsigned char S1970[]="continue not supported in while yet";
static unsigned char S1971[]="continue: unexpected argument";
static unsigned char S1972[]="break: unexpected argument";
static unsigned char S1973[]="can\'t use \a in vtable: it must be a constant or a non-generic function";
static unsigned char S1974[]="can\'t get a reference of \a: it is an iterator";
static unsigned char S1975[]="infinite recursion with \a";
static unsigned char S1976[]="the expression is not a numerical expression";
static unsigned char S1977[]="there is no extra parameter here";
static unsigned char S1978[]="invalid symbol value";
static unsigned char S1979[]="the size of the array is not an integer constant";
static unsigned char S1980[]="recursive symbol \'\a\'";
static unsigned char S1981[]="recursive function \'\a\'";
static unsigned char S1982[]="recursive inclusion of the type \'\a\'";
static unsigned char S1983[]="recursive call of \'\a\'";
static unsigned char S1984[]="recursive call of \'\a\', the return type must be explicitely declared";
static unsigned char S1985[]="switch: duplicate constant";
static unsigned char S1986[]="initializer: too many values";
static unsigned char S1987[]="initializer: missing value";
static unsigned char S1988[]="initializer: \'\a\' is neither a structure nor an array";
static unsigned char S1989[]="the list of expressions cannot contain a type";
static unsigned char S1990[]="the list of expressions cannot be empty";
static unsigned char S1991[]="the expression can not have multiple values";
static unsigned char S1992[]="the expression does not return any value";
static unsigned char S1993[]="invalid char size: \a. must be 8 or 16 bits";
static unsigned char S1994[]="\'\a\' is not a function";
static unsigned char S1995[]="\'\a\' is not an integer type";
static unsigned char S1996[]="\'\a\' is not an array";
static unsigned char S1997[]="\'\a\' is not a pointer";
static unsigned char S1998[]="call: \'\a\' is not a pointer to a function";
static unsigned char S1999[]="super: \'\a\' has no parent type";
static unsigned char S2000[]="block unexpected";
static unsigned char S2001[]="block missing";
static unsigned char S2002[]="substract to array pointer: invalid second argument: \'\a\': it must be an integer or a \'\a\'";
static unsigned char S2003[]="--- error while defining the function \'\a\'";
static unsigned char S2004[]="not a constant value";
static unsigned char S2005[]="can\'t cast \a to \a";
static unsigned char S2006[]="\a is not a simple type";
static unsigned char S2007[]="integer constant is out of range for an \a";
static unsigned char S2008[]="argument \a: \a is not a \a";
static unsigned char S2009[]="recursive call to import";
static unsigned char S2010[]="the expression is not a constant";
static unsigned char S2011[]="the expression is not an integer";
static unsigned char S2012[]="continue must be inside a loop or a macro block";
static unsigned char S2013[]="break must be inside a loop or a macro block";
static unsigned char S2014[]="the expression is not a boolean expression";
static unsigned char S2015[]="can\'t compare a \a with a \a";
static unsigned char S2016[]="can\'t assign, the left expression is not a lvalue";
static unsigned char S2017[]="\a takes no argument";
static unsigned char S2018[]="wrong number of arguments, expected \a or more but found \a";
static unsigned char S2019[]="wrong number of arguments, expected \a but found \a";
static unsigned char S2020[]="wrong number of block parameters, expected \a but found \a";
static unsigned char S2021[]="wrong number of left expressions, expected \a but found \a";
static unsigned char S2022[]="wrong number of variables, expected \a but found \a";
static unsigned char S2023[]="a parameter of \a is not a valid constant";
static unsigned char S2024[]="undefined size of attribute \a";
static unsigned char S2025[]="Unknown attribute \a";
static unsigned char S2026[]="\a is not a structure";
static unsigned char S2027[]="the expression is not a type";
static unsigned char S2028[]="definition for \a in \a is private";
static unsigned char S2029[]="can\'t find a definition for \a in \a";
static unsigned char S2030[]="can\'t find a definition for \a";
static unsigned char S2031[]="\'continue \a\' is missing at the end of the block";
static unsigned char S2032[]="\'return \a\' is missing at the end of the function";
static unsigned char S2033[]="\a is not compatible with \a";
static unsigned char S2034[]="return \a is not compatible with \a";
static unsigned char S2035[]="this instruction will never be executed";
static unsigned char S2036[]="first definition";
static unsigned char S2037[]="conflicting definition: \a";
static unsigned char S2038[]="recursive import of \'\a\'";
static unsigned char S2039[]="cannot import \'\a\'";
static unsigned char S2040[]="_assign_dec";
static unsigned char S2041[]="_assign_inc";
static unsigned char S2042[]="_assign_xor";
static unsigned char S2043[]="_assign_or";
static unsigned char S2044[]="_assign_and";
static unsigned char S2045[]="_assign_shr";
static unsigned char S2046[]="_assign_shl";
static unsigned char S2047[]="_assign_mod";
static unsigned char S2048[]="_assign_div";
static unsigned char S2049[]="_assign_mul";
static unsigned char S2050[]="_assign_sub";
static unsigned char S2051[]="_assign_add";
static unsigned char S2052[]="_gt";
static unsigned char S2053[]="_ge";
static unsigned char S2054[]="_lt";
static unsigned char S2055[]="_le";
static unsigned char S2056[]="_ne";
static unsigned char S2057[]="_eq";
static unsigned char S2058[]="_not";
static unsigned char S2059[]="_xor";
static unsigned char S2060[]="_or";
static unsigned char S2061[]="_and";
static unsigned char S2062[]="_shr";
static unsigned char S2063[]="_shl";
static unsigned char S2064[]="_mod";
static unsigned char S2065[]="_div";
static unsigned char S2066[]="_mul";
static unsigned char S2067[]="_dist";
static unsigned char S2068[]="_sub";
static unsigned char S2069[]="_add";
static unsigned char S2070[]="_neg";
static unsigned char S2071[]="_pos";
static unsigned char S2072[]="_at";
static unsigned char S2073[]="ifndef";
static unsigned char S2074[]="ifdef";
static unsigned char S2075[]="ifne";
static unsigned char S2076[]="ifeq";
static unsigned char S2077[]="mustcheck";
static unsigned char S2078[]="entry";
static unsigned char S2079[]="fast";
static unsigned char S2080[]="cdecl";
static unsigned char S2081[]="stdcall";
static unsigned char S2082[]="c";
static unsigned char S2083[]="private";
static unsigned char S2084[]="public";
static unsigned char S2085[]="cast";
static unsigned char S2086[]="downcast";
static unsigned char S2087[]="upcast";
static unsigned char S2088[]="vtable";
static unsigned char S2089[]="notNil";
static unsigned char S2090[]="isNil";
static unsigned char S2091[]="vargs_each";
static unsigned char S2092[]="vargs_size";
static unsigned char S2093[]="release";
static unsigned char S2094[]="false";
static unsigned char S2095[]="true";
static unsigned char S2096[]="call";
static unsigned char S2097[]="super";
static unsigned char S2098[]="nil";
static unsigned char S2099[]="cell";
static unsigned char S2100[]="target";
static unsigned char S2101[]="size";
static unsigned char S2102[]="self";
static unsigned char S2103[]="main";
static unsigned char S2104[]="Composite";
static unsigned char S2105[]="Void";
static unsigned char S2106[]="Size";
static unsigned char S2107[]="Uint64";
static unsigned char S2108[]="Uint32";
static unsigned char S2109[]="Uint16";
static unsigned char S2110[]="Uint8";
static unsigned char S2111[]="Int64";
static unsigned char S2112[]="Int32";
static unsigned char S2113[]="Int16";
static unsigned char S2114[]="Int8";
static unsigned char S2115[]="Bool";
static unsigned char S2116[]="Nil";
static unsigned char S2117[]="Anything";
static unsigned char S2118[]="";
static unsigned char S2119[]="p64";
static unsigned char S2120[]="p32";
static unsigned char S2121[]="Filename missing\n";
static unsigned char S2122[]="Copper 4.5";
static unsigned char S2123[]="";
static unsigned char S2124[]="-D";
static unsigned char S2125[]="-I";
static unsigned char S2126[]="-o";
static unsigned char S2127[]="-dump";
static unsigned char S2128[]="-debug";
static unsigned char S2129[]="-v";
static unsigned char S2130[]="-verbose";
static unsigned char S2131[]="a.c";

/* Define all wstrings */

/* Define structure constants */
ErrorClass163 S1670={((void (*)(Error162 *, StringBuffer2 *))SimpleError_addMessageTo1649), ((void (*)(Error162 *))SimpleError_onDelete1648)};
Collection244 S1671={0, ((ASTId155 *)0), ((ASTId155 *)0)};
Collection202 S1672={0, ((ASTParameter120 *)0), ((ASTParameter120 *)0)};
DirectiveSet156 S1673={((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), 0, 0, 0};
Collection203 S1674={0, ((ASTExpression140 *)0), ((ASTExpression140 *)0)};
TypeSequence108 S1675={0, {((Type98 *)0)}};
ErrorClass163 S1676={((void (*)(Error162 *, StringBuffer2 *))SystemError_addMessageTo1083), ((void (*)(Error162 *))SystemError_onDelete1082)};
ExpressionList61 S1677={0, ((CollectionPoolElement205 *)0), ((CollectionPoolElement205 *)0)};

/* Define array constants */
unsigned char (A1678)[256]={((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)1U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)2U), ((unsigned char)3U), ((unsigned char)3U), ((unsigned char)3U), ((unsigned char)3U), ((unsigned char)3U), ((unsigned char)3U), ((unsigned char)3U), ((unsigned char)3U), ((unsigned char)4U), ((unsigned char)4U), ((unsigned char)4U), ((unsigned char)4U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U), ((unsigned char)0U)};
char (A1679)[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
Keyword200 (A1680)[]={S1726, 2, S1725, 3, S1724, 0, S1723, 4, S1722, 1, S1721, 65, S1720, 6, S1719, 7, S1718, 8, S1717, 9, S1716, 10, S1715, 11, S1714, 12, S1713, 13, S1712, 14, S1711, 15, S1710, 16, S1709, 17, S1708, 30, S1707, 31, S1706, 32, S1705, 33, S1704, 34, S1703, 35, S1702, 66, S1701, 67, S1700, 68, S1699, 69, S1698, 70, S1697, 71, S1696, 72, S1695, 73, S1694, 74, S1693, 75, S1692, 76, S1691, 77, ((unsigned char *)0), 0};
Keyword200 (A1681)[]={S1758, 36, S1757, 37, S1756, 38, S1755, 39, S1937, 40, S1754, 41, S1753, 42, S1752, 43, S1751, 44, S1750, 45, S1749, 46, S1748, 47, S1747, 48, S1746, 49, S1745, 50, S1931, 51, S1744, 52, S1743, 53, S1742, 54, S1741, 55, S1740, 56, S1951, 57, S1739, 58, S1738, 59, S1737, 60, S1736, 61, S1735, 62, S1734, 63, S1733, 64, ((unsigned char *)0), 0};
int (A1682)[]={0, 0, 0, 0, 0, 2, 0, 0, 1, 3, 0, 0, 0};
unsigned char *(A1683)[]={S1953, S1952, S1951, S1950, S1949, S1948, S1947, S1946, S1945, S1944, S1943, S1942, S1941, S1940, S1939, S1938, S1937, S1936, S1935, S1934, S1933, S1932, S1931, S2081, S2080, ((unsigned char *)0)};
unsigned char *(A1684)[]={S2123, S2117, S2116, S2115, S2114, S2113, S2112, S2111, S2110, S2109, S2108, S2107, S2106, S2105, S2104, S2103, S2102, S2101, S2100, S2099, S2098, S2097, S2096, S2095, S2094, S2093, S2092, S2091, S2090, S2089, S2088, S2087, S2086, S2085, S2084, S2083, S2082, S2081, S2080, S2079, S2078, S2077, S2076, S2075, S2074, S2073, S2072, S2071, S2070, S2069, S2068, S2067, S2066, S2065, S2064, S2063, S2062, S2061, S2060, S2059, S2058, S2057, S2056, S2055, S2054, S2053, S2052, S2051, S2050, S2049, S2048, S2047, S2046, S2045, S2044, S2043, S2042, S2041, S2040, ((unsigned char *)0)};

/* Define global variables */
Identifiers157 identifiers1661;
size_t leftBlock1662 = ((size_t)0x0000000000000000U);
size_t leftBytes1663 = ((size_t)0x0000000000000000U);
ErrorCode161 ErrorCodeSystem1664;
ErrorCode161 ErrorCodeFileTooBig1665;
Slot184 (stringBufferPool1666)[4];
Slot184 *stringBufferTop1667;
Slot184 *stringBufferBottom1668;
Slot184 *stringBufferCurrent1669;

/* Define functions */
int CDECL main(int zargc, unsigned char **zargv)
{
	int t1;
	t1 = _run246(zargc, zargv);
	return t1;
}

static int _run246(int zargc, unsigned char **zargv)
{
	MemoryPool160 pool1;
	unsigned char *filename2;
	unsigned char *outFilename3;
	char verbose4;
	char debug5;
	char dump6;
	char version7;
	ImportPath10 *importPath8;
	SimpleDictionary186 defines9;
	int i10;
	char ok11;
	_initialize268();
	MemoryPool_initialize293((&pool1));
	filename2 = ((unsigned char *)0);
	outFilename3 = S2131;
	verbose4 = 0;
	debug5 = 0;
	dump6 = 0;
	version7 = 0;
	importPath8 = ((ImportPath10 *)0);
	Dictionary_initialize336(((Dictionary187 *)(&defines9)));
	i10 = 1;
	while((char)(i10 < zargc))
	{
		unsigned char *arg12;
		arg12 = zargv[i10];
		if(_isEqual317(arg12, S2130))
		{
			verbose4 = 1;
		}
		else
		{
			if(_isEqual317(arg12, S2129))
			{
				version7 = 1;
			}
			else
			{
				if(_isEqual317(arg12, S2128))
				{
					debug5 = 1;
				}
				else
				{
					if(_isEqual317(arg12, S2127))
					{
						dump6 = 1;
					}
					else
					{
						if((_isEqual317(arg12, S2126) && (char)(i10 < (zargc - 1))))
						{
							(++i10);
							outFilename3 = MemoryPool_getFilename247((&pool1), zargv[i10]);
						}
						else
						{
							if((_isEqual317(arg12, S2125) && (char)(i10 < (zargc - 1))))
							{
								StringBuffer2 tmp13;
								unsigned char *filename14;
								(++i10);
								StringBuffer_initialize270((&tmp13));
								StringBuffer__shl367((&tmp13), zargv[i10]);
								filename14 = MemoryPool_newString251((&pool1), StringBuffer_string289((&tmp13)));
								importPath8 = MemoryPool_new369((&pool1), filename14, importPath8);
								StringBuffer_release272((&tmp13));
							}
							else
							{
								if((_isEqual317(arg12, S2124) && (char)(i10 < (zargc - 1))))
								{
									unsigned char *arg15;
									unsigned char *equal16;
									(++i10);
									arg15 = zargv[i10];
									equal16 = _findChar320(arg15, 61U);
									if((char)(equal16 == ((unsigned char *)0)))
									{
										unsigned char *name17;
										name17 = MemoryPool_newString8FromString252((&pool1), arg15);
										Dictionary_add338(((Dictionary187 *)(&defines9)), name17, S2123);
									}
									else
									{
										unsigned char *name18;
										unsigned char *value19;
										name18 = MemoryPool_newString8FromSubString253((&pool1), ((unsigned char *)arg15), __dist316(equal16, arg15));
										value19 = MemoryPool_newString8FromString252((&pool1), (equal16 + ((size_t)0x0000000000000001U)));
										Dictionary_add338(((Dictionary187 *)(&defines9)), name18, value19);
									}
								}
								else
								{
									filename2 = MemoryPool_getFilename247((&pool1), arg12);
								}
							}
						}
					}
				}
			}
		}
		(++i10);
	}
	ok11 = 1;
	if(version7)
	{
		_output379(S2122);
	}
	else
	{
		if((char)(filename2 == ((unsigned char *)0)))
		{
			_output379(S2121);
			ok11 = 0;
		}
		else
		{
			Program5 program20;
			Builder171 builder21;
			SimpleDictionary_addStandardDefinesTo248((&defines9));
			Program_initialize382((&program20), (&pool1));
			Builder_initialize619((&builder21), importPath8, (&defines9), (&program20));
			ok11 = Builder_compile621((&builder21), filename2);
			if(ok11)
			{
				CodeGenerator1 generator22;
				Error162 *err23;
				CodeGenerator_initialize935((&generator22), (&program20), debug5, dump6);
				err23 = CodeGenerator_generate937((&generator22), outFilename3);
				if((char)(err23 != ((Error162 *)0)))
				{
					_output1088(S1882, err23);
					Error_delete1077(err23);
					ok11 = 0;
				}
				CodeGenerator_release936((&generator22));
			}
			Builder_release620((&builder21));
			Program_release383((&program20));
		}
	}
	if(verbose4)
	{
		StringBuffer2 stats24;
		StringBuffer_initialize270((&stats24));
		StringBuffer__shl367((&stats24), S1881);
		StringBuffer__shl863(StringBuffer__shl1099(StringBuffer__shl367((&stats24), S1880), MemoryPool_size296((&pool1))), 10U);
		_output379(StringBuffer_string289((&stats24)));
		StringBuffer_release272((&stats24));
	}
	Dictionary_release337(((Dictionary187 *)(&defines9)));
	MemoryPool_release295((&pool1));
	_release269();
	if(verbose4)
	{
		size_t blocks25;
		size_t bytes26;
		blocks25 = leftBlock1662;
		bytes26 = leftBytes1663;
		_initialize268();
		_output1101(S1879, blocks25);
		_output1101(S1878, bytes26);
		_release269();
	}
	if(ok11)
	{
		int t27;
		t27 = 0;
		return t27;
	}
	else
	{
		int t28;
		t28 = 1;
		return t28;
	}
}

static unsigned char *MemoryPool_getFilename247(MemoryPool160 *zpool, unsigned char *zarg)
{
	StringBuffer2 buf1;
	unsigned char *filename2;
	unsigned char *t3;
	StringBuffer_initialize270((&buf1));
	_addNativeNameTo355((&buf1), zarg);
	filename2 = MemoryPool_newString251(zpool, StringBuffer_string289((&buf1)));
	StringBuffer_release272((&buf1));
	t3 = filename2;
	return t3;
}

static void SimpleDictionary_addStandardDefinesTo248(SimpleDictionary186 *zdefines)
{
	if(1)
	{
		Dictionary_add338(((Dictionary187 *)zdefines), S2120, S2123);
	}
	else
	{
		Dictionary_add338(((Dictionary187 *)zdefines), S2119, S2123);
	}
}

static size_t ArrayType_hashArrayType249(ArrayType102 *zt)
{
	size_t t1;
	t1 = (Type_hash521(zt->cellType) + _hash267(zt->arraySize));
	return t1;
}

static char ArrayType_equalsArrayType250(ArrayType102 *zt1, ArrayType102 *zt2)
{
	char t1;
	t1 = ((char)(zt1->cellType == zt2->cellType) && (char)(zt1->arraySize == zt2->arraySize));
	return t1;
}

static unsigned char *MemoryPool_newString251(MemoryPool160 *zpool, unsigned char *zs)
{
	size_t n1;
	unsigned char *buf2;
	unsigned char *t3;
	n1 = _toByteSize352((_size315(zs) + 1));
	buf2 = MemoryPool_allocateBytes297(zpool, n1);
	_copyBytes259(((void *)buf2), ((void *)zs), n1);
	t3 = ((unsigned char *)buf2);
	return t3;
}

static unsigned char *MemoryPool_newString8FromString252(MemoryPool160 *zpool, unsigned char *zs)
{
	size_t n1;
	unsigned char *buf2;
	unsigned char *p3;
	unsigned char *t18;
	n1 = ((size_t)0x0000000000000000U);
	{
		unsigned char *p4;
		p4 = zs;
		for(;;)
		{
			unsigned int c7;
			int n8;
			unsigned int t9;
			int t10;
			t9 = _nextChar303(((unsigned char *)p4), (&t10));
			c7 = t9;
			n8 = t10;
			(p4 += n8);
			if(_isNul374(c7))
			{
				goto L5;
			}
			{
				(++n1);
			}
		}
		L5: ;
	}
	buf2 = ((unsigned char *)MemoryPool_allocateBytes297(zpool, (n1 + ((size_t)0x0000000000000001U))));
	p3 = buf2;
	{
		unsigned char *p11;
		p11 = zs;
		for(;;)
		{
			unsigned int c14;
			int n15;
			unsigned int t16;
			int t17;
			t16 = _nextChar303(((unsigned char *)p11), (&t17));
			c14 = t16;
			n15 = t17;
			(p11 += n15);
			if(_isNul374(c14))
			{
				goto L12;
			}
			{
				p3[((size_t)0x0000000000000000U)] = ((char)(((unsigned int )c14) < ((unsigned int )256U))?((unsigned char )c14):((unsigned char)63U));
				(++p3);
			}
		}
		L12: ;
	}
	p3[((size_t)0x0000000000000000U)] = ((unsigned char)0U);
	t18 = buf2;
	return t18;
}

static unsigned char *MemoryPool_newString8FromSubString253(MemoryPool160 *zpool, unsigned char *zs, int zsize)
{
	size_t n1;
	unsigned char *buf2;
	unsigned char *p3;
	unsigned char *t16;
	n1 = ((size_t)0x0000000000000000U);
	{
		unsigned char *p4;
		unsigned char *limit5;
		p4 = zs;
		limit5 = (p4 + zsize);
		while((char)(p4 != limit5))
		{
			unsigned int c6;
			int n7;
			unsigned int t8;
			int t9;
			t8 = _nextChar303(p4, (&t9));
			c6 = t8;
			n7 = t9;
			(p4 += n7);
			{
				(++n1);
			}
		}
	}
	buf2 = ((unsigned char *)MemoryPool_allocateBytes297(zpool, (n1 + ((size_t)0x0000000000000001U))));
	p3 = buf2;
	{
		unsigned char *p10;
		unsigned char *limit11;
		p10 = zs;
		limit11 = (p10 + zsize);
		while((char)(p10 != limit11))
		{
			unsigned int c12;
			int n13;
			unsigned int t14;
			int t15;
			t14 = _nextChar303(p10, (&t15));
			c12 = t14;
			n13 = t15;
			(p10 += n13);
			{
				p3[((size_t)0x0000000000000000U)] = ((char)(((unsigned int )c12) < ((unsigned int )256U))?((unsigned char )c12):((unsigned char)63U));
				(++p3);
			}
		}
	}
	p3[((size_t)0x0000000000000000U)] = ((unsigned char)0U);
	t16 = buf2;
	return t16;
}

static unsigned char *MemoryPool_newStringFromString8254(MemoryPool160 *zpool, unsigned char *zs)
{
	StringBuffer2 sb1;
	unsigned char *string2;
	unsigned char *t3;
	StringBuffer_initialize270((&sb1));
	StringBuffer__shl862((&sb1), zs);
	string2 = MemoryPool_newString251(zpool, StringBuffer_string289((&sb1)));
	StringBuffer_release272((&sb1));
	t3 = string2;
	return t3;
}

static unsigned short *MemoryPool_newString16FromString8255(MemoryPool160 *zpool, unsigned char *zs)
{
	int size1;
	unsigned short *buf2;
	unsigned char *src3;
	unsigned short *dst4;
	unsigned short *limit5;
	unsigned short *t6;
	size1 = (_size325(zs) + 1);
	buf2 = MemoryPool_allocateArray1506(zpool, ((int )size1));
	src3 = zs;
	dst4 = buf2;
	limit5 = (buf2 + size1);
	while((char)(dst4 != limit5))
	{
		dst4[((size_t)0x0000000000000000U)] = ((unsigned short )src3[((size_t)0x0000000000000000U)]);
		(++src3);
		(++dst4);
	}
	t6 = ((unsigned short *)buf2);
	return t6;
}

static void MemoryBuffer_addUnsignedToBuffer256(MemoryBuffer159 *zbuffer, unsigned int zvalue)
{
	unsigned int i1;
	unsigned char (digits2)[12];
	unsigned char *limit3;
	unsigned char *p4;
	i1 = zvalue;
	limit3 = (digits2 + ((size_t)0x000000000000000CU));
	p4 = limit3;
	if((char)(i1 == 0U))
	{
		(--p4);
		p4[((size_t)0x0000000000000000U)] = ((unsigned char)48U);
	}
	else
	{
		while((char)(i1 != 0U))
		{
			(--p4);
			p4[((size_t)0x0000000000000000U)] = (((unsigned char )(i1 % 10U)) + ((unsigned char)48U));
			(i1 /= 10U);
		}
	}
	MemoryBuffer_addBlock633(zbuffer, ((void *)p4), (limit3 - p4));
}

static unsigned char *_allocateBytes257(size_t zsize)
{
	unsigned char *t1;
	t1 = ((unsigned char *)malloc(zsize));
	return t1;
}

static void _freeBytes258(void *zp, size_t zsize)
{
	if((char)(zp != ((void *)0)))
	{
		free(zp);
	}
}

static void _copyBytes259(void *zdst, void *zsrc, size_t zsize)
{
	unsigned char *p1;
	unsigned char *q2;
	unsigned char *limit3;
	p1 = ((unsigned char *)zsrc);
	q2 = ((unsigned char *)zdst);
	limit3 = (q2 + zsize);
	while((char)(q2 != limit3))
	{
		q2[((size_t)0x0000000000000000U)] = p1[((size_t)0x0000000000000000U)];
		(++q2);
		(++p1);
	}
}

static int _compareBytes260(void *zdst, void *zsrc, size_t zsize)
{
	unsigned char *p1;
	unsigned char *q2;
	unsigned char *limit3;
	int t5;
	p1 = ((unsigned char *)zsrc);
	q2 = ((unsigned char *)zdst);
	limit3 = (q2 + zsize);
	while((char)(((unsigned char *)q2) < ((unsigned char *)limit3)))
	{
		if((char)(q2[((size_t)0x0000000000000000U)] != p1[((size_t)0x0000000000000000U)]))
		{
			int t4;
			t4 = (((int )q2[((size_t)0x0000000000000000U)]) - ((int )p1[((size_t)0x0000000000000000U)]));
			return t4;
		}
		(++p1);
		(++q2);
	}
	t5 = 0;
	return t5;
}

static char _areBytesEquals261(void *zdst, void *zsrc, size_t zsize)
{
	char t1;
	t1 = (char)(_compareBytes260(zdst, zsrc, zsize) == 0);
	return t1;
}

static void _println262(unsigned char *zs)
{
	_print263(zs);
	putchar(_toInteger371(10U));
}

static void _print263(unsigned char *zs)
{
	{
		unsigned char *p1;
		p1 = zs;
		for(;;)
		{
			unsigned int c4;
			int n5;
			unsigned int t6;
			int t7;
			t6 = _nextChar303(((unsigned char *)p1), (&t7));
			c4 = t6;
			n5 = t7;
			(p1 += n5);
			if(_isNul374(c4))
			{
				goto L2;
			}
			{
				putchar(_toInteger371(c4));
			}
		}
		L2: ;
	}
}

static unsigned char *_toSubString264(unsigned int zchar, unsigned char *zout, int *r1x)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zout);
	(*r1x) = _writeChar308(((unsigned char *)zout), zchar);
	return t1;
}

static unsigned int _asUnsigned265(int zself)
{
	unsigned int t1;
	t1 = ((unsigned int )zself);
	return t1;
}

static unsigned long long _asUnsigned266(long long zself)
{
	unsigned long long t1;
	t1 = ((unsigned long long )zself);
	return t1;
}

static size_t _hash267(size_t zself)
{
	size_t t1;
	t1 = zself;
	return t1;
}

static void _initialize268()
{
	stringBufferTop1667 = ((Slot184 *)stringBufferPool1666);
	stringBufferBottom1668 = ((Slot184 *)(stringBufferPool1666 + ((size_t)0x0000000000000004U)));
	stringBufferCurrent1669 = stringBufferBottom1668;
}

static void _release269()
{
	Slot184 *p1;
	p1 = stringBufferCurrent1669;
	while((char)(p1 != stringBufferBottom1668))
	{
		Slot184 *slot2;
		slot2 = (&p1[((size_t)0x0000000000000000U)]);
		_delete301(slot2->buffer, slot2->size);
		(++p1);
	}
	stringBufferCurrent1669 = stringBufferBottom1668;
}

static void StringBuffer_initialize270(StringBuffer2 *zself)
{
	if((char)(stringBufferCurrent1669 != stringBufferBottom1668))
	{
		zself->buffer = (&stringBufferCurrent1669[((size_t)0x0000000000000000U)])->buffer;
		zself->used = 0;
		zself->bufferSize = (&stringBufferCurrent1669[((size_t)0x0000000000000000U)])->size;
		(++stringBufferCurrent1669);
	}
	else
	{
		zself->buffer = _allocate300(1024);
		zself->used = 0;
		zself->bufferSize = 1024;
	}
}

static void StringBuffer_initializeWithSize271(StringBuffer2 *zself, int zinitialSize)
{
	int n1;
	n1 = (zinitialSize + 1);
	zself->buffer = _allocate300(n1);
	zself->used = 0;
	zself->bufferSize = n1;
}

static void StringBuffer_release272(StringBuffer2 *zself)
{
	if((char)(stringBufferCurrent1669 != stringBufferTop1667))
	{
		(--stringBufferCurrent1669);
		(&stringBufferCurrent1669[((size_t)0x0000000000000000U)])->buffer = zself->buffer;
		(&stringBufferCurrent1669[((size_t)0x0000000000000000U)])->size = zself->bufferSize;
	}
	else
	{
		_delete301(zself->buffer, zself->bufferSize);
	}
}

static unsigned char *StringBuffer_base273(StringBuffer2 *zself)
{
	unsigned char *t1;
	t1 = zself->buffer;
	return t1;
}

static int StringBuffer_size274(StringBuffer2 *zself)
{
	int t1;
	t1 = zself->used;
	return t1;
}

static unsigned char *StringBuffer_addSegment275(StringBuffer2 *zself, unsigned char *zs)
{
	unsigned char *p1;
	p1 = zs;
	for(;;)
	{
		unsigned char c2;
		c2 = p1[((size_t)0x0000000000000000U)];
		if(_isNul350(c2))
		{
			unsigned char *t3;
			t3 = p1;
			return t3;
		}
		(++p1);
		if((char)(c2 == ((unsigned char)7U)))
		{
			unsigned char *t4;
			t4 = p1;
			return t4;
		}
		StringBuffer_reserve292(zself, 1)[((size_t)0x0000000000000000U)] = c2;
		(++zself->used);
	}
}

static void StringBuffer_addChar7276(StringBuffer2 *zself, unsigned char zc)
{
	unsigned char u1;
	u1 = ((char)(((unsigned char )zc) < ((unsigned char )((unsigned char)128U)))?((unsigned char )zc):((unsigned char)63U));
	StringBuffer_reserve292(zself, 1)[((size_t)0x0000000000000000U)] = u1;
	(++zself->used);
}

static void StringBuffer_addChar277(StringBuffer2 *zself, unsigned int zc)
{
	unsigned char *p1;
	int n2;
	p1 = StringBuffer_reserve292(zself, 4);
	n2 = _writeChar308(p1, zc);
	(zself->used += n2);
}

static void StringBuffer_addCodeUnit278(StringBuffer2 *zself, unsigned char zu)
{
	StringBuffer_reserve292(zself, 1)[((size_t)0x0000000000000000U)] = zu;
	(++zself->used);
}

static void StringBuffer_addString279(StringBuffer2 *zself, unsigned char *zstr)
{
	StringBuffer_addSubString280(zself, ((unsigned char *)zstr), _size315(zstr));
}

static void StringBuffer_addSubString280(StringBuffer2 *zself, unsigned char *zstr, int zsize)
{
	_copy309(StringBuffer_reserve292(zself, zsize), zstr, zsize);
	(zself->used += zsize);
}

static void StringBuffer_addUnsigned281(StringBuffer2 *zself, unsigned int zn)
{
	unsigned int i1;
	unsigned char (buf2)[12];
	unsigned char *limit3;
	unsigned char *p4;
	i1 = zn;
	limit3 = (((unsigned char *)buf2) + ((size_t)0x000000000000000CU));
	p4 = limit3;
	if((char)(i1 == 0U))
	{
		(--p4);
		p4[((size_t)0x0000000000000000U)] = ((unsigned char)48U);
	}
	else
	{
		while((char)(i1 != 0U))
		{
			(--p4);
			p4[((size_t)0x0000000000000000U)] = (((unsigned char )(i1 % 10U)) + ((unsigned char)48U));
			(i1 /= 10U);
		}
	}
	StringBuffer_addSubString280(zself, p4, __dist304(limit3, p4));
}

static void StringBuffer_addInteger282(StringBuffer2 *zself, int zn)
{
	int i1;
	i1 = zn;
	if((char)(i1 < 0))
	{
		StringBuffer_addChar7276(zself, ((unsigned char)45U));
		i1 = (-i1);
	}
	StringBuffer_addUnsigned281(zself, _asUnsigned265(i1));
}

static void StringBuffer_addUnsigned64283(StringBuffer2 *zself, unsigned long long zn)
{
	unsigned long long i1;
	unsigned char (buf2)[22];
	unsigned char *limit3;
	unsigned char *p4;
	i1 = zn;
	limit3 = (((unsigned char *)buf2) + ((size_t)0x0000000000000016U));
	p4 = limit3;
	if((char)(i1 == 0UL))
	{
		(--p4);
		p4[((size_t)0x0000000000000000U)] = ((unsigned char)48U);
	}
	else
	{
		while((char)(i1 != 0UL))
		{
			(--p4);
			p4[((size_t)0x0000000000000000U)] = (((unsigned char )(i1 % 10UL)) + ((unsigned char)48U));
			(i1 /= 10UL);
		}
	}
	StringBuffer_addSubString280(zself, p4, __dist304(limit3, p4));
}

static void StringBuffer_addInteger64284(StringBuffer2 *zself, long long zn)
{
	long long i1;
	i1 = zn;
	if((char)(i1 < 0LL))
	{
		StringBuffer_addChar7276(zself, ((unsigned char)45U));
		i1 = (-i1);
	}
	StringBuffer_addUnsigned64283(zself, _asUnsigned266(i1));
}

static void StringBuffer_addHexaByte285(StringBuffer2 *zself, unsigned char zbyte)
{
	unsigned char n1;
	unsigned char hi2;
	unsigned char lo3;
	n1 = zbyte;
	hi2 = ((n1 >> ((unsigned char)4U)) & ((unsigned char)15U));
	(hi2 += ((char)(((unsigned char )hi2) < ((unsigned char )((unsigned char)10U)))?((unsigned char)48U):((unsigned char)55U)));
	StringBuffer_addChar7276(zself, hi2);
	lo3 = (n1 & ((unsigned char)15U));
	(lo3 += ((char)(((unsigned char )lo3) < ((unsigned char )((unsigned char)10U)))?((unsigned char)48U):((unsigned char)55U)));
	StringBuffer_addChar7276(zself, lo3);
}

static void StringBuffer_removeAll286(StringBuffer2 *zself)
{
	zself->used = 0;
}

static void StringBuffer_removeLastChar287(StringBuffer2 *zself)
{
	unsigned char *p1;
	int i2;
	p1 = StringBuffer_base273(zself);
	i2 = zself->used;
	for(;;)
	{
		(--i2);
		if((!_isContinuation349(p1[i2])))
		{
			goto L3;
		}
	}
	L3: ;
	zself->used = i2;
}

static unsigned char *StringBuffer_toString288(StringBuffer2 *zself)
{
	unsigned char *t1;
	t1 = _getCopy318(StringBuffer_string289(zself));
	return t1;
}

static unsigned char *StringBuffer_string289(StringBuffer2 *zself)
{
	unsigned char *p1;
	unsigned char *t2;
	p1 = zself->buffer;
	p1[zself->used] = ((unsigned char)0U);
	t2 = _asString302(p1);
	return t2;
}

static char StringBuffer_isEmpty290(StringBuffer2 *zself)
{
	char t1;
	t1 = (char)(StringBuffer_size274(zself) == 0);
	return t1;
}

static char StringBuffer_endsWithChar291(StringBuffer2 *zself, unsigned int zc)
{
	char t1;
	t1 = _endsWithChar306(zself->buffer, zself->used, zc);
	return t1;
}

static unsigned char *StringBuffer_reserve292(StringBuffer2 *zself, int zl)
{
	unsigned char *t3;
	if((char)(((zself->used + zl) + 1) > zself->bufferSize))
	{
		int newSize1;
		unsigned char *q2;
		newSize1 = ((((zself->used + zl) + 1) * 5) / 4);
		q2 = _allocate300(newSize1);
		_copy309(q2, zself->buffer, zself->used);
		_delete301(zself->buffer, zself->bufferSize);
		zself->bufferSize = newSize1;
		zself->buffer = q2;
	}
	t3 = (zself->buffer + zself->used);
	return t3;
}

static void MemoryPool_initialize293(MemoryPool160 *zself)
{
	MemoryPool_initializeWithSize294(zself, ((size_t)0x0000000000040000U));
}

static void MemoryPool_initializeWithSize294(MemoryPool160 *zself, size_t zsize)
{
	zself->total = ((size_t)0x0000000000000000U);
	zself->chunkBase = ((unsigned char *)0);
	zself->chunkSize = zsize;
	MemoryPool_newChunk299(zself, zsize);
}

static void MemoryPool_release295(MemoryPool160 *zself)
{
	unsigned char *base1;
	base1 = zself->chunkBase;
	while((char)(base1 != ((unsigned char *)0)))
	{
		MemoryPoolHead185 *head2;
		unsigned char *next3;
		head2 = ((MemoryPoolHead185 *)(base1 - ((size_t)0x0000000000000008U)));
		next3 = head2->next;
		_freeBytes258(((void *)head2), (head2->size + ((size_t)0x0000000000000008U)));
		base1 = next3;
	}
}

static size_t MemoryPool_size296(MemoryPool160 *zself)
{
	size_t t1;
	t1 = zself->total;
	return t1;
}

static unsigned char *MemoryPool_allocateBytes297(MemoryPool160 *zself, size_t zs)
{
	size_t align1;
	size_t size2;
	unsigned char *t4;
	(zself->total += zs);
	align1 = ((size_t)0x0000000000000003U);
	size2 = ((zs + align1) & (~align1));
	(zself->chunkFree -= size2);
	if((char)(((unsigned char *)zself->chunkFree) >= ((unsigned char *)zself->chunkBase)))
	{
		unsigned char *t3;
		t3 = zself->chunkFree;
		return t3;
	}
	MemoryPool_newChunk299(zself, _max366(size2, zself->chunkSize));
	(zself->chunkFree -= size2);
	t4 = zself->chunkFree;
	return t4;
}

static void MemoryPool_reset298(MemoryPool160 *zself)
{
	MemoryPoolHead185 *h1;
	unsigned char *base2;
	h1 = ((MemoryPoolHead185 *)(zself->chunkBase - ((size_t)0x0000000000000008U)));
	base2 = h1->next;
	while((char)(base2 != ((unsigned char *)0)))
	{
		MemoryPoolHead185 *head3;
		unsigned char *next4;
		head3 = ((MemoryPoolHead185 *)(base2 - ((size_t)0x0000000000000008U)));
		next4 = head3->next;
		_freeBytes258(((void *)head3), (head3->size + ((size_t)0x0000000000000008U)));
		base2 = next4;
	}
	zself->chunkFree = (zself->chunkBase + h1->size);
	h1->next = ((unsigned char *)0);
}

static void MemoryPool_newChunk299(MemoryPool160 *zself, size_t zsize)
{
	unsigned char *oldBase1;
	unsigned char *head2;
	MemoryPoolHead185 *h3;
	oldBase1 = zself->chunkBase;
	head2 = _allocateBytes257((zsize + ((size_t)0x0000000000000008U)));
	zself->chunkBase = (head2 + ((size_t)0x0000000000000008U));
	zself->chunkFree = (zself->chunkBase + zsize);
	h3 = ((MemoryPoolHead185 *)head2);
	h3->next = oldBase1;
	h3->size = zsize;
}

static unsigned char *_allocate300(int zsize)
{
	unsigned char *t1;
	t1 = ((unsigned char *)_allocateBytes257(_toByteSize352(zsize)));
	return t1;
}

static void _delete301(unsigned char *zself, int zsize)
{
	_freeBytes258(((void *)zself), _toByteSize352(zsize));
}

static unsigned char *_asString302(unsigned char *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself);
	return t1;
}

static unsigned int _nextChar303(unsigned char *zself, int *r1x)
{
	unsigned char *p1;
	unsigned char b2;
	unsigned int cp3;
	p1 = zself;
	b2 = p1[((size_t)0x0000000000000000U)];
	cp3 = ((unsigned int )b2);
	switch( A1678[b2] )
	{
	case ((unsigned char)0U):
	{
		unsigned int t4;
		t4 = cp3;
		(*r1x) = 1;
		return t4;
	}
	break;
	case ((unsigned char)1U):
	{
		unsigned int t5;
		(cp3 &= 31U);
		(cp3 <<= ((unsigned char)6U));
		(cp3 |= ((unsigned int )(p1[((size_t)0x0000000000000001U)] & ((unsigned char)63U))));
		t5 = cp3;
		(*r1x) = 2;
		return t5;
	}
	break;
	case ((unsigned char)2U):
	{
		unsigned int t6;
		(cp3 &= 15U);
		(cp3 <<= ((unsigned char)6U));
		(cp3 |= ((unsigned int )(p1[((size_t)0x0000000000000001U)] & ((unsigned char)63U))));
		(cp3 <<= ((unsigned char)6U));
		(cp3 |= ((unsigned int )(p1[((size_t)0x0000000000000002U)] & ((unsigned char)63U))));
		t6 = cp3;
		(*r1x) = 3;
		return t6;
	}
	break;
	default:
	{
		unsigned int t7;
		(cp3 &= 7U);
		(cp3 <<= ((unsigned char)6U));
		(cp3 |= ((unsigned int )(p1[((size_t)0x0000000000000001U)] & ((unsigned char)63U))));
		(cp3 <<= ((unsigned char)6U));
		(cp3 |= ((unsigned int )(p1[((size_t)0x0000000000000002U)] & ((unsigned char)63U))));
		(cp3 <<= ((unsigned char)6U));
		(cp3 |= ((unsigned int )(p1[((size_t)0x0000000000000003U)] & ((unsigned char)63U))));
		t7 = cp3;
		(*r1x) = 4;
		return t7;
	}
	}
}

static int __dist304(unsigned char *zself, unsigned char *zother)
{
	int t1;
	t1 = ((int )(((unsigned char *)zself) - ((unsigned char *)zother)));
	return t1;
}

static unsigned char *_findLastCodeUnit305(unsigned char *zself, int zsize, unsigned char zc)
{
	unsigned char *p1;
	unsigned char *t3;
	p1 = ((zself + zsize) - ((size_t)0x0000000000000001U));
	while((char)(((unsigned char *)p1) >= ((unsigned char *)zself)))
	{
		if((char)(p1[((size_t)0x0000000000000000U)] == zc))
		{
			unsigned char *t2;
			t2 = p1;
			return t2;
		}
		(--p1);
	}
	t3 = ((unsigned char *)0);
	return t3;
}

static char _endsWithChar306(unsigned char *zself, int zsize, unsigned int zc)
{
	if((char)(zsize == 0))
	{
		char t1;
		t1 = 0;
		return t1;
	}
	else
	{
		if((char)(((unsigned int )zc) < ((unsigned int )128U)))
		{
			char t2;
			t2 = (char)(zself[(zsize - 1)] == ((unsigned char )zc));
			return t2;
		}
		else
		{
			unsigned char (buf3)[4];
			char t4;
			unsigned char *t5;
			int t6;
			t5 = _toSubString264(zc, ((unsigned char *)buf3), (&t6));
			t4 = _endsWithSubString307(zself, zsize, t5, t6);
			return t4;
		}
	}
}

static char _endsWithSubString307(unsigned char *zself, int zsize, unsigned char *zsubstr, int zsubstrSize)
{
	unsigned char *start1;
	char t3;
	if((char)(zsize < zsubstrSize))
	{
		char t2;
		t2 = 0;
		return t2;
	}
	start1 = ((zself + zsize) - zsubstrSize);
	t3 = _areBytesEquals261(((void *)start1), ((void *)zsubstr), _toByteSize352(zsubstrSize));
	return t3;
}

static int _writeChar308(unsigned char *zself, unsigned int zchar)
{
	if((char)(((unsigned int )zchar) < ((unsigned int )128U)))
	{
		int t1;
		zself[((size_t)0x0000000000000000U)] = _toCodeUnit372(zchar);
		t1 = 1;
		return t1;
	}
	else
	{
		if((char)(((unsigned int )zchar) < ((unsigned int )2048U)))
		{
			int t2;
			zself[((size_t)0x0000000000000000U)] = (((unsigned char)192U) + _toCodeUnit372((zchar >> ((unsigned char)6U))));
			zself[((size_t)0x0000000000000001U)] = (((unsigned char)128U) + _toCodeUnit372((zchar & 63U)));
			t2 = 2;
			return t2;
		}
		else
		{
			if((char)(((unsigned int )zchar) < ((unsigned int )65536U)))
			{
				int t3;
				zself[((size_t)0x0000000000000000U)] = (((unsigned char)224U) + _toCodeUnit372((zchar >> ((unsigned char)12U))));
				zself[((size_t)0x0000000000000001U)] = (((unsigned char)128U) + _toCodeUnit372(((zchar >> ((unsigned char)6U)) & 63U)));
				zself[((size_t)0x0000000000000002U)] = (((unsigned char)128U) + _toCodeUnit372((zchar & 63U)));
				t3 = 3;
				return t3;
			}
			else
			{
				int t4;
				zself[((size_t)0x0000000000000000U)] = (((unsigned char)240U) + _toCodeUnit372((zchar >> ((unsigned char)18U))));
				zself[((size_t)0x0000000000000001U)] = (((unsigned char)128U) + _toCodeUnit372(((zchar >> ((unsigned char)12U)) & 63U)));
				zself[((size_t)0x0000000000000002U)] = (((unsigned char)128U) + _toCodeUnit372(((zchar >> ((unsigned char)6U)) & 63U)));
				zself[((size_t)0x0000000000000003U)] = (((unsigned char)128U) + _toCodeUnit372((zchar & 63U)));
				t4 = 4;
				return t4;
			}
		}
	}
}

static void _copy309(unsigned char *zself, unsigned char *zsrc, int zsize)
{
	_copyBytes259(((void *)zself), ((void *)zsrc), _toByteSize352(zsize));
}

static unsigned char *_allocate310(int zsize)
{
	unsigned char *t1;
	t1 = ((unsigned char *)_allocateBytes257(_toByteSize352(zsize)));
	return t1;
}

static unsigned char *_fromSubString311(unsigned char *zsub, int zsize)
{
	unsigned char *buf1;
	unsigned char *t2;
	buf1 = _allocate310((zsize + 1));
	_copy309(_asSubString314(buf1), zsub, zsize);
	buf1[zsize] = ((unsigned char)0U);
	t2 = buf1;
	return t2;
}

static void _delete312(unsigned char *zself)
{
	if((char)(zself == S2118))
	{
		return;
	}
	_deleteWithSize313(zself, (_size315(zself) + 1));
}

static void _deleteWithSize313(unsigned char *zself, int zsize)
{
	_freeBytes258(((void *)zself), _toByteSize352(zsize));
}

static unsigned char *_asSubString314(unsigned char *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself);
	return t1;
}

static int _size315(unsigned char *zself)
{
	unsigned char *p1;
	int t2;
	p1 = zself;
	while(_notNul351(p1[((size_t)0x0000000000000000U)]))
	{
		(++p1);
	}
	t2 = __dist316(p1, zself);
	return t2;
}

static int __dist316(unsigned char *zself, unsigned char *zother)
{
	int t1;
	t1 = __dist304(((unsigned char *)zself), ((unsigned char *)zother));
	return t1;
}

static char _isEqual317(unsigned char *zself, unsigned char *zother)
{
	unsigned char *p11;
	unsigned char *p22;
	p11 = zself;
	p22 = zother;
	for(;;)
	{
		unsigned char c3;
		unsigned char d4;
		c3 = p11[((size_t)0x0000000000000000U)];
		d4 = p22[((size_t)0x0000000000000000U)];
		if((char)(c3 != d4))
		{
			char t5;
			t5 = 0;
			return t5;
		}
		else
		{
			if(_isNul350(c3))
			{
				char t6;
				t6 = 1;
				return t6;
			}
		}
		(++p11);
		(++p22);
	}
}

static unsigned char *_getCopy318(unsigned char *zself)
{
	int n1;
	unsigned char *buf2;
	unsigned char *t4;
	if((char)(zself == S2118))
	{
		unsigned char *t3;
		t3 = zself;
		return t3;
	}
	n1 = (_size315(zself) + 1);
	buf2 = _allocate310(n1);
	_copyBytes259(((void *)buf2), ((void *)zself), _toByteSize352(n1));
	t4 = buf2;
	return t4;
}

static unsigned char *_getCopyTo319(unsigned char *zself, unsigned char *zlimit)
{
	unsigned char *t1;
	t1 = _fromSubString311(((unsigned char *)zself), __dist316(zlimit, zself));
	return t1;
}

static unsigned char *_findChar320(unsigned char *zself, unsigned int zc)
{
	if((char)(((unsigned int )zc) < ((unsigned int )128U)))
	{
		unsigned char *p1;
		unsigned char b2;
		p1 = zself;
		b2 = _toCodeUnit372(zc);
		for(;;)
		{
			unsigned char d3;
			d3 = p1[((size_t)0x0000000000000000U)];
			if(_isNul350(d3))
			{
				unsigned char *t4;
				t4 = ((unsigned char *)0);
				return t4;
			}
			else
			{
				if((char)(d3 == b2))
				{
					unsigned char *t5;
					t5 = p1;
					return t5;
				}
			}
			(++p1);
		}
	}
	else
	{
		unsigned char (buf6)[4];
		unsigned char *t7;
		unsigned char *t8;
		int t9;
		t8 = _toSubString264(zc, ((unsigned char *)buf6), (&t9));
		t7 = _findSubString321(zself, t8, t9);
		return t7;
	}
}

static unsigned char *_findSubString321(unsigned char *zself, unsigned char *zsubstr, int zsubstrSize)
{
	unsigned char *p1;
	unsigned char *q2;
	unsigned char c3;
	unsigned char d4;
	size_t size5;
	unsigned char *t7;
	p1 = zself;
	q2 = zsubstr;
	c3 = p1[((size_t)0x0000000000000000U)];
	d4 = q2[((size_t)0x0000000000000000U)];
	(++p1);
	(++q2);
	size5 = _toByteSize352((zsubstrSize - 1));
	while(_notNul351(c3))
	{
		if(((char)(c3 == d4) && _areBytesEquals261(((void *)p1), ((void *)q2), size5)))
		{
			unsigned char *t6;
			t6 = (p1 - ((size_t)0x0000000000000001U));
			return t6;
		}
		c3 = p1[((size_t)0x0000000000000000U)];
		(++p1);
	}
	t7 = ((unsigned char *)0);
	return t7;
}

static unsigned char *_findLastCodeUnit322(unsigned char *zself, unsigned char zc)
{
	unsigned char *t1;
	t1 = ((unsigned char *)_findLastCodeUnit305(_asSubString314(zself), _size315(zself), zc));
	return t1;
}

static void ImportPath_initialize323(ImportPath10 *zself, unsigned char *zpath, ImportPath10 *znext)
{
	zself->path = zpath;
	zself->next = znext;
}

static size_t _hash324(unsigned char *zself)
{
	unsigned char *p1;
	size_t sum2;
	size_t t6;
	p1 = zself;
	sum2 = ((size_t)0x00000000A5A5A5A5U);
	for(;;)
	{
		unsigned char c5;
		c5 = p1[((size_t)0x0000000000000000U)];
		(++p1);
		if(_isNul332(c5))
		{
			goto L3;
		}
		sum2 = ((sum2 >> ((unsigned char)1U)) + (_hash330(c5) << ((unsigned char)24U)));
	}
	L3: ;
	t6 = sum2;
	return t6;
}

static int _size325(unsigned char *zself)
{
	unsigned char *p1;
	int t2;
	p1 = zself;
	while(_notNul333(p1[((size_t)0x0000000000000000U)]))
	{
		(++p1);
	}
	t2 = __dist326(p1, zself);
	return t2;
}

static int __dist326(unsigned char *zself, unsigned char *zother)
{
	int t1;
	t1 = ((int )(((unsigned char *)zself) - ((unsigned char *)zother)));
	return t1;
}

static char _isEqual327(unsigned char *zself, unsigned char *zother)
{
	unsigned char *p11;
	unsigned char *p22;
	p11 = zself;
	p22 = zother;
	for(;;)
	{
		unsigned char c3;
		unsigned char d4;
		c3 = p11[((size_t)0x0000000000000000U)];
		d4 = p22[((size_t)0x0000000000000000U)];
		if((char)(c3 != d4))
		{
			char t5;
			t5 = 0;
			return t5;
		}
		else
		{
			if(_isNul332(c3))
			{
				char t6;
				t6 = 1;
				return t6;
			}
		}
		(++p11);
		(++p22);
	}
}

static unsigned long long _decimalToUnsigned64328(unsigned char *zself, unsigned char **r1x)
{
	unsigned char *p1;
	unsigned int value2;
	unsigned int base3;
	unsigned long long t8;
	p1 = zself;
	value2 = 0U;
	base3 = 10U;
	if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)48U)))
	{
		if(((char)(p1[((size_t)0x0000000000000001U)] == ((unsigned char)120U)) || (char)(p1[((size_t)0x0000000000000001U)] == ((unsigned char)88U))))
		{
			(p1 += ((size_t)0x0000000000000002U));
			base3 = 16U;
		}
	}
	for(;;)
	{
		unsigned char c6;
		unsigned int n7;
		c6 = p1[((size_t)0x0000000000000000U)];
		if(_isNul332(c6))
		{
			goto L4;
		}
		else
		{
			if((char)(((unsigned char )c6) >= ((unsigned char )((unsigned char)97U))))
			{
				(c6 -= ((unsigned char)87U));
			}
			else
			{
				if((char)(((unsigned char )c6) >= ((unsigned char )((unsigned char)65U))))
				{
					(c6 -= ((unsigned char)55U));
				}
				else
				{
					if((char)(((unsigned char )c6) <= ((unsigned char )((unsigned char)57U))))
					{
						(c6 -= ((unsigned char)48U));
					}
					else
					{
						c6 = ((unsigned char)255U);
					}
				}
			}
		}
		n7 = _toUinteger331(c6);
		if((char)(((unsigned int )n7) > ((unsigned int )base3)))
		{
			goto L4;
		}
		(value2 *= base3);
		(value2 += n7);
		(++p1);
	}
	L4: ;
	t8 = ((unsigned long long )value2);
	(*r1x) = p1;
	return t8;
}

static void _addToStringBuffer329(unsigned char *zself, StringBuffer2 *zsb)
{
	{
		unsigned char *p1;
		p1 = zself;
		while(_notNul333(p1[((size_t)0x0000000000000000U)]))
		{
			{
				unsigned char c2;
				c2 = p1[((size_t)0x0000000000000000U)];
				StringBuffer__shl863(zsb, ((unsigned int )c2));
			}
			(++p1);
		}
	}
}

static size_t _hash330(unsigned char zself)
{
	size_t t1;
	t1 = ((size_t )zself);
	return t1;
}

static unsigned int _toUinteger331(unsigned char zself)
{
	unsigned int t1;
	t1 = ((unsigned int )zself);
	return t1;
}

static char _isNul332(unsigned char zself)
{
	char t1;
	t1 = (char)(zself == ((unsigned char)0U));
	return t1;
}

static char _notNul333(unsigned char zself)
{
	char t1;
	t1 = (char)(zself != ((unsigned char)0U));
	return t1;
}

static char _isIdentifierFirstChar334(unsigned char zself)
{
	char t1;
	t1 = ((char)(((unsigned char )((zself | ((unsigned char)32U)) - ((unsigned char)97U))) < ((unsigned char )((unsigned char)26U))) || (char)(zself == ((unsigned char)95U)));
	return t1;
}

static char _isIdentifierChar335(unsigned char zself)
{
	char t1;
	t1 = (((char)(((unsigned char )((zself | ((unsigned char)32U)) - ((unsigned char)97U))) < ((unsigned char )((unsigned char)26U))) || (char)(((unsigned char )(zself - ((unsigned char)48U))) < ((unsigned char )((unsigned char)10U)))) || (char)(zself == ((unsigned char)95U)));
	return t1;
}

static void Dictionary_initialize336(Dictionary187 *zself)
{
	zself->collisions = 0;
	zself->tally = 0;
	zself->allocated = 10;
	zself->associations = _allocateArray347(10);
	{
		{
			int self1;
			int i2;
			self1 = zself->allocated;
			i2 = 0;
			while((char)(i2 < self1))
			{
				{
					{
						Association188 *a3;
						a3 = (&zself->associations[i2]);
						a3->key = ((unsigned char *)0);
					}
				}
				(++i2);
			}
		}
	}
}

static void Dictionary_release337(Dictionary187 *zself)
{
	_freeArray378(((void *)zself->associations), zself->allocated);
}

static unsigned char *Dictionary_add338(Dictionary187 *zself, unsigned char *zk, unsigned char *zv)
{
	int location1;
	int count2;
	location1 = Dictionary_slot345(zself, zk);
	count2 = 1;
	for(;;)
	{
		Association188 *a3;
		a3 = (&zself->associations[location1]);
		if(Association_notEmpty376(a3))
		{
			if(Dictionary_isEqual344(zself, zk, a3->key))
			{
				unsigned char *old4;
				unsigned char *t5;
				old4 = a3->value;
				a3->key = zk;
				a3->value = zv;
				t5 = old4;
				return t5;
			}
			else
			{
				(++location1);
				if((char)(location1 == zself->allocated))
				{
					location1 = 0;
				}
				(++count2);
			}
		}
		else
		{
			unsigned char *t6;
			a3->key = zk;
			a3->value = zv;
			if((char)(count2 > zself->collisions))
			{
				zself->collisions = count2;
			}
			Dictionary_increaseTally342(zself);
			t6 = ((unsigned char *)0);
			return t6;
		}
	}
}

static unsigned char *Dictionary__at339(Dictionary187 *zself, unsigned char *zk)
{
	int location1;
	int count2;
	unsigned char *t7;
	location1 = Dictionary_slot345(zself, zk);
	count2 = zself->collisions;
	while((char)(count2 > 0))
	{
		Association188 *a5;
		a5 = (&zself->associations[location1]);
		if(Association_isEmpty346(a5))
		{
			goto L3;
		}
		else
		{
			if(Dictionary_isEqual344(zself, a5->key, zk))
			{
				unsigned char *t6;
				t6 = a5->value;
				return t6;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(--count2);
	}
	L3: ;
	t7 = ((unsigned char *)0);
	return t7;
}

static char Dictionary_hasKey340(Dictionary187 *zself, unsigned char *zk)
{
	int location1;
	int count2;
	char t7;
	location1 = Dictionary_slot345(zself, zk);
	count2 = zself->collisions;
	while((char)(count2 > 0))
	{
		Association188 *a5;
		a5 = (&zself->associations[location1]);
		if(Association_isEmpty346(a5))
		{
			goto L3;
		}
		else
		{
			if(Dictionary_isEqual344(zself, a5->key, zk))
			{
				char t6;
				t6 = 1;
				return t6;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(--count2);
	}
	L3: ;
	t7 = 0;
	return t7;
}

static void Dictionary_resize341(Dictionary187 *zself, int zs)
{
	int c1;
	Association188 *a2;
	c1 = 0;
	a2 = _allocateArray347(zs);
	{
		Association188 *a3;
		a3 = a2;
		{
			int i4;
			i4 = 0;
			while((char)(i4 < zs))
			{
				{
					{
						Association188 *e5;
						e5 = (&a3[i4]);
						e5->key = ((unsigned char *)0);
					}
				}
				(++i4);
			}
		}
	}
	{
		{
			{
				int self6;
				int i7;
				self6 = zself->allocated;
				i7 = 0;
				while((char)(i7 < self6))
				{
					{
						{
							Association188 *a8;
							a8 = (&zself->associations[i7]);
							if(Association_notEmpty376(a8))
							{
								{
									unsigned char *key9;
									unsigned char *value10;
									int count11;
									int location12;
									key9 = a8->key;
									value10 = a8->value;
									count11 = 1;
									location12 = Dictionary_hash343(zself, key9, zs);
									while(Association_notEmpty376((&a2[location12])))
									{
										(++location12);
										if((char)(location12 == zs))
										{
											location12 = 0;
										}
										(++count11);
									}
									(&a2[location12])->key = key9;
									(&a2[location12])->value = value10;
									c1 = _max377(count11, c1);
								}
							}
						}
					}
					(++i7);
				}
			}
		}
	}
	_freeArray378(((void *)zself->associations), zself->allocated);
	zself->collisions = c1;
	zself->associations = a2;
	zself->allocated = zs;
}

static void Dictionary_increaseTally342(Dictionary187 *zself)
{
	(++zself->tally);
	if((char)((zself->tally * 4) > (zself->allocated * 3)))
	{
		Dictionary_resize341(zself, ((zself->allocated * 3) / 2));
	}
}

static int Dictionary_hash343(Dictionary187 *zself, unsigned char *zk, int zmod)
{
	int t1;
	t1 = _umod375(((int )_hash324(zk)), zmod);
	return t1;
}

static char Dictionary_isEqual344(Dictionary187 *zself, unsigned char *zk1, unsigned char *zk2)
{
	char t1;
	t1 = _isEqual327(zk1, zk2);
	return t1;
}

static int Dictionary_slot345(Dictionary187 *zself, unsigned char *zk)
{
	int t1;
	t1 = Dictionary_hash343(zself, zk, zself->allocated);
	return t1;
}

static char Association_isEmpty346(Association188 *zself)
{
	char t1;
	t1 = (char)(zself->key == ((unsigned char *)0));
	return t1;
}

static Association188 *_allocateArray347(int zn)
{
	Association188 *t1;
	t1 = ((Association188 *)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000008U))));
	return t1;
}

static void _addToStringBuffer348(unsigned char zself, StringBuffer2 *zsb)
{
	StringBuffer_addCodeUnit278(zsb, zself);
}

static char _isContinuation349(unsigned char zself)
{
	char t1;
	t1 = (char)((zself & ((unsigned char)192U)) == ((unsigned char)128U));
	return t1;
}

static char _isNul350(unsigned char zself)
{
	char t1;
	t1 = (char)(zself == ((unsigned char)0U));
	return t1;
}

static char _notNul351(unsigned char zself)
{
	char t1;
	t1 = (char)(zself != ((unsigned char)0U));
	return t1;
}

static size_t _toByteSize352(int zself)
{
	size_t t1;
	t1 = (((size_t )zself) * ((size_t)0x0000000000000001U));
	return t1;
}

static long long _getSize64353(unsigned char *zfilename, Error162 **r1x)
{
	unsigned char *s1;
	long long size2;
	long long t4;
	s1 = _toFilename363(zfilename);
	size2 = file_size(s1);
	_deleteFilename364(s1);
	if((char)(size2 == -1LL))
	{
		long long t3;
		t3 = 0LL;
		(*r1x) = ((Error162 *)_new1084());
		return t3;
	}
	t4 = size2;
	(*r1x) = ((Error162 *)0);
	return t4;
}

static size_t _getSize354(unsigned char *zfilename, Error162 **r1x)
{
	long long size1;
	Error162 *err2;
	long long t3;
	Error162 *t4;
	size_t t7;
	t3 = _getSize64353(zfilename, (&t4));
	size1 = t3;
	err2 = t4;
	if((char)(err2 != ((Error162 *)0)))
	{
		size_t t5;
		t5 = ((size_t)0x0000000000000000U);
		(*r1x) = err2;
		return t5;
	}
	if((char)(((unsigned long long )((unsigned long long )size1)) > ((unsigned long long )18446744073709551615UL)))
	{
		size_t t6;
		t6 = ((size_t)0x0000000000000000U);
		(*r1x) = ((Error162 *)_new1650((&ErrorCodeFileTooBig1665), S1685, zfilename));
		return t6;
	}
	t7 = ((size_t )size1);
	(*r1x) = ((Error162 *)0);
	return t7;
}

static void _addNativeNameTo355(StringBuffer2 *zout, unsigned char *zfilename)
{
	{
		unsigned char *p1;
		p1 = zfilename;
		while(_notNul351(p1[((size_t)0x0000000000000000U)]))
		{
			{
				unsigned char x2;
				unsigned char c3;
				x2 = p1[((size_t)0x0000000000000000U)];
				c3 = x2;
				if((char)(c3 == ((unsigned char)92U)))
				{
					c3 = ((unsigned char)47U);
				}
				StringBuffer__shl365(zout, c3);
			}
			(++p1);
		}
	}
}

static File166 *_openRead356(unsigned char *zfilename, Error162 **r1x)
{
	unsigned char *s1;
	FILE170 *f2;
	File166 *t4;
	s1 = _toFilename363(zfilename);
	f2 = fopen(s1, S1686);
	_deleteFilename364(s1);
	if((char)(f2 == ((FILE170 *)0)))
	{
		File166 *t3;
		t3 = ((File166 *)0);
		(*r1x) = ((Error162 *)_new1084());
		return t3;
	}
	t4 = _new1106(f2);
	(*r1x) = ((Error162 *)0);
	return t4;
}

static File166 *_openWrite357(unsigned char *zfilename, Error162 **r1x)
{
	unsigned char *s1;
	FILE170 *f2;
	File166 *t4;
	s1 = _toFilename363(zfilename);
	f2 = fopen(s1, S1877);
	_deleteFilename364(s1);
	if((char)(f2 == ((FILE170 *)0)))
	{
		File166 *t3;
		t3 = ((File166 *)0);
		(*r1x) = ((Error162 *)_new1084());
		return t3;
	}
	t4 = _new1106(f2);
	(*r1x) = ((Error162 *)0);
	return t4;
}

static char _exists358(unsigned char *zfilename)
{
	unsigned char *s1;
	char exists2;
	char t3;
	s1 = _toFilename363(zfilename);
	exists2 = (char)(file_exists(s1) != 0);
	_deleteFilename364(s1);
	t3 = exists2;
	return t3;
}

static SystemError165 *File_close359(File166 *zself)
{
	char ok1;
	SystemError165 *t2;
	ok1 = (char)(fclose(zself->handle) == 0);
	_free1080(((void *)zself));
	t2 = (ok1?((SystemError165 *)0):_new1084());
	return t2;
}

static size_t File_read360(File166 *zself, unsigned char *zbase, size_t zsize, Error162 **r1x)
{
	size_t read1;
	size_t t3;
	read1 = fread(zbase, ((size_t)0x0000000000000001U), zsize, zself->handle);
	if(((char)(read1 != zsize) && (char)(ferror(zself->handle) != 0)))
	{
		size_t t2;
		t2 = ((size_t)0x0000000000000000U);
		(*r1x) = ((Error162 *)_new1084());
		return t2;
	}
	t3 = read1;
	(*r1x) = ((Error162 *)0);
	return t3;
}

static size_t File_write361(File166 *zself, unsigned char *zbase, size_t zsize, Error162 **r1x)
{
	size_t written1;
	size_t t3;
	written1 = fwrite(zbase, ((size_t)0x0000000000000001U), zsize, zself->handle);
	if(((char)(written1 != zsize) && (char)(ferror(zself->handle) != 0)))
	{
		size_t t2;
		t2 = ((size_t)0x0000000000000000U);
		(*r1x) = ((Error162 *)_new1084());
		return t2;
	}
	t3 = written1;
	(*r1x) = ((Error162 *)0);
	return t3;
}

static File166 *File_initialize362(File166 *zself, FILE170 *zhandle)
{
	File166 *t1;
	zself->handle = zhandle;
	t1 = zself;
	return t1;
}

static unsigned char *_toFilename363(unsigned char *zfilename)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zfilename);
	return t1;
}

static void _deleteFilename364(unsigned char *zfilename)
{
}

static StringBuffer2 *StringBuffer__shl365(StringBuffer2 *zself, unsigned char zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer348(zobj, zself);
	t1 = zself;
	return t1;
}

static size_t _max366(size_t zx, size_t v1x)
{
	size_t max1;
	size_t t2;
	max1 = zx;
	{
		if((char)(((size_t )v1x) > ((size_t )max1)))
		{
			max1 = v1x;
		}
	}
	t2 = max1;
	return t2;
}

static StringBuffer2 *StringBuffer__shl367(StringBuffer2 *zself, unsigned char *zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer368(zobj, zself);
	t1 = zself;
	return t1;
}

static void _addToStringBuffer368(unsigned char *zself, StringBuffer2 *zx)
{
	StringBuffer_addString279(zx, zself);
}

static ImportPath10 *MemoryPool_new369(MemoryPool160 *zself, unsigned char *v1x, ImportPath10 *v2x)
{
	ImportPath10 *obj1;
	ImportPath10 *t2;
	obj1 = MemoryPool_allocate370(zself);
	ImportPath_initialize323(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static ImportPath10 *MemoryPool_allocate370(MemoryPool160 *zself)
{
	ImportPath10 *t1;
	t1 = ((ImportPath10 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static int _toInteger371(unsigned int zself)
{
	int t1;
	t1 = ((int )zself);
	return t1;
}

static unsigned char _toCodeUnit372(unsigned int zself)
{
	unsigned char t1;
	t1 = ((unsigned char )zself);
	return t1;
}

static void _addToStringBuffer373(unsigned int zself, StringBuffer2 *zsb)
{
	StringBuffer_addChar277(zsb, zself);
}

static char _isNul374(unsigned int zself)
{
	char t1;
	t1 = (char)(zself == 0U);
	return t1;
}

static int _umod375(int zself, int zd)
{
	int t1;
	t1 = ((int )(((unsigned int )zself) % ((unsigned int )zd)));
	return t1;
}

static char Association_notEmpty376(Association188 *zself)
{
	char t1;
	t1 = (!Association_isEmpty346(zself));
	return t1;
}

static int _max377(int zx, int v1x)
{
	int max1;
	int t2;
	max1 = zx;
	{
		if((char)(v1x > max1))
		{
			max1 = v1x;
		}
	}
	t2 = max1;
	return t2;
}

static void _freeArray378(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000008U));
	_freeBytes258(zp, bytes1);
}

static void _output379(unsigned char *ztemplate)
{
	StringBuffer2 sb1;
	StringBuffer_initialize270((&sb1));
	StringBuffer_printFormat380((&sb1), ztemplate);
	_println262(StringBuffer_string289((&sb1)));
	StringBuffer_release272((&sb1));
}

static void StringBuffer_printFormat380(StringBuffer2 *zself, unsigned char *zs)
{
	StringBuffer_removeAll286(zself);
	StringBuffer_addFormat381(zself, zs);
}

static void StringBuffer_addFormat381(StringBuffer2 *zself, unsigned char *zs)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
	}
}

static void Program_initialize382(Program5 *zself, MemoryPool160 *zpool)
{
	zself->pool = zpool;
	Dictionary_initialize584((&zself->arrayTypes));
	Dictionary_initialize610(((Dictionary26 *)(&zself->functionTypes)));
	Collection_initialize440((&zself->modules));
	Module_initialize450((&zself->builtinModule), zself, S2118, ((Scope8 *)0), ((ImportPath10 *)0));
	Collection_initialize454(((Collection12 *)(&zself->structures)));
	Collection_initialize457(((Collection14 *)(&zself->functions)));
	Collection_initialize460(((Collection16 *)(&zself->externFunctions)));
	Collection_initialize463(((Collection18 *)(&zself->globalVariables)));
	IdentifierDictionary_initialize466((&zself->identifiers), zpool, 65535);
	Program_initializeIdentifiers430(zself);
	Program_initializeBuiltins431(zself);
	IntegerExpression_initialize511((&zself->trueExpression), 1UL, ((Type98 *)zself->booleanType));
	IntegerExpression_initialize511((&zself->falseExpression), 0UL, ((Type98 *)zself->booleanType));
	IntegerExpression_initialize511((&zself->nilExpression), 0UL, ((Type98 *)zself->nilType));
	Dictionary_initialize560((&zself->string8Expressions));
	Dictionary_initialize573((&zself->string16Expressions));
	zself->functionConstants = ((FunctionExpression70 *)0);
	zself->structureConstants = ((StructureExpression68 *)0);
	zself->arrayConstants = ((ArrayExpression69 *)0);
	zself->string8Constants = ((String8Expression66 *)0);
	zself->string16Constants = ((String16Expression67 *)0);
}

static void Program_release383(Program5 *zself)
{
	IdentifierDictionary_release467((&zself->identifiers));
	Dictionary_release561((&zself->string8Expressions));
	Dictionary_release574((&zself->string16Expressions));
	Dictionary_release585((&zself->arrayTypes));
	Dictionary_release611(((Dictionary26 *)(&zself->functionTypes)));
	{
		Collection6 *self1;
		Module7 *e2;
		self1 = (&zself->modules);
		e2 = self1->firstElement;
		while((char)(e2 != ((Module7 *)0)))
		{
			{
				Module_release452(e2);
			}
			e2 = e2->nextSibling;
		}
	}
}

static Type98 *Program_getArrayType384(Program5 *zself, Type98 *zcellType, size_t zarraySize)
{
	ArrayType102 key1;
	ArrayType102 *arrayType2;
	Type98 *parent3;
	Type98 *t5;
	(&key1)->cellType = zcellType;
	(&key1)->arraySize = zarraySize;
	arrayType2 = Dictionary__at587((&zself->arrayTypes), (&key1));
	if((char)(arrayType2 != ((ArrayType102 *)0)))
	{
		Type98 *t4;
		t4 = ((Type98 *)arrayType2);
		return t4;
	}
	parent3 = ((Type98 *)0);
	if((char)(zarraySize != ((size_t)0x0000000000000000U)))
	{
		parent3 = Program_getArrayType384(zself, zcellType, ((size_t)0x0000000000000000U));
	}
	else
	{
		if((char)(zcellType != ((Type98 *)zself->anyType)))
		{
			parent3 = Program_getArrayType384(zself, ((Type98 *)zself->anyType), ((size_t)0x0000000000000000U));
		}
		else
		{
			parent3 = ((Type98 *)zself->anyType);
		}
	}
	arrayType2 = MemoryPool_new1655(zself->pool, zcellType, zarraySize, parent3);
	Dictionary_add586((&zself->arrayTypes), arrayType2, arrayType2);
	t5 = ((Type98 *)arrayType2);
	return t5;
}

static FunctionType103 *Program_getFunctionType385(Program5 *zself, unsigned char zcallingConvention, TypeSequence108 *ztypes, TypeSequence108 *zreturnTypes)
{
	FunctionType103 key1;
	FunctionType103 *functionType2;
	FunctionType103 *t3;
	(&key1)->callingConvention = zcallingConvention;
	(&key1)->types = ztypes;
	(&key1)->returnTypes = zreturnTypes;
	functionType2 = Dictionary__at613(((Dictionary26 *)(&zself->functionTypes)), (&key1));
	if((char)(functionType2 == ((FunctionType103 *)0)))
	{
		functionType2 = MemoryPool_new1455(zself->pool, zcallingConvention, ztypes, zreturnTypes, zself->anyType);
		Dictionary_add612(((Dictionary26 *)(&zself->functionTypes)), functionType2, functionType2);
	}
	t3 = functionType2;
	return t3;
}

static BuiltinType100 *Program_getBuiltinType386(Program5 *zself, Scope8 *zscope, Type98 *zparent, int zcode, size_t zsize, void *zname)
{
	BuiltinType100 *t1;
	t1 = MemoryPool_new1367(zself->pool, zscope, zparent, zcode, zsize, zname, 1);
	return t1;
}

static PointerType101 *Program_getPointerType387(Program5 *zself, Scope8 *zscope, Type98 *ztarget, Type98 *zparent, void *zname)
{
	PointerType101 *t1;
	t1 = MemoryPool_new1368(zself->pool, zscope, ztarget, zparent, zname);
	return t1;
}

static FunctionExpression70 *Program_getFunctionReference388(Program5 *zself, Prototype31 *zproto, TypeSequence108 *ztypes)
{
	unsigned char cc1;
	TypeSequence108 *returnTypes2;
	FunctionType103 *functionType3;
	PointerType101 *pointerType4;
	FunctionExpression70 *t5;
	cc1 = zproto->callingConvention;
	returnTypes2 = zproto->returnTypes;
	functionType3 = Program_getFunctionType385(zself, cc1, ztypes, returnTypes2);
	pointerType4 = Type_pointer524(((Type98 *)functionType3));
	t5 = MemoryPool_new1458(zself->pool, zproto, zself, pointerType4);
	return t5;
}

static String8Expression66 *Program_getString8389(Program5 *zself, unsigned char *zstring, Type98 *ztype)
{
	String8Expression66 key1;
	String8Expression66 *e2;
	String8Expression66 *t3;
	(&key1)->value = zstring;
	((Expression21 *)(&key1))->type = ztype;
	e2 = Dictionary__at563((&zself->string8Expressions), (&key1));
	if((char)(e2 == ((String8Expression66 *)0)))
	{
		e2 = MemoryPool_new1503(zself->pool, zstring, zself, ztype);
		Dictionary_add562((&zself->string8Expressions), e2, e2);
	}
	t3 = e2;
	return t3;
}

static String16Expression67 *Program_getString16390(Program5 *zself, unsigned char *zstring, Type98 *ztype)
{
	String16Expression67 key1;
	String16Expression67 *e2;
	String16Expression67 *t4;
	(&key1)->value8 = zstring;
	((Expression21 *)(&key1))->type = ztype;
	e2 = Dictionary__at576((&zself->string16Expressions), (&key1));
	if((char)(e2 == ((String16Expression67 *)0)))
	{
		unsigned short *s3;
		s3 = MemoryPool_newString16FromString8255(zself->pool, zstring);
		e2 = MemoryPool_new1507(zself->pool, s3, zstring, zself, ztype);
		Dictionary_add575((&zself->string16Expressions), e2, e2);
	}
	t4 = e2;
	return t4;
}

static IntegerExpression20 *Program_getInteger391(Program5 *zself, unsigned long long zinteger, Type98 *ztype)
{
	IntegerExpression20 *t1;
	t1 = MemoryPool_new1394(zself->pool, zinteger, ztype);
	return t1;
}

static IntegerExpression20 *Program_getBoolean392(Program5 *zself, char zvalue)
{
	IntegerExpression20 *t1;
	t1 = (zvalue?(&zself->trueExpression):(&zself->falseExpression));
	return t1;
}

static IntegerExpression20 *Program_getTrue393(Program5 *zself)
{
	IntegerExpression20 *t1;
	t1 = (&zself->trueExpression);
	return t1;
}

static IntegerExpression20 *Program_getFalse394(Program5 *zself)
{
	IntegerExpression20 *t1;
	t1 = (&zself->falseExpression);
	return t1;
}

static IntegerExpression20 *Program_getNil395(Program5 *zself)
{
	IntegerExpression20 *t1;
	t1 = (&zself->nilExpression);
	return t1;
}

static IntegerExpression20 *Program_getTypedNil396(Program5 *zself, Type98 *ztype)
{
	IntegerExpression20 *t1;
	t1 = Program_getInteger391(zself, 0UL, ztype);
	return t1;
}

static UnaryExpression73 *Program_getUnary397(Program5 *zself, int zcode, Type98 *ztype, Expression21 *zargument)
{
	UnaryExpression73 *t1;
	t1 = MemoryPool_new1398(zself->pool, zcode, ztype, zargument);
	return t1;
}

static BinaryExpression72 *Program_getBinary398(Program5 *zself, int zcode, Type98 *ztype, Expression21 *zargument1, Expression21 *zargument2)
{
	BinaryExpression72 *t1;
	t1 = MemoryPool_new1406(zself->pool, zcode, ztype, zargument1, zargument2);
	return t1;
}

static PointerCallExpression78 *Program_getPointerCall399(Program5 *zself, Expression21 *zf, ExpressionList61 *zarguments, TypeSequence108 *ztypes)
{
	PointerCallExpression78 *t1;
	t1 = MemoryPool_new1413(zself->pool, zself, zf, zarguments, ztypes);
	return t1;
}

static CondExpression82 *Program_getCond400(Program5 *zself, Expression21 *zcondition, ExpressionList61 *zargument1, ExpressionList61 *zargument2, TypeSequence108 *ztypes)
{
	CondExpression82 *t1;
	t1 = MemoryPool_new1527(zself->pool, zself, zcondition, zargument1, zargument2, ztypes);
	return t1;
}

static VargsExpression88 *Program_getVargs401(Program5 *zself, ExpressionList61 *zexpressions)
{
	VargsExpression88 *t1;
	t1 = MemoryPool_new1529(zself->pool, zexpressions, zself);
	return t1;
}

static ExternFunctionCallExpression77 *Program_getExternFunctionCall402(Program5 *zself, ExternFunction36 *zf, ExpressionList61 *zarguments)
{
	ExternFunctionCallExpression77 *t1;
	t1 = MemoryPool_new1378(zself->pool, zf, zarguments);
	return t1;
}

static FunctionCallExpression76 *Program_getFunctionCall403(Program5 *zself, Function33 *zf, ExpressionList61 *zarguments)
{
	FunctionCallExpression76 *t1;
	t1 = MemoryPool_new1342(zself->pool, zf, zarguments);
	return t1;
}

static MacroCallExpression85 *Program_getMacroCall404(Program5 *zself, TypeSequence108 *zreturnTypes, MacroBlock86 *zblock)
{
	MacroCallExpression85 *t1;
	t1 = MemoryPool_new1349(zself->pool, zself, zreturnTypes, zblock);
	return t1;
}

static MacroBlock86 *Program_getMacroBlock405(Program5 *zself)
{
	MacroBlock86 *t1;
	t1 = MemoryPool_new1344(zself->pool);
	return t1;
}

static SelectExpression87 *Program_getSelect406(Program5 *zself, Expression21 *zargument, int zindex, Type98 *ztype)
{
	SelectExpression87 *t1;
	t1 = MemoryPool_new1501(zself->pool, zargument, zindex, ztype);
	return t1;
}

static StructureExpression68 *Program_getStructureInitializer407(Program5 *zself, ExpressionList61 *zvalues, Type98 *ztype, StructureType104 *zstructure)
{
	StructureExpression68 *t1;
	t1 = MemoryPool_new1404(zself->pool, zvalues, zself, ztype, zstructure);
	return t1;
}

static ArrayExpression69 *Program_getArrayInitializer408(Program5 *zself, ExpressionList61 *zvalues, Type98 *ztype, ArrayType102 *zarrayType)
{
	ArrayExpression69 *t1;
	t1 = MemoryPool_new1520(zself->pool, zvalues, zself, ztype, zarrayType);
	return t1;
}

static VargsEachExpression83 *Program_getVargsEach409(Program5 *zself, Block38 *zblock)
{
	VargsEachExpression83 *t1;
	t1 = MemoryPool_new1392(zself->pool, zblock, zself);
	return t1;
}

static AttributeExpression84 *Program_getAttribute410(Program5 *zself, Expression21 *zargument, Attribute107 *zattribute)
{
	AttributeExpression84 *t1;
	t1 = MemoryPool_new1396(zself->pool, zargument, zattribute);
	return t1;
}

static Type98 *Program_getSingletonType411(Program5 *zself, TypeSequence108 *ztypes)
{
	if((char)(ztypes->size == 0))
	{
		Type98 *t1;
		t1 = ((Type98 *)zself->voidType);
		return t1;
	}
	else
	{
		if((char)(ztypes->size == 1))
		{
			Type98 *t2;
			t2 = TypeSequence_first604(ztypes);
			return t2;
		}
		else
		{
			Type98 *t3;
			t3 = ((Type98 *)zself->compositeType);
			return t3;
		}
	}
}

static Block38 *Program_getBlock412(Program5 *zself)
{
	Block38 *t1;
	t1 = MemoryPool_new1290(zself->pool);
	return t1;
}

static ExpressionList61 *Program_getExpressionList413(Program5 *zself)
{
	ExpressionList61 *t1;
	t1 = MemoryPool_new898(zself->pool);
	return t1;
}

static TypeArgument106 *Program_getTypeArgument414(Program5 *zself, Module7 *zmodule, ASTParameter120 *zsource, Expression21 *zargument)
{
	TypeArgument106 *t1;
	t1 = MemoryPool_new1371(zself->pool, zmodule, zsource, zargument);
	return t1;
}

static TypeDefinition91 *Program_getTypeDefinition415(Program5 *zself, Module7 *zmodule, int zline, void *zname, Type98 *ztype)
{
	TypeDefinition91 *t1;
	t1 = MemoryPool_new679(zself->pool, zmodule, zline, zname, ztype);
	return t1;
}

static SubTypeDefinition92 *Program_getSubTypeDefinition416(Program5 *zself, Scope8 *zscope, ASTType118 *zsource)
{
	SubTypeDefinition92 *t1;
	t1 = MemoryPool_new1475(zself->pool, zscope, zsource);
	return t1;
}

static Symbol29 *Program_getSymbol417(Program5 *zself, ASTSymbol121 *zsource)
{
	Symbol29 *t1;
	t1 = MemoryPool_new1482(zself->pool, zsource);
	return t1;
}

static VargParameter42 *Program_getVargParameter418(Program5 *zself, Module7 *zmodule, ASTId155 *zsource, Expression21 *zexpression)
{
	VargParameter42 *t1;
	t1 = MemoryPool_new1390(zself->pool, zmodule, zsource, zexpression);
	return t1;
}

static LocalAlias43 *Program_getLocalAlias419(Program5 *zself, Module7 *zmodule, int zline, void *zname, Expression21 *zexpression)
{
	LocalAlias43 *t1;
	t1 = MemoryPool_new1346(zself->pool, zmodule, zline, zname, zexpression);
	return t1;
}

static Scope8 *Program_getScope420(Program5 *zself, Scope8 *zparent, int zsize)
{
	Scope8 *t1;
	t1 = MemoryPool_new1498(zself->pool, zparent, zparent->module, zself->pool, zsize);
	return t1;
}

static Module7 *Program_createModule421(Program5 *zself, unsigned char *zfilename, ImportPath10 *zimportPath)
{
	Module7 *module1;
	Module7 *t2;
	module1 = MemoryPool_new1595(zself->pool, zself, zfilename, (&zself->builtinModule), zimportPath);
	Collection_add441((&zself->modules), module1);
	t2 = module1;
	return t2;
}

static StructureType104 *Program_createStructure422(Program5 *zself, Scope8 *zscope, ASTType118 *zsource, ExpressionList61 *zarguments)
{
	StructureType104 *structure1;
	StructureType104 *t2;
	structure1 = MemoryPool_new1363(zself->pool, zscope, zsource, zarguments);
	CollectionPool_add456((&zself->structures), zself->pool, structure1);
	t2 = structure1;
	return t2;
}

static Function33 *Program_createFunction423(Program5 *zself, Scope8 *zscope, ASTFunction115 *zsource, Type98 *zcontext)
{
	Function33 *f1;
	Function33 *t2;
	f1 = MemoryPool_new1333(zself->pool, zscope, zsource, zcontext);
	if((!f1->isMacro))
	{
		CollectionPool_add459((&zself->functions), zself->pool, f1);
	}
	t2 = f1;
	return t2;
}

static ExternFunction36 *Program_createExternFunction424(Program5 *zself, Module7 *zmodule, ASTExternFunction116 *zsource, Scope8 *zscope, Type98 *zcontext)
{
	ExternFunction36 *f1;
	ExternFunction36 *t2;
	f1 = MemoryPool_new1477(zself->pool, zmodule, zsource, zscope, zcontext);
	CollectionPool_add462((&zself->externFunctions), zself->pool, f1);
	t2 = f1;
	return t2;
}

static GlobalVariable97 *Program_createGlobalVariable425(Program5 *zself, Scope8 *zscope, ASTGlobalVariable114 *zsource)
{
	GlobalVariable97 *v1;
	GlobalVariable97 *t2;
	v1 = MemoryPool_new1468(zself->pool, zscope, zsource);
	CollectionPool_add465((&zself->globalVariables), zself->pool, v1);
	t2 = v1;
	return t2;
}

static Alias89 *Program_createAlias426(Program5 *zself, Scope8 *zscope, Type98 *zcontext, ASTAlias117 *zsource)
{
	Alias89 *t1;
	t1 = MemoryPool_new1466(zself->pool, zscope, zcontext, zsource);
	return t1;
}

static GenericFunction37 *Program_createGenericFunction427(Program5 *zself, Scope8 *zscope, ASTFunction115 *zsource, Type98 *zcontext)
{
	GenericFunction37 *t1;
	t1 = MemoryPool_new1464(zself->pool, zscope, zsource, zcontext);
	return t1;
}

static GenericType94 *Program_createGenericType428(Program5 *zself, Scope8 *zscope, ASTType118 *zsource)
{
	GenericType94 *t1;
	t1 = MemoryPool_new1473(zself->pool, zscope, zsource);
	return t1;
}

static Module7 *Program_findModule429(Program5 *zself, unsigned char *zfilename)
{
	Module7 *t4;
	{
		Collection6 *self1;
		Module7 *e2;
		self1 = (&zself->modules);
		e2 = self1->firstElement;
		while((char)(e2 != ((Module7 *)0)))
		{
			{
				if(_isEqual317(e2->filename, zfilename))
				{
					Module7 *t3;
					t3 = e2;
					return t3;
				}
			}
			e2 = e2->nextSibling;
		}
	}
	t4 = ((Module7 *)0);
	return t4;
}

static void Program_initializeIdentifiers430(Program5 *zself)
{
	IdentifierDictionary19 *i1;
	unsigned char **p2;
	void **q3;
	i1 = (&zself->identifiers);
	p2 = A1684;
	q3 = ((void **)(&identifiers1661));
	while((char)(p2[((size_t)0x0000000000000000U)] != ((unsigned char *)0)))
	{
		q3[((size_t)0x0000000000000000U)] = IdentifierDictionary__at468(i1, p2[((size_t)0x0000000000000000U)]);
		(++p2);
		(++q3);
	}
}

static void Program_initializeBuiltins431(Program5 *zself)
{
	MetaType99 *anyMeta1;
	BuiltinType100 *booleanType2;
	PointerType101 *anyPointerType3;
	Type98 *arrayAny4;
	PointerType101 *pointerArray5;
	zself->anyType = Program_newBuiltinType439(zself, ((Type98 *)0), 2, ((size_t)0xFFFFFFFFFFFFFFFFU), (&identifiers1661)->Anything);
	zself->nilType = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 1, ((size_t)0x0000000000000004U), (&identifiers1661)->Nil);
	zself->booleanType = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 5, ((size_t)0x0000000000000001U), (&identifiers1661)->Bool);
	zself->int8Type = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 6, ((size_t)0x0000000000000001U), (&identifiers1661)->Int8);
	zself->int16Type = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 6, ((size_t)0x0000000000000002U), (&identifiers1661)->Int16);
	zself->int32Type = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 6, ((size_t)0x0000000000000004U), (&identifiers1661)->Int32);
	zself->int64Type = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 6, ((size_t)0x0000000000000008U), (&identifiers1661)->Int64);
	zself->uint8Type = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 7, ((size_t)0x0000000000000001U), (&identifiers1661)->Uint8);
	zself->uint16Type = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 7, ((size_t)0x0000000000000002U), (&identifiers1661)->Uint16);
	zself->uint32Type = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 7, ((size_t)0x0000000000000004U), (&identifiers1661)->Uint32);
	zself->uint64Type = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 7, ((size_t)0x0000000000000008U), (&identifiers1661)->Uint64);
	zself->sizeType = Program_newBuiltinType439(zself, ((Type98 *)zself->anyType), 8, ((size_t)0x0000000000000004U), (&identifiers1661)->Size);
	zself->voidType = Program_newBuiltinType439(zself, ((Type98 *)0), 3, ((size_t)0xFFFFFFFFFFFFFFFFU), (&identifiers1661)->Void);
	zself->compositeType = Program_newBuiltinType439(zself, ((Type98 *)0), 4, ((size_t)0xFFFFFFFFFFFFFFFFU), (&identifiers1661)->Composite);
	zself->anyPointerType = Type_pointer524(((Type98 *)zself->anyType));
	zself->nilPointerType = Type_pointer524(((Type98 *)zself->nilType));
	anyMeta1 = Type_metaType523(((Type98 *)zself->anyType));
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyMeta1), 27, (&identifiers1661)->size);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyMeta1), 24, (&identifiers1661)->super);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyMeta1), 25, (&identifiers1661)->target);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyMeta1), 26, (&identifiers1661)->cell);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyMeta1), 28, (&identifiers1661)->nil);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyMeta1), 29, (&identifiers1661)->vtable);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)zself->anyType), 20, (&identifiers1661)->super);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)zself->anyType), 21, (&identifiers1661)->_upcast);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)zself->anyType), 22, (&identifiers1661)->_downcast);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)zself->anyType), 23, (&identifiers1661)->_cast);
	Program_addSignedNumeric432(zself, ((Type98 *)zself->int8Type));
	Program_addSignedNumeric432(zself, ((Type98 *)zself->int16Type));
	Program_addSignedNumeric432(zself, ((Type98 *)zself->int32Type));
	Program_addSignedNumeric432(zself, ((Type98 *)zself->int64Type));
	Program_addUnsignedNumeric433(zself, ((Type98 *)zself->uint8Type));
	Program_addUnsignedNumeric433(zself, ((Type98 *)zself->uint16Type));
	Program_addUnsignedNumeric433(zself, ((Type98 *)zself->uint32Type));
	Program_addUnsignedNumeric433(zself, ((Type98 *)zself->uint64Type));
	Program_addUnsignedNumeric433(zself, ((Type98 *)zself->sizeType));
	booleanType2 = zself->booleanType;
	Program_addBinary434(zself, ((Type98 *)booleanType2), 30, (&identifiers1661)->logicalAnd, 36);
	Program_addBinary434(zself, ((Type98 *)booleanType2), 30, (&identifiers1661)->logicalOr, 37);
	Program_addBinary434(zself, ((Type98 *)booleanType2), 33, (&identifiers1661)->eq, 41);
	Program_addBinary434(zself, ((Type98 *)booleanType2), 33, (&identifiers1661)->ne, 42);
	Program_addUnary435(zself, ((Type98 *)booleanType2), 37, (&identifiers1661)->logicalNot, 40);
	Program_addBinary434(zself, ((Type98 *)booleanType2), 34, (&identifiers1661)->cand, 62);
	Program_addBinary434(zself, ((Type98 *)booleanType2), 34, (&identifiers1661)->cor, 63);
	anyPointerType3 = zself->anyPointerType;
	Program_addBinary434(zself, ((Type98 *)anyPointerType3), 38, (&identifiers1661)->eq, 41);
	Program_addBinary434(zself, ((Type98 *)anyPointerType3), 38, (&identifiers1661)->ne, 42);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyPointerType3), 39, (&identifiers1661)->at);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyPointerType3), 40, (&identifiers1661)->call);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyPointerType3), 41, (&identifiers1661)->isNil);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)anyPointerType3), 42, (&identifiers1661)->notNil);
	arrayAny4 = Program_getArrayType384(zself, ((Type98 *)zself->anyType), ((size_t)0x0000000000000000U));
	pointerArray5 = Type_pointer524(arrayAny4);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)pointerArray5), 43, (&identifiers1661)->at);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)pointerArray5), 44, (&identifiers1661)->add);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)pointerArray5), 45, (&identifiers1661)->sub);
	Program_addBuiltinContextDefinition438(zself, ((Type98 *)pointerArray5), 46, (&identifiers1661)->dist);
	Program_addBinary434(zself, ((Type98 *)pointerArray5), 47, (&identifiers1661)->cadd, 73);
	Program_addBinary434(zself, ((Type98 *)pointerArray5), 47, (&identifiers1661)->csub, 74);
	Program_addUnary435(zself, ((Type98 *)pointerArray5), 36, (&identifiers1661)->cinc, 75);
	Program_addUnary435(zself, ((Type98 *)pointerArray5), 36, (&identifiers1661)->cdec, 76);
	Program_addBinary434(zself, ((Type98 *)pointerArray5), 33, (&identifiers1661)->le, 44);
	Program_addBinary434(zself, ((Type98 *)pointerArray5), 33, (&identifiers1661)->lt, 46);
	Program_addBinary434(zself, ((Type98 *)pointerArray5), 33, (&identifiers1661)->ge, 48);
	Program_addBinary434(zself, ((Type98 *)pointerArray5), 33, (&identifiers1661)->gt, 50);
	Program_addBuiltinDefinition436(zself, 14, (&identifiers1661)->true);
	Program_addBuiltinDefinition436(zself, 15, (&identifiers1661)->false);
	Program_addBuiltinDefinition436(zself, 16, (&identifiers1661)->nil);
	Program_addBuiltinDefinition436(zself, 17, (&identifiers1661)->vargsSize);
	Program_addBuiltinDefinition436(zself, 18, (&identifiers1661)->vargsEach);
}

static void Program_addSignedNumeric432(Program5 *zself, Type98 *ztype)
{
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->add, 23);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->sub, 24);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->mul, 25);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->div, 27);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->mod, 29);
	Program_addBinary434(zself, ztype, 32, (&identifiers1661)->shl, 33);
	Program_addBinary434(zself, ztype, 32, (&identifiers1661)->shr, 34);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->logicalAnd, 36);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->logicalOr, 37);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->logicalXor, 38);
	Program_addUnary435(zself, ztype, 31, (&identifiers1661)->pos, 32);
	Program_addUnary435(zself, ztype, 31, (&identifiers1661)->neg, 31);
	Program_addUnary435(zself, ztype, 31, (&identifiers1661)->logicalNot, 39);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->eq, 41);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->ne, 42);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->le, 43);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->lt, 45);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->ge, 47);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->gt, 49);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cadd, 51);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->csub, 52);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cmul, 53);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cdiv, 55);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cmod, 57);
	Program_addBinary434(zself, ztype, 35, (&identifiers1661)->cshl, 59);
	Program_addBinary434(zself, ztype, 35, (&identifiers1661)->cshr, 60);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cand, 62);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cor, 63);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cxor, 64);
	Program_addUnary435(zself, ztype, 36, (&identifiers1661)->cinc, 65);
	Program_addUnary435(zself, ztype, 36, (&identifiers1661)->cdec, 66);
}

static void Program_addUnsignedNumeric433(Program5 *zself, Type98 *ztype)
{
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->add, 23);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->sub, 24);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->mul, 26);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->div, 28);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->mod, 30);
	Program_addBinary434(zself, ztype, 32, (&identifiers1661)->shl, 33);
	Program_addBinary434(zself, ztype, 32, (&identifiers1661)->shr, 35);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->logicalAnd, 36);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->logicalOr, 37);
	Program_addBinary434(zself, ztype, 30, (&identifiers1661)->logicalXor, 38);
	Program_addUnary435(zself, ztype, 31, (&identifiers1661)->pos, 32);
	Program_addUnary435(zself, ztype, 31, (&identifiers1661)->neg, 31);
	Program_addUnary435(zself, ztype, 31, (&identifiers1661)->logicalNot, 39);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->eq, 41);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->ne, 42);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->le, 44);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->lt, 46);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->ge, 48);
	Program_addBinary434(zself, ztype, 33, (&identifiers1661)->gt, 50);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cadd, 51);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->csub, 52);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cmul, 54);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cdiv, 56);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cmod, 58);
	Program_addBinary434(zself, ztype, 35, (&identifiers1661)->cshl, 59);
	Program_addBinary434(zself, ztype, 35, (&identifiers1661)->cshr, 61);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cand, 62);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cor, 63);
	Program_addBinary434(zself, ztype, 34, (&identifiers1661)->cxor, 64);
	Program_addUnary435(zself, ztype, 36, (&identifiers1661)->cinc, 65);
	Program_addUnary435(zself, ztype, 36, (&identifiers1661)->cdec, 66);
}

static void Program_addBinary434(Program5 *zself, Type98 *ztype, int zcode, void *zname, int zecode)
{
	OperationDefinition93 *definition1;
	definition1 = MemoryPool_new710(zself->pool, (&zself->builtinModule), -1, zname, zcode, zecode);
	Type_addDefinition528(ztype, ((Definition32 *)definition1), ((unsigned char)0U));
}

static void Program_addUnary435(Program5 *zself, Type98 *ztype, int zcode, void *zname, int zecode)
{
	OperationDefinition93 *definition1;
	definition1 = MemoryPool_new710(zself->pool, (&zself->builtinModule), -1, zname, zcode, zecode);
	Type_addDefinition528(ztype, ((Definition32 *)definition1), ((unsigned char)0U));
}

static void Program_addBuiltinDefinition436(Program5 *zself, int zcode, void *zname)
{
	Definition32 *definition1;
	definition1 = MemoryPool_new705(zself->pool, (&zself->builtinModule), -1, zname, zcode);
	DefinitionDictionary_add447((&((Scope8 *)(&zself->builtinModule))->definitions), definition1, ((unsigned char)1U));
}

static void Program_addDefinition437(Program5 *zself, Definition32 *zdefinition)
{
	DefinitionDictionary_add447((&((Scope8 *)(&zself->builtinModule))->definitions), zdefinition, ((unsigned char)1U));
}

static void Program_addBuiltinContextDefinition438(Program5 *zself, Type98 *ztype, int zcode, void *zname)
{
	Definition32 *definition1;
	definition1 = MemoryPool_new705(zself->pool, (&zself->builtinModule), -1, zname, zcode);
	Type_addDefinition528(ztype, definition1, ((unsigned char)0U));
}

static BuiltinType100 *Program_newBuiltinType439(Program5 *zself, Type98 *zparent, int zcode, size_t zsize, void *zname)
{
	Module7 *module1;
	BuiltinType100 *type2;
	TypeDefinition91 *definition3;
	BuiltinType100 *t4;
	module1 = (&zself->builtinModule);
	type2 = MemoryPool_new676(zself->pool, module1, zparent, zcode, zsize, zname, 0);
	definition3 = Program_getTypeDefinition415(zself, (&zself->builtinModule), -1, zname, ((Type98 *)type2));
	Program_addDefinition437(zself, ((Definition32 *)definition3));
	t4 = type2;
	return t4;
}

static void Collection_initialize440(Collection6 *zself)
{
	zself->size = 0;
	zself->firstElement = ((Module7 *)0);
	zself->lastElement = ((Module7 *)0);
}

static void Collection_add441(Collection6 *zself, Module7 *ze)
{
	if((char)(zself->lastElement != ((Module7 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((Module7 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((Module7 *)0);
}

static void Scope_initialize442(Scope8 *zself, Scope8 *zparent, Module7 *zmodule, MemoryPool160 *zpool, int zsize)
{
	zself->parent = zparent;
	zself->module = zmodule;
	DefinitionDictionary_initialize446((&zself->definitions), zpool, zsize);
}

static Definition32 *Scope_addDefinition443(Scope8 *zself, Definition32 *zdefinition)
{
	Definition32 *t1;
	t1 = DefinitionDictionary_add447((&zself->definitions), zdefinition, ((unsigned char)1U));
	return t1;
}

static Definition32 *Scope_addDefinitionWithVisibility444(Scope8 *zself, Definition32 *zdefinition, unsigned char zvisibility)
{
	Definition32 *t1;
	t1 = DefinitionDictionary_add447((&zself->definitions), zdefinition, zvisibility);
	return t1;
}

static Definition32 *Scope_lookupDefinition445(Scope8 *zself, void *zname)
{
	Scope8 *scope1;
	Definition32 *t4;
	scope1 = zself;
	while((char)(scope1 != ((Scope8 *)0)))
	{
		DefinitionItem189 *item2;
		item2 = DefinitionDictionary_findDefinition448((&scope1->definitions), zname);
		if((char)(item2 != ((DefinitionItem189 *)0)))
		{
			Definition32 *t3;
			t3 = item2->definition;
			return t3;
		}
		scope1 = scope1->parent;
	}
	t4 = ((Definition32 *)0);
	return t4;
}

static void DefinitionDictionary_initialize446(DefinitionDictionary9 *zself, MemoryPool160 *zpool, int zsize)
{
	zself->size = zsize;
	zself->names = ((DefinitionItem189 **)0);
	zself->pool = zpool;
}

static Definition32 *DefinitionDictionary_add447(DefinitionDictionary9 *zself, Definition32 *zdefinition, unsigned char zvisibility)
{
	unsigned int slot1;
	DefinitionItem189 *item2;
	Definition32 *t7;
	if((char)(zself->names == ((DefinitionItem189 **)0)))
	{
		DefinitionItem189 **names3;
		names3 = MemoryPool_allocateArray700(zself->pool, zself->size);
		{
			int self4;
			int i5;
			self4 = zself->size;
			i5 = 0;
			while((char)(i5 < self4))
			{
				{
					names3[i5] = ((DefinitionItem189 *)0);
				}
				(++i5);
			}
		}
		zself->names = names3;
	}
	slot1 = DefinitionDictionary_slot449(zself, zdefinition->name);
	item2 = zself->names[slot1];
	while((char)(item2 != ((DefinitionItem189 *)0)))
	{
		if((char)(item2->definition->name == zdefinition->name))
		{
			Definition32 *t6;
			t6 = item2->definition;
			return t6;
		}
		item2 = item2->next;
	}
	item2 = MemoryPool_new703(zself->pool, zdefinition, zvisibility);
	item2->next = zself->names[slot1];
	zself->names[slot1] = item2;
	t7 = ((Definition32 *)0);
	return t7;
}

static DefinitionItem189 *DefinitionDictionary_findDefinition448(DefinitionDictionary9 *zself, void *zname)
{
	DefinitionItem189 *t4;
	if((char)(zself->names != ((DefinitionItem189 **)0)))
	{
		unsigned int slot1;
		DefinitionItem189 *item2;
		slot1 = DefinitionDictionary_slot449(zself, zname);
		item2 = zself->names[slot1];
		while((char)(item2 != ((DefinitionItem189 *)0)))
		{
			if((char)(item2->definition->name == zname))
			{
				DefinitionItem189 *t3;
				t3 = item2;
				return t3;
			}
			item2 = item2->next;
		}
	}
	t4 = ((DefinitionItem189 *)0);
	return t4;
}

static unsigned int DefinitionDictionary_slot449(DefinitionDictionary9 *zself, void *zname)
{
	unsigned int t1;
	t1 = (((unsigned int )_hash668(zname)) % ((unsigned int )zself->size));
	return t1;
}

static void Module_initialize450(Module7 *zself, Program5 *zprogram, unsigned char *zfilename, Scope8 *zscope, ImportPath10 *zimportPath)
{
	Scope_initialize442(((Scope8 *)zself), zscope, zself, zprogram->pool, 1024);
	zself->program = zprogram;
	zself->filename = zfilename;
	zself->path = _newFilePath451(zfilename);
	ImportPath_initialize323((&zself->importPath), zself->path, zimportPath);
	zself->loading = 0;
	zself->generator = ((void *)0);
}

static unsigned char *_newFilePath451(unsigned char *zfilename)
{
	unsigned char *p1;
	unsigned char *t3;
	p1 = _findLastCodeUnit322(zfilename, ((unsigned char)47U));
	if((char)(p1 == ((unsigned char *)0)))
	{
		unsigned char *t2;
		t2 = S2118;
		return t2;
	}
	t3 = _getCopyTo319(zfilename, p1);
	return t3;
}

static void Module_release452(Module7 *zself)
{
	_delete312(zself->path);
}

static unsigned char *Module_getFullName453(Module7 *zself, unsigned char *zmoduleName)
{
	unsigned char *filename1;
	StringBuffer2 fullname2;
	StringBuffer2 osname3;
	ImportPath10 *p4;
	unsigned char *t7;
	filename1 = zmoduleName;
	StringBuffer_initialize270((&fullname2));
	StringBuffer_initialize270((&osname3));
	p4 = (&zself->importPath);
	while((char)(p4 != ((ImportPath10 *)0)))
	{
		StringBuffer_removeAll286((&fullname2));
		StringBuffer__shl367((&fullname2), p4->path);
		if((StringBuffer_notEmpty1481((&fullname2)) && (!StringBuffer_endsWithChar291((&fullname2), 47U))))
		{
			StringBuffer__shl365((&fullname2), ((unsigned char)47U));
		}
		StringBuffer__shl367((&fullname2), filename1);
		StringBuffer__shl367((&fullname2), S1760);
		StringBuffer_removeAll286((&osname3));
		_addNativeNameTo355((&osname3), StringBuffer_string289((&fullname2)));
		if(_exists358(StringBuffer_string289((&osname3))))
		{
			filename1 = MemoryPool_newString251(zself->program->pool, StringBuffer_string289((&osname3)));
			goto L5;
		}
		p4 = p4->next;
	}
	L5: ;
	StringBuffer_release272((&osname3));
	StringBuffer_release272((&fullname2));
	t7 = filename1;
	return t7;
}

static void Collection_initialize454(Collection12 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CollectionPoolElement190 *)0);
	zself->lastElement = ((CollectionPoolElement190 *)0);
}

static void Collection_add455(Collection12 *zself, CollectionPoolElement190 *ze)
{
	if((char)(zself->lastElement != ((CollectionPoolElement190 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CollectionPoolElement190 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CollectionPoolElement190 *)0);
}

static void CollectionPool_add456(CollectionPool11 *zself, MemoryPool160 *zpool, StructureType104 *zobject)
{
	CollectionPoolElement190 *element1;
	element1 = MemoryPool_new1365(zpool, zobject);
	Collection_add455(((Collection12 *)zself), element1);
}

static void Collection_initialize457(Collection14 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CollectionPoolElement191 *)0);
	zself->lastElement = ((CollectionPoolElement191 *)0);
}

static void Collection_add458(Collection14 *zself, CollectionPoolElement191 *ze)
{
	if((char)(zself->lastElement != ((CollectionPoolElement191 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CollectionPoolElement191 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CollectionPoolElement191 *)0);
}

static void CollectionPool_add459(CollectionPool13 *zself, MemoryPool160 *zpool, Function33 *zobject)
{
	CollectionPoolElement191 *element1;
	element1 = MemoryPool_new1336(zpool, zobject);
	Collection_add458(((Collection14 *)zself), element1);
}

static void Collection_initialize460(Collection16 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CollectionPoolElement192 *)0);
	zself->lastElement = ((CollectionPoolElement192 *)0);
}

static void Collection_add461(Collection16 *zself, CollectionPoolElement192 *ze)
{
	if((char)(zself->lastElement != ((CollectionPoolElement192 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CollectionPoolElement192 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CollectionPoolElement192 *)0);
}

static void CollectionPool_add462(CollectionPool15 *zself, MemoryPool160 *zpool, ExternFunction36 *zobject)
{
	CollectionPoolElement192 *element1;
	element1 = MemoryPool_new1479(zpool, zobject);
	Collection_add461(((Collection16 *)zself), element1);
}

static void Collection_initialize463(Collection18 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CollectionPoolElement193 *)0);
	zself->lastElement = ((CollectionPoolElement193 *)0);
}

static void Collection_add464(Collection18 *zself, CollectionPoolElement193 *ze)
{
	if((char)(zself->lastElement != ((CollectionPoolElement193 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CollectionPoolElement193 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CollectionPoolElement193 *)0);
}

static void CollectionPool_add465(CollectionPool17 *zself, MemoryPool160 *zpool, GlobalVariable97 *zobject)
{
	CollectionPoolElement193 *element1;
	element1 = MemoryPool_new1470(zpool, zobject);
	Collection_add464(((Collection18 *)zself), element1);
}

static void IdentifierDictionary_initialize466(IdentifierDictionary19 *zself, MemoryPool160 *zpool, int zinitialSize)
{
	zself->pool = zpool;
	zself->collisions = 0;
	zself->tally = 0;
	zself->allocated = zinitialSize;
	zself->associations = _allocateArray665(zinitialSize);
	{
		IdentifierAssociation194 *a1;
		a1 = zself->associations;
		{
			int i2;
			i2 = 0;
			while((char)(i2 < zinitialSize))
			{
				{
					{
						IdentifierAssociation194 *a3;
						a3 = (&a1[i2]);
						a3->name = ((void *)0);
					}
				}
				(++i2);
			}
		}
	}
}

static void IdentifierDictionary_release467(IdentifierDictionary19 *zself)
{
	_freeArray675(((void *)zself->associations), zself->allocated);
}

static void *IdentifierDictionary__at468(IdentifierDictionary19 *zself, unsigned char *zstr)
{
	void *t1;
	t1 = IdentifierDictionary_get469(zself, zstr)->name;
	return t1;
}

static IdentifierAssociation194 *IdentifierDictionary_get469(IdentifierDictionary19 *zself, unsigned char *zstr)
{
	IdentifierAssociation194 *t1;
	t1 = IdentifierDictionary_lookup470(zself, zstr, _size325(zstr), _hash324(zstr));
	return t1;
}

static IdentifierAssociation194 *IdentifierDictionary_lookup470(IdentifierDictionary19 *zself, unsigned char *zstr, int zsize, size_t zhash)
{
	int location1;
	int count2;
	location1 = _umod375(((int )zhash), zself->allocated);
	count2 = 1;
	for(;;)
	{
		IdentifierAssociation194 *a3;
		a3 = (&zself->associations[location1]);
		if((char)(a3->name != ((void *)0)))
		{
			if(_isEqual667(a3->name, zstr, zsize))
			{
				IdentifierAssociation194 *t4;
				t4 = a3;
				return t4;
			}
			(++location1);
			if((char)(location1 == zself->allocated))
			{
				location1 = 0;
			}
			(++count2);
		}
		else
		{
			unsigned char *name5;
			IdentifierAssociation194 *t6;
			name5 = MemoryPool_allocateArray671(zself->pool, ((int )(zsize + 1)));
			_copyBytes259(((void *)name5), ((void *)zstr), _toByteSize670(zsize));
			name5[zsize] = ((unsigned char)0U);
			a3->name = ((void *)name5);
			a3->token = 2;
			if((char)(count2 > zself->collisions))
			{
				zself->collisions = count2;
			}
			IdentifierDictionary_increaseTally472(zself);
			t6 = a3;
			return t6;
		}
	}
}

static void IdentifierDictionary_resize471(IdentifierDictionary19 *zself, int zs)
{
	int c1;
	IdentifierAssociation194 *a2;
	c1 = 0;
	a2 = _allocateArray665(zs);
	{
		IdentifierAssociation194 *a3;
		a3 = a2;
		{
			int i4;
			i4 = 0;
			while((char)(i4 < zs))
			{
				{
					{
						IdentifierAssociation194 *e5;
						e5 = (&a3[i4]);
						e5->name = ((void *)0);
					}
				}
				(++i4);
			}
		}
	}
	{
		{
			int self6;
			int i7;
			self6 = zself->allocated;
			i7 = 0;
			while((char)(i7 < self6))
			{
				{
					if(IdentifierDictionary_notEmpty474(zself, i7))
					{
						IdentifierAssociation194 *a8;
						a8 = (&zself->associations[i7]);
						{
							void *name9;
							int token10;
							int count11;
							int location12;
							name9 = a8->name;
							token10 = a8->token;
							count11 = 1;
							location12 = _umod375(((int )_hash324(_string666(name9))), zs);
							while((char)((&a2[location12])->name != ((void *)0)))
							{
								(++location12);
								if((char)(location12 == zs))
								{
									location12 = 0;
								}
								(++count11);
							}
							(&a2[location12])->name = name9;
							(&a2[location12])->token = token10;
							c1 = _max377(count11, c1);
						}
					}
				}
				(++i7);
			}
		}
	}
	_freeArray675(((void *)zself->associations), zself->allocated);
	zself->collisions = c1;
	zself->associations = a2;
	zself->allocated = zs;
}

static void IdentifierDictionary_increaseTally472(IdentifierDictionary19 *zself)
{
	(++zself->tally);
	if((char)((zself->tally * 4) > (zself->allocated * 3)))
	{
		IdentifierDictionary_resize471(zself, ((zself->allocated * 3) / 2));
	}
}

static void *IdentifierDictionary_name473(IdentifierDictionary19 *zself, int zi)
{
	void *t1;
	t1 = (&zself->associations[zi])->name;
	return t1;
}

static char IdentifierDictionary_notEmpty474(IdentifierDictionary19 *zself, int zi)
{
	char t1;
	t1 = (char)(IdentifierDictionary_name473(zself, zi) != ((void *)0));
	return t1;
}

static void Expression_initialize475(Expression21 *zself, int zcode, Type98 *ztype)
{
	zself->code = zcode;
	zself->type = ztype;
	zself->generator = ((void *)0);
}

static unsigned long long Expression_constantInteger476(Expression21 *zself)
{
	unsigned long long t1;
	t1 = Expression_asConstantInteger477(zself)->value;
	return t1;
}

static IntegerExpression20 *Expression_asConstantInteger477(Expression21 *zself)
{
	IntegerExpression20 *t1;
	_assert876((char)(zself->code == 0), S1855);
	t1 = ((IntegerExpression20 *)zself);
	return t1;
}

static String8Expression66 *Expression_asConstantString8478(Expression21 *zself)
{
	String8Expression66 *t1;
	_assert876((char)(zself->code == 1), S1781);
	t1 = ((String8Expression66 *)zself);
	return t1;
}

static String16Expression67 *Expression_asConstantString16479(Expression21 *zself)
{
	String16Expression67 *t1;
	_assert876((char)(zself->code == 2), S1780);
	t1 = ((String16Expression67 *)zself);
	return t1;
}

static StructureExpression68 *Expression_asConstantStructure480(Expression21 *zself)
{
	StructureExpression68 *t1;
	_assert876((char)(zself->code == 3), S1779);
	t1 = ((StructureExpression68 *)zself);
	return t1;
}

static ArrayExpression69 *Expression_asConstantArray481(Expression21 *zself)
{
	ArrayExpression69 *t1;
	_assert876((char)(zself->code == 4), S1778);
	t1 = ((ArrayExpression69 *)zself);
	return t1;
}

static FunctionExpression70 *Expression_asConstantFunction482(Expression21 *zself)
{
	FunctionExpression70 *t1;
	_assert876((char)(zself->code == 5), S1845);
	t1 = ((FunctionExpression70 *)zself);
	return t1;
}

static GlobalExpression71 *Expression_asConstantGlobal483(Expression21 *zself)
{
	GlobalExpression71 *t1;
	_assert876((char)(zself->code == 6), S1844);
	t1 = ((GlobalExpression71 *)zself);
	return t1;
}

static TypeExpression74 *Expression_asType484(Expression21 *zself)
{
	TypeExpression74 *t1;
	t1 = ((TypeExpression74 *)zself);
	return t1;
}

static AttributeExpression84 *Expression_asAttribute485(Expression21 *zself)
{
	AttributeExpression84 *t1;
	t1 = ((AttributeExpression84 *)zself);
	return t1;
}

static UnaryExpression73 *Expression_asUnary486(Expression21 *zself)
{
	UnaryExpression73 *t1;
	t1 = ((UnaryExpression73 *)zself);
	return t1;
}

static BinaryExpression72 *Expression_asBinary487(Expression21 *zself)
{
	BinaryExpression72 *t1;
	t1 = ((BinaryExpression72 *)zself);
	return t1;
}

static CondExpression82 *Expression_asCond488(Expression21 *zself)
{
	CondExpression82 *t1;
	t1 = ((CondExpression82 *)zself);
	return t1;
}

static FunctionCallExpression76 *Expression_asFunctionCall489(Expression21 *zself)
{
	FunctionCallExpression76 *t1;
	t1 = ((FunctionCallExpression76 *)zself);
	return t1;
}

static ExternFunctionCallExpression77 *Expression_asExternFunctionCall490(Expression21 *zself)
{
	ExternFunctionCallExpression77 *t1;
	t1 = ((ExternFunctionCallExpression77 *)zself);
	return t1;
}

static ParameterExpression79 *Expression_asParameter491(Expression21 *zself)
{
	ParameterExpression79 *t1;
	t1 = ((ParameterExpression79 *)zself);
	return t1;
}

static LocalVariableExpression80 *Expression_asLocalVariable492(Expression21 *zself)
{
	LocalVariableExpression80 *t1;
	t1 = ((LocalVariableExpression80 *)zself);
	return t1;
}

static GlobalVariableExpression81 *Expression_asGlobalVariable493(Expression21 *zself)
{
	GlobalVariableExpression81 *t1;
	t1 = ((GlobalVariableExpression81 *)zself);
	return t1;
}

static SelectExpression87 *Expression_asSelect494(Expression21 *zself)
{
	SelectExpression87 *t1;
	t1 = ((SelectExpression87 *)zself);
	return t1;
}

static MacroCallExpression85 *Expression_asMacroCall495(Expression21 *zself)
{
	MacroCallExpression85 *t1;
	t1 = ((MacroCallExpression85 *)zself);
	return t1;
}

static VargsEachExpression83 *Expression_asVargsEach496(Expression21 *zself)
{
	VargsEachExpression83 *t1;
	t1 = ((VargsEachExpression83 *)zself);
	return t1;
}

static PointerCallExpression78 *Expression_asPointerCall497(Expression21 *zself)
{
	PointerCallExpression78 *t1;
	t1 = ((PointerCallExpression78 *)zself);
	return t1;
}

static VargsExpression88 *Expression_asVargs498(Expression21 *zself)
{
	VargsExpression88 *t1;
	t1 = ((VargsExpression88 *)zself);
	return t1;
}

static CompositeExpression75 *Expression_asComposite499(Expression21 *zself)
{
	CompositeExpression75 *t1;
	t1 = ((CompositeExpression75 *)zself);
	return t1;
}

static void Expression_addToStringBuffer500(Expression21 *zself, StringBuffer2 *zsb)
{
	switch( zself->code )
	{
	case 0:
	{
		StringBuffer__shl1276(zsb, Expression_asConstantInteger477(zself));
	}
	break;
	case 1:
	{
		StringBuffer__shl1277(zsb, Expression_asConstantString8478(zself));
	}
	break;
	case 2:
	{
		StringBuffer__shl1278(zsb, Expression_asConstantString16479(zself));
	}
	break;
	case 3:
	{
		StringBuffer__shl1280(zsb, Expression_asConstantStructure480(zself));
	}
	break;
	case 4:
	{
		StringBuffer__shl1283(zsb, Expression_asConstantArray481(zself));
	}
	break;
	case 5:
	{
		StringBuffer__shl1285(zsb, Expression_asConstantFunction482(zself));
	}
	break;
	case 6:
	{
		StringBuffer__shl1287(zsb, Expression_asConstantGlobal483(zself));
	}
	break;
	case 7:
	{
		StringBuffer__shl1288(zsb, Expression_asType484(zself));
	}
	break;
	default:
	{
		StringBuffer__shl365(zsb, ((unsigned char)63U));
	}
	}
}

static char Expression_isConstant501(Expression21 *zself)
{
	char t1;
	t1 = (char)(zself->code <= 6);
	return t1;
}

static char Expression_isConstantInteger502(Expression21 *zself)
{
	char t1;
	t1 = (char)(zself->code == 0);
	return t1;
}

static char Expression_isLocalVariable503(Expression21 *zself)
{
	char t1;
	t1 = (char)(zself->code == 11);
	return t1;
}

static char Expression_isParameter504(Expression21 *zself)
{
	char t1;
	t1 = (char)(zself->code == 10);
	return t1;
}

static char Expression_isType505(Expression21 *zself)
{
	char t1;
	t1 = (char)(zself->code == 7);
	return t1;
}

static char Expression_isConstantEqual506(Expression21 *zself, Expression21 *zother)
{
	char t10;
	if((char)(zself->code != zother->code))
	{
		char t1;
		t1 = 0;
		return t1;
	}
	switch( zself->code )
	{
	case 0:
	{
		char t2;
		t2 = IntegerExpression_isEqual515(Expression_asConstantInteger477(zself), Expression_asConstantInteger477(zother));
		return t2;
	}
	break;
	case 1:
	{
		char t3;
		t3 = (char)(zself == zother);
		return t3;
	}
	break;
	case 2:
	{
		char t4;
		t4 = (char)(zself == zother);
		return t4;
	}
	break;
	case 3:
	{
		char t5;
		t5 = StructureExpression_isEqual1055(Expression_asConstantStructure480(zself), Expression_asConstantStructure480(zother));
		return t5;
	}
	break;
	case 4:
	{
		char t6;
		t6 = ArrayExpression_isEqual1058(Expression_asConstantArray481(zself), Expression_asConstantArray481(zother));
		return t6;
	}
	break;
	case 5:
	{
		char t7;
		t7 = (char)(Expression_asConstantFunction482(zself)->value == Expression_asConstantFunction482(zother)->value);
		return t7;
	}
	break;
	case 6:
	{
		char t8;
		t8 = (char)(zself == zother);
		return t8;
	}
	break;
	case 7:
	{
		char t9;
		t9 = (char)(Expression_asType484(zself)->type == Expression_asType484(zother)->type);
		return t9;
	}
	break;
	}
	t10 = 0;
	return t10;
}

static char Expression_isLvalue507(Expression21 *zself)
{
	switch( zself->code )
	{
	case 11:
	{
		char t1;
		t1 = Type_isSimple553(Expression_asLocalVariable492(zself)->variable->storageType);
		return t1;
	}
	break;
	case 12:
	{
		char t2;
		t2 = 1;
		return t2;
	}
	break;
	case 16:
	{
		char t3;
		t3 = Type_isSimple553(Expression_asAttribute485(zself)->attribute->storageType);
		return t3;
	}
	break;
	case 68:
	{
		Expression21 *e4;
		Type98 *t5;
		char t6;
		e4 = Expression_asUnary486(zself)->argument;
		t5 = Type_asPointer533(e4->type)->target;
		t6 = Type_isSimple553(t5);
		return t6;
	}
	break;
	case 69:
	{
		Expression21 *e7;
		Type98 *t8;
		char t9;
		e7 = Expression_asBinary487(zself)->argument1;
		t8 = Type_asArray534(Type_asPointer533(e7->type)->target)->cellType;
		t9 = Type_isSimple553(t8);
		return t9;
	}
	break;
	default:
	{
		char t10;
		t10 = 0;
		return t10;
	}
	}
}

static char Expression_isVoid508(Expression21 *zself)
{
	char t1;
	t1 = (char)(zself->type->code == 3);
	return t1;
}

static char Expression_isComposite509(Expression21 *zself)
{
	char t1;
	t1 = (char)(zself->type->code == 4);
	return t1;
}

static char Expression_isVargs510(Expression21 *zself)
{
	char t1;
	t1 = (char)(zself->code == 19);
	return t1;
}

static void IntegerExpression_initialize511(IntegerExpression20 *zself, unsigned long long zvalue, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 0, ztype);
	zself->value = zvalue;
}

static unsigned int IntegerExpression_unsignedValue512(IntegerExpression20 *zself)
{
	unsigned int t1;
	t1 = ((unsigned int )zself->value);
	return t1;
}

static unsigned int IntegerExpression_hash513(IntegerExpression20 *zself)
{
	unsigned int t1;
	t1 = ((unsigned int )zself->value);
	return t1;
}

static void IntegerExpression_addToStringBuffer514(IntegerExpression20 *zself, StringBuffer2 *zsb)
{
	if(Type_isBoolean547(((Expression21 *)zself)->type))
	{
		StringBuffer__shl367(zsb, ((char)(zself->value != 0UL)?S1783:S1782));
	}
	else
	{
		StringBuffer__shl1207(zsb, ((unsigned int )zself->value));
	}
}

static char IntegerExpression_isEqual515(IntegerExpression20 *zself, IntegerExpression20 *zother)
{
	char t1;
	t1 = ((char)(zself->value == zother->value) && (char)(((Expression21 *)zself)->type == ((Expression21 *)zother)->type));
	return t1;
}

static void String8Expression_initialize516(String8Expression66 *zself, unsigned char *zvalue, Program5 *zprogram, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 1, ztype);
	zself->value = zvalue;
	zself->next = zprogram->string8Constants;
	zprogram->string8Constants = zself;
}

static size_t String8Expression_hashKey517(String8Expression66 *zself)
{
	size_t t1;
	t1 = (_hash324(zself->value) + Type_hash521(((Expression21 *)zself)->type));
	return t1;
}

static void String8Expression_addToStringBuffer518(String8Expression66 *zself, StringBuffer2 *zsb)
{
	StringBuffer__shl365(zsb, ((unsigned char)34U));
	StringBuffer__shl862(zsb, zself->value);
	StringBuffer__shl365(zsb, ((unsigned char)34U));
}

static char String8Expression_isKeyEqual519(String8Expression66 *zself, String8Expression66 *zother)
{
	char t1;
	t1 = ((char)(((Expression21 *)zself)->type == ((Expression21 *)zother)->type) && _isEqual327(zself->value, zother->value));
	return t1;
}

static void Type_initialize520(Type98 *zself, Scope8 *zscope, Type98 *zparent, int zcode, size_t zsize, size_t zalign)
{
	Module7 *module1;
	module1 = zscope->module;
	Scope_initialize442((&zself->scope), zscope, module1, module1->program->pool, 64);
	zself->code = zcode;
	zself->state = ((unsigned char)0U);
	zself->source = ((ASTNode110 *)0);
	zself->size = zsize;
	zself->align = zalign;
	zself->parent = zparent;
	zself->subType = 0;
	zself->cachedMeta = ((MetaType99 *)0);
	zself->cachedPointer = ((PointerType101 *)0);
	zself->cachedExpression = ((Expression21 *)0);
	zself->definitions = ((DefinitionDictionary9 *)0);
	zself->symbols = ((SymbolDictionary27 *)0);
	zself->arguments = ((ExpressionList61 *)0);
	zself->generator = ((void *)0);
}

static size_t Type_hash521(Type98 *zself)
{
	size_t t1;
	t1 = ((size_t )zself);
	return t1;
}

static void Type_setParent522(Type98 *zself, Type98 *zparent)
{
	if((char)(zparent == ((Type98 *)0)))
	{
		return;
	}
	zself->parent = zparent;
	if((char)(zself->cachedMeta != ((MetaType99 *)0)))
	{
		Type_setParent522(((Type98 *)zself->cachedMeta), ((Type98 *)Type_metaType523(zparent)));
	}
	if((char)(zself->cachedPointer != ((PointerType101 *)0)))
	{
		Type_setParent522(((Type98 *)zself->cachedPointer), ((Type98 *)Type_pointer524(zparent)));
	}
}

static MetaType99 *Type_metaType523(Type98 *zself)
{
	MetaType99 *t2;
	if((char)(zself->cachedMeta == ((MetaType99 *)0)))
	{
		MemoryPool160 *pool1;
		pool1 = Type_module527(zself)->program->pool;
		zself->cachedMeta = MemoryPool_new1658(pool1, zself);
	}
	t2 = zself->cachedMeta;
	return t2;
}

static PointerType101 *Type_pointer524(Type98 *zself)
{
	PointerType101 *t3;
	if((char)(zself->cachedPointer == ((PointerType101 *)0)))
	{
		Module7 *module1;
		Type98 *parent2;
		module1 = Type_module527(zself);
		if((char)(zself->parent != ((Type98 *)0)))
		{
			parent2 = ((Type98 *)Type_pointer524(zself->parent));
		}
		else
		{
			parent2 = ((Type98 *)module1->program->anyType);
		}
		zself->cachedPointer = MemoryPool_new1660(module1->program->pool, (&zself->scope), zself, parent2, 0);
	}
	t3 = zself->cachedPointer;
	return t3;
}

static Type98 *Type_effective525(Type98 *zself)
{
	Type98 *t2;
	if((!Type_isSimple553(zself)))
	{
		Type98 *t1;
		t1 = ((Type98 *)Type_pointer524(zself));
		return t1;
	}
	t2 = zself;
	return t2;
}

static Expression21 *Type_expression526(Type98 *zself)
{
	Expression21 *e1;
	Expression21 *t3;
	e1 = zself->cachedExpression;
	if((char)(e1 == ((Expression21 *)0)))
	{
		MemoryPool160 *pool2;
		pool2 = Type_module527(zself)->program->pool;
		e1 = ((Expression21 *)MemoryPool_new877(pool2, zself));
		zself->cachedExpression = e1;
	}
	t3 = e1;
	return t3;
}

static Module7 *Type_module527(Type98 *zself)
{
	Module7 *t1;
	t1 = (&zself->scope)->module;
	return t1;
}

static Definition32 *Type_addDefinition528(Type98 *zself, Definition32 *zdefinition, unsigned char zvisibility)
{
	Definition32 *t3;
	if((char)(zself->definitions == ((DefinitionDictionary9 *)0)))
	{
		Program5 *program1;
		MemoryPool160 *pool2;
		program1 = Type_module527(zself)->program;
		pool2 = program1->pool;
		zself->definitions = MemoryPool_new707(pool2, pool2, 256);
	}
	t3 = DefinitionDictionary_add447(zself->definitions, zdefinition, zvisibility);
	return t3;
}

static Symbol29 *Type_addSymbol529(Type98 *zself, Symbol29 *zsymbol)
{
	Symbol29 *t3;
	if((char)(zself->symbols == ((SymbolDictionary27 *)0)))
	{
		Program5 *program1;
		MemoryPool160 *pool2;
		program1 = Type_module527(zself)->program;
		pool2 = program1->pool;
		zself->symbols = MemoryPool_new1493(pool2, pool2, 256);
	}
	t3 = SymbolDictionary_add1488(zself->symbols, zsymbol);
	return t3;
}

static char Type_match530(Type98 *zself, Type98 *zother)
{
	Type98 *type1;
	type1 = zself;
	for(;;)
	{
		if((char)(type1 == zother))
		{
			char t2;
			t2 = 1;
			return t2;
		}
		if((char)(type1->code == 1))
		{
			char t3;
			t3 = ((char)(zother->code == 1) || (char)(zother->code == 9));
			return t3;
		}
		else
		{
			if(type1->subType)
			{
				type1 = type1->parent;
			}
			else
			{
				if(zother->subType)
				{
					char t4;
					t4 = 0;
					return t4;
				}
				else
				{
					if(((char)(type1->code == 12) && (char)(zother->code == 12)))
					{
						char t5;
						t5 = FunctionType_match595(Type_asFunction537(type1), Type_asFunction537(zother));
						return t5;
					}
					else
					{
						if(((char)(type1->code == 11) && (char)(zother->code == 11)))
						{
							char t6;
							t6 = ArrayType_match583(Type_asArray534(type1), Type_asArray534(zother));
							return t6;
						}
						else
						{
							if(((char)(type1->code == 9) && (char)(zother->code == 9)))
							{
								char t7;
								t7 = Type_match530(Type_asPointer533(type1)->target, Type_asPointer533(zother)->target);
								return t7;
							}
							else
							{
								type1 = type1->parent;
								if((char)(type1 == ((Type98 *)0)))
								{
									char t8;
									t8 = 0;
									return t8;
								}
							}
						}
					}
				}
			}
		}
	}
}

static Type98 *Type_common531(Type98 *zself, Type98 *zother)
{
	Type98 *t18;
	if(Type_match530(zself, zother))
	{
		Type98 *t1;
		t1 = zother;
		return t1;
	}
	else
	{
		if(Type_match530(zother, zself))
		{
			Type98 *t2;
			t2 = zself;
			return t2;
		}
	}
	switch( zself->code )
	{
	case 9:
	{
		Type98 *t3;
		Type98 *t6;
		if((char)(zother->code != 9))
		{
			Type98 *t4;
			t4 = ((Type98 *)0);
			return t4;
		}
		t3 = Type_common531(Type_asPointer533(zself)->target, Type_asPointer533(zother)->target);
		if((char)(t3 == ((Type98 *)0)))
		{
			Type98 *t5;
			t5 = ((Type98 *)0);
			return t5;
		}
		t6 = ((Type98 *)Type_pointer524(t3));
		return t6;
	}
	break;
	case 10:
	{
		StructureType104 *t7;
		Type98 *t10;
		if((char)(zother->code != 10))
		{
			Type98 *t8;
			t8 = ((Type98 *)0);
			return t8;
		}
		t7 = Type_asStructure535(zother);
		while((char)(t7 != ((StructureType104 *)0)))
		{
			if(Type_match530(zself, ((Type98 *)t7)))
			{
				Type98 *t9;
				t9 = ((Type98 *)t7);
				return t9;
			}
			t7 = t7->parentStructure;
		}
		t10 = ((Type98 *)0);
		return t10;
	}
	break;
	case 11:
	{
		size_t n111;
		size_t n212;
		if((char)(zother->code != 11))
		{
			Type98 *t13;
			t13 = ((Type98 *)0);
			return t13;
		}
		if((char)(Type_asArray534(zself)->cellType != Type_asArray534(zother)->cellType))
		{
			Type98 *t14;
			t14 = ((Type98 *)0);
			return t14;
		}
		n111 = Type_asArray534(zself)->arraySize;
		n212 = Type_asArray534(zother)->arraySize;
		if((char)(n111 == n212))
		{
			Type98 *t15;
			t15 = zself;
			return t15;
		}
		else
		{
			if((char)(n111 != ((size_t)0x0000000000000000U)))
			{
				Type98 *t16;
				t16 = zself->parent;
				return t16;
			}
			else
			{
				Type98 *t17;
				t17 = zother->parent;
				return t17;
			}
		}
	}
	break;
	}
	t18 = ((Type98 *)0);
	return t18;
}

static BuiltinType100 *Type_asBuiltin532(Type98 *zself)
{
	BuiltinType100 *t1;
	t1 = ((BuiltinType100 *)zself);
	return t1;
}

static PointerType101 *Type_asPointer533(Type98 *zself)
{
	PointerType101 *t1;
	_assert876((char)(zself->code == 9), S1917);
	t1 = ((PointerType101 *)zself);
	return t1;
}

static ArrayType102 *Type_asArray534(Type98 *zself)
{
	ArrayType102 *t1;
	_assert876((char)(zself->code == 11), S1807);
	t1 = ((ArrayType102 *)zself);
	return t1;
}

static StructureType104 *Type_asStructure535(Type98 *zself)
{
	StructureType104 *t1;
	_assert876((char)(zself->code == 10), S1916);
	t1 = ((StructureType104 *)zself);
	return t1;
}

static MetaType99 *Type_asMeta536(Type98 *zself)
{
	MetaType99 *t1;
	_assert876((char)(zself->code == 0), S1955);
	t1 = ((MetaType99 *)zself);
	return t1;
}

static FunctionType103 *Type_asFunction537(Type98 *zself)
{
	FunctionType103 *t1;
	_assert876((char)(zself->code == 12), S1841);
	t1 = ((FunctionType103 *)zself);
	return t1;
}

static char Type_checkIntegerLimits538(Type98 *zself, unsigned long long zn)
{
	if(Type_isSigned552(zself))
	{
		switch( zself->size )
		{
		case ((size_t)0x0000000000000001U):
		{
			char t1;
			t1 = (char)(((unsigned long long )zn) <= ((unsigned long long )127UL));
			return t1;
		}
		break;
		case ((size_t)0x0000000000000002U):
		{
			char t2;
			t2 = (char)(((unsigned long long )zn) <= ((unsigned long long )32767UL));
			return t2;
		}
		break;
		case ((size_t)0x0000000000000004U):
		{
			char t3;
			t3 = (char)(((unsigned long long )zn) <= ((unsigned long long )2147483647UL));
			return t3;
		}
		break;
		default:
		{
			char t4;
			t4 = 1;
			return t4;
		}
		}
	}
	else
	{
		switch( zself->size )
		{
		case ((size_t)0x0000000000000001U):
		{
			char t5;
			t5 = (char)(((unsigned long long )zn) <= ((unsigned long long )255UL));
			return t5;
		}
		break;
		case ((size_t)0x0000000000000002U):
		{
			char t6;
			t6 = (char)(((unsigned long long )zn) <= ((unsigned long long )65535UL));
			return t6;
		}
		break;
		case ((size_t)0x0000000000000004U):
		{
			char t7;
			t7 = (char)(((unsigned long long )zn) <= ((unsigned long long )4294967295UL));
			return t7;
		}
		break;
		default:
		{
			char t8;
			t8 = 1;
			return t8;
		}
		}
	}
}

static char Type_checkNegativeIntegerLimits539(Type98 *zself, unsigned long long zn)
{
	if((Type_isSigned552(zself) || (char)(zself->code == 8)))
	{
		switch( zself->size )
		{
		case ((size_t)0x0000000000000001U):
		{
			char t1;
			t1 = (char)(((unsigned long long )zn) <= ((unsigned long long )128UL));
			return t1;
		}
		break;
		case ((size_t)0x0000000000000002U):
		{
			char t2;
			t2 = (char)(((unsigned long long )zn) <= ((unsigned long long )32768UL));
			return t2;
		}
		break;
		case ((size_t)0x0000000000000004U):
		{
			char t3;
			t3 = (char)(((unsigned long long )zn) <= ((unsigned long long )2147483648UL));
			return t3;
		}
		break;
		default:
		{
			char t4;
			t4 = 1;
			return t4;
		}
		}
	}
	else
	{
		char t5;
		t5 = (char)(zn == 0UL);
		return t5;
	}
}

static unsigned long long Type_evaluateIntegerBinaryOperation540(Type98 *zself, unsigned long long zleft, unsigned long long zright, int zop)
{
	unsigned long long t18;
	switch( zop )
	{
	case 23:
	{
		unsigned long long t1;
		t1 = (zleft + zright);
		return t1;
	}
	break;
	case 24:
	{
		unsigned long long t2;
		t2 = (zleft - zright);
		return t2;
	}
	break;
	case 36:
	{
		unsigned long long t3;
		t3 = (zleft & zright);
		return t3;
	}
	break;
	case 37:
	{
		unsigned long long t4;
		t4 = (zleft | zright);
		return t4;
	}
	break;
	case 38:
	{
		unsigned long long t5;
		t5 = (zleft ^ zright);
		return t5;
	}
	break;
	case 25:
	{
		unsigned long long t6;
		t6 = ((unsigned long long )(((long long )zleft) * ((long long )zright)));
		return t6;
	}
	break;
	case 26:
	{
		unsigned long long t7;
		t7 = (zleft * zright);
		return t7;
	}
	break;
	case 27:
	{
		unsigned long long t8;
		t8 = ((unsigned long long )(((long long )zleft) / ((long long )zright)));
		return t8;
	}
	break;
	case 28:
	{
		unsigned long long t9;
		t9 = (zleft / zright);
		return t9;
	}
	break;
	case 29:
	{
		unsigned long long t10;
		t10 = ((unsigned long long )(((long long )zleft) % ((long long )zright)));
		return t10;
	}
	break;
	case 30:
	{
		unsigned long long t11;
		t11 = (zleft % zright);
		return t11;
	}
	break;
	case 33:
	{
		unsigned long long t12;
		t12 = (zleft << ((unsigned char )zright));
		return t12;
	}
	break;
	case 34:
	{
		switch( zself->size )
		{
		case ((size_t)0x0000000000000001U):
		{
			unsigned long long t13;
			t13 = ((unsigned long long )(((char )zleft) >> ((unsigned char )zright)));
			return t13;
		}
		break;
		case ((size_t)0x0000000000000002U):
		{
			unsigned long long t14;
			t14 = ((unsigned long long )(((short )zleft) >> ((unsigned char )zright)));
			return t14;
		}
		break;
		case ((size_t)0x0000000000000004U):
		{
			unsigned long long t15;
			t15 = ((unsigned long long )(((int )zleft) >> ((unsigned char )zright)));
			return t15;
		}
		break;
		case ((size_t)0x0000000000000008U):
		{
			unsigned long long t16;
			t16 = ((unsigned long long )(((long long )zleft) >> ((unsigned char )zright)));
			return t16;
		}
		break;
		}
	}
	break;
	case 35:
	{
		unsigned long long t17;
		t17 = (zleft >> ((unsigned char )zright));
		return t17;
	}
	break;
	}
	t18 = 0UL;
	return t18;
}

static char Type_evaluateIntegerBinaryComparison541(Type98 *zself, unsigned long long zleft, unsigned long long zright, int zop)
{
	char t11;
	switch( zop )
	{
	case 41:
	{
		char t1;
		t1 = (char)(zleft == zright);
		return t1;
	}
	break;
	case 42:
	{
		char t2;
		t2 = (char)(zleft != zright);
		return t2;
	}
	break;
	case 43:
	{
		char t3;
		t3 = (char)(((long long )zleft) <= ((long long )zright));
		return t3;
	}
	break;
	case 44:
	{
		char t4;
		t4 = (char)(((unsigned long long )zleft) <= ((unsigned long long )zright));
		return t4;
	}
	break;
	case 47:
	{
		char t5;
		t5 = (char)(((long long )zleft) >= ((long long )zright));
		return t5;
	}
	break;
	case 48:
	{
		char t6;
		t6 = (char)(((unsigned long long )zleft) >= ((unsigned long long )zright));
		return t6;
	}
	break;
	case 45:
	{
		char t7;
		t7 = (char)(((long long )zleft) < ((long long )zright));
		return t7;
	}
	break;
	case 46:
	{
		char t8;
		t8 = (char)(((unsigned long long )zleft) < ((unsigned long long )zright));
		return t8;
	}
	break;
	case 49:
	{
		char t9;
		t9 = (char)(((long long )zleft) > ((long long )zright));
		return t9;
	}
	break;
	case 50:
	{
		char t10;
		t10 = (char)(((unsigned long long )zleft) > ((unsigned long long )zright));
		return t10;
	}
	break;
	}
	t11 = 0;
	return t11;
}

static unsigned long long Type_evaluateIntegerUnaryOperation542(Type98 *zself, unsigned long long zn, int zop)
{
	unsigned long long t11;
	switch( zop )
	{
	case 32:
	{
		unsigned long long t1;
		t1 = zn;
		return t1;
	}
	break;
	case 31:
	{
		unsigned long long t2;
		t2 = (-zn);
		return t2;
	}
	break;
	case 39:
	{
		if(Type_isSigned552(zself))
		{
			switch( zself->size )
			{
			case ((size_t)0x0000000000000001U):
			{
				unsigned long long t3;
				t3 = ((unsigned long long )((long long )((char )(zn ^ 255UL))));
				return t3;
			}
			break;
			case ((size_t)0x0000000000000002U):
			{
				unsigned long long t4;
				t4 = ((unsigned long long )((long long )((short )(zn ^ 65535UL))));
				return t4;
			}
			break;
			case ((size_t)0x0000000000000004U):
			{
				unsigned long long t5;
				t5 = ((unsigned long long )((long long )((int )(zn ^ 4294967295UL))));
				return t5;
			}
			break;
			default:
			{
				unsigned long long t6;
				t6 = (~zn);
				return t6;
			}
			}
		}
		else
		{
			switch( zself->size )
			{
			case ((size_t)0x0000000000000001U):
			{
				unsigned long long t7;
				t7 = (zn ^ 255UL);
				return t7;
			}
			break;
			case ((size_t)0x0000000000000002U):
			{
				unsigned long long t8;
				t8 = (zn ^ 65535UL);
				return t8;
			}
			break;
			case ((size_t)0x0000000000000004U):
			{
				unsigned long long t9;
				t9 = (zn ^ 4294967295UL);
				return t9;
			}
			break;
			default:
			{
				unsigned long long t10;
				t10 = (~zn);
				return t10;
			}
			}
		}
	}
	break;
	}
	t11 = 0UL;
	return t11;
}

static StringBuffer2 *Type_addToStringBuffer543(Type98 *zself, StringBuffer2 *zstream)
{
	StringBuffer2 *t4;
	switch( zself->code )
	{
	case 11:
	{
		StringBuffer__shl365(zstream, ((unsigned char)91U));
		if((char)(Type_asArray534(zself)->arraySize != ((size_t)0x0000000000000000U)))
		{
			StringBuffer__shl1099(zstream, Type_asArray534(zself)->arraySize);
		}
		StringBuffer__shl367(zstream, S1790);
		StringBuffer__shl925(zstream, Type_asArray534(zself)->cellType);
	}
	break;
	case 9:
	{
		PointerType101 *pointer1;
		Type98 *target2;
		pointer1 = Type_asPointer533(zself);
		target2 = pointer1->target;
		if((char)(pointer1->name != ((void *)0)))
		{
			StringBuffer__shl861(zstream, pointer1->name);
		}
		else
		{
			if((char)(target2->code == 12))
			{
				StringBuffer__shl1273(zstream, Type_asFunction537(target2));
			}
			else
			{
				StringBuffer__shl365(zstream, ((unsigned char)42U));
				StringBuffer__shl925(zstream, target2);
			}
		}
	}
	break;
	case 0:
	{
		StringBuffer__shl367(zstream, S1784);
		StringBuffer__shl925(zstream, Type_asMeta536(zself)->type);
		StringBuffer__shl367(zstream, S1872);
	}
	break;
	case 10:
	{
		StructureType104 *structure3;
		structure3 = Type_asStructure535(zself);
		StringBuffer__shl861(zstream, structure3->name);
		Type_addArguments544(zself, zstream);
	}
	break;
	case 2:
	case 1:
	case 5:
	case 6:
	case 7:
	case 8:
	case 3:
	case 4:
	{
		StringBuffer__shl861(zstream, Type_asBuiltin532(zself)->name);
		Type_addArguments544(zself, zstream);
	}
	break;
	}
	t4 = zstream;
	return t4;
}

static void Type_addArguments544(Type98 *zself, StringBuffer2 *zstream)
{
	if(Type_hasArguments557(zself))
	{
		char comma1;
		StringBuffer__shl365(zstream, ((unsigned char)40U));
		comma1 = 0;
		{
			if((char)(zself->arguments != ((ExpressionList61 *)0)))
			{
				{
					CollectionPool62 *self2;
					self2 = ((CollectionPool62 *)zself->arguments);
					{
						Collection63 *self3;
						CollectionPoolElement205 *e4;
						self3 = ((Collection63 *)self2);
						e4 = self3->firstElement;
						while((char)(e4 != ((CollectionPoolElement205 *)0)))
						{
							{
								{
									Expression21 *a5;
									a5 = e4->object;
									{
										if(comma1)
										{
											StringBuffer__shl365(zstream, ((unsigned char)44U));
										}
										comma1 = 1;
										StringBuffer__shl1275(zstream, a5);
									}
								}
							}
							e4 = e4->nextSibling;
						}
					}
				}
			}
		}
		StringBuffer__shl365(zstream, ((unsigned char)41U));
	}
}

static DefinitionItem189 *Type_findDefinition545(Type98 *zself, void *zname)
{
	DefinitionItem189 *t2;
	if((char)(zself->definitions == ((DefinitionDictionary9 *)0)))
	{
		DefinitionItem189 *t1;
		t1 = ((DefinitionItem189 *)0);
		return t1;
	}
	t2 = DefinitionDictionary_findDefinition448(zself->definitions, zname);
	return t2;
}

static Symbol29 *Type_findSymbol546(Type98 *zself, void *zname)
{
	Symbol29 *t2;
	if((char)(zself->symbols == ((SymbolDictionary27 *)0)))
	{
		Symbol29 *t1;
		t1 = ((Symbol29 *)0);
		return t1;
	}
	t2 = SymbolDictionary_find1489(zself->symbols, zname);
	return t2;
}

static char Type_isBoolean547(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->code == 5);
	return t1;
}

static char Type_isPointer548(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->code == 9);
	return t1;
}

static char Type_isStructure549(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->code == 10);
	return t1;
}

static char Type_isArray550(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->code == 11);
	return t1;
}

static char Type_isInteger551(Type98 *zself)
{
	int code1;
	char t2;
	code1 = zself->code;
	t2 = (((char)(code1 == 6) || (char)(code1 == 7)) || (char)(code1 == 8));
	return t2;
}

static char Type_isSigned552(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->code == 6);
	return t1;
}

static char Type_isSimple553(Type98 *zself)
{
	int code1;
	char t2;
	code1 = zself->code;
	t2 = (((((char)(code1 == 5) || (char)(code1 == 6)) || (char)(code1 == 7)) || (char)(code1 == 8)) || (char)(code1 == 9));
	return t2;
}

static char Type_isMeta554(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->code == 0);
	return t1;
}

static char Type_isFunction555(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->code == 12);
	return t1;
}

static char Type_hasSize556(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->size != ((size_t)0xFFFFFFFFFFFFFFFFU));
	return t1;
}

static char Type_hasArguments557(Type98 *zself)
{
	char t1;
	t1 = (char)(zself->arguments != ((ExpressionList61 *)0));
	return t1;
}

static char Type_matchArguments558(Type98 *zself, ExpressionList61 *zvalues)
{
	char t10;
	if((char)(((Collection63 *)zself->arguments)->size != ((Collection63 *)zvalues)->size))
	{
		char t1;
		t1 = 0;
		return t1;
	}
	{
		ExpressionList61 *iterable22;
		CollectionPoolElement205 *e23;
		iterable22 = zself->arguments;
		e23 = ((Collection63 *)iterable22)->firstElement;
		{
			CollectionPool62 *self4;
			self4 = ((CollectionPool62 *)zvalues);
			{
				Collection63 *self5;
				CollectionPoolElement205 *e6;
				self5 = ((Collection63 *)self4);
				e6 = self5->firstElement;
				while((char)(e6 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *v17;
							Expression21 *v28;
							v17 = e6->object;
							v28 = CollectionPool_elementValue1237(((CollectionPool62 *)iterable22), e23);
							{
								if((!Expression_isConstantEqual506(v17, v28)))
								{
									char t9;
									t9 = 0;
									return t9;
								}
							}
							e23 = Collection_nextElement1238(((Collection63 *)iterable22), e23);
						}
					}
					e6 = e6->nextSibling;
				}
			}
		}
	}
	t10 = 1;
	return t10;
}

static char Type_mustCheck559(Type98 *zself)
{
	Type98 *t1;
	t1 = zself;
	for(;;)
	{
		if((char)(t1->source != ((ASTNode110 *)0)))
		{
			if(((ASTElement109 *)t1->source)->directives->mustCheck)
			{
				char t2;
				t2 = 1;
				return t2;
			}
		}
		if(Type_isPointer548(t1))
		{
			if(Type_mustCheck559(Type_asPointer533(t1)->target))
			{
				char t3;
				t3 = 1;
				return t3;
			}
		}
		t1 = t1->parent;
		if((char)(t1 == ((Type98 *)0)))
		{
			char t4;
			t4 = 0;
			return t4;
		}
	}
}

static void Dictionary_initialize560(Dictionary22 *zself)
{
	zself->collisions = 0;
	zself->tally = 0;
	zself->allocated = 10;
	zself->associations = _allocateArray715(10);
	{
		{
			int self1;
			int i2;
			self1 = zself->allocated;
			i2 = 0;
			while((char)(i2 < self1))
			{
				{
					{
						Association195 *a3;
						a3 = (&zself->associations[i2]);
						a3->key = ((String8Expression66 *)0);
					}
				}
				(++i2);
			}
		}
	}
}

static void Dictionary_release561(Dictionary22 *zself)
{
	_freeArray1095(((void *)zself->associations), zself->allocated);
}

static String8Expression66 *Dictionary_add562(Dictionary22 *zself, String8Expression66 *zk, String8Expression66 *zv)
{
	int location1;
	int count2;
	location1 = Dictionary_slot568(zself, zk);
	count2 = 1;
	for(;;)
	{
		Association195 *a3;
		a3 = (&zself->associations[location1]);
		if(Association_notEmpty1505(a3))
		{
			if(Dictionary_isEqual567(zself, zk, a3->key))
			{
				String8Expression66 *old4;
				String8Expression66 *t5;
				old4 = a3->value;
				a3->key = zk;
				a3->value = zv;
				t5 = old4;
				return t5;
			}
			else
			{
				(++location1);
				if((char)(location1 == zself->allocated))
				{
					location1 = 0;
				}
				(++count2);
			}
		}
		else
		{
			String8Expression66 *t6;
			a3->key = zk;
			a3->value = zv;
			if((char)(count2 > zself->collisions))
			{
				zself->collisions = count2;
			}
			Dictionary_increaseTally565(zself);
			t6 = ((String8Expression66 *)0);
			return t6;
		}
	}
}

static String8Expression66 *Dictionary__at563(Dictionary22 *zself, String8Expression66 *zk)
{
	int location1;
	int count2;
	String8Expression66 *t7;
	location1 = Dictionary_slot568(zself, zk);
	count2 = zself->collisions;
	while((char)(count2 > 0))
	{
		Association195 *a5;
		a5 = (&zself->associations[location1]);
		if(Association_isEmpty714(a5))
		{
			goto L3;
		}
		else
		{
			if(Dictionary_isEqual567(zself, a5->key, zk))
			{
				String8Expression66 *t6;
				t6 = a5->value;
				return t6;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(--count2);
	}
	L3: ;
	t7 = ((String8Expression66 *)0);
	return t7;
}

static void Dictionary_resize564(Dictionary22 *zself, int zs)
{
	int c1;
	Association195 *a2;
	c1 = 0;
	a2 = _allocateArray715(zs);
	{
		Association195 *a3;
		a3 = a2;
		{
			int i4;
			i4 = 0;
			while((char)(i4 < zs))
			{
				{
					{
						Association195 *e5;
						e5 = (&a3[i4]);
						e5->key = ((String8Expression66 *)0);
					}
				}
				(++i4);
			}
		}
	}
	{
		{
			{
				int self6;
				int i7;
				self6 = zself->allocated;
				i7 = 0;
				while((char)(i7 < self6))
				{
					{
						{
							Association195 *a8;
							a8 = (&zself->associations[i7]);
							if(Association_notEmpty1505(a8))
							{
								{
									String8Expression66 *key9;
									String8Expression66 *value10;
									int count11;
									int location12;
									key9 = a8->key;
									value10 = a8->value;
									count11 = 1;
									location12 = Dictionary_hash566(zself, key9, zs);
									while(Association_notEmpty1505((&a2[location12])))
									{
										(++location12);
										if((char)(location12 == zs))
										{
											location12 = 0;
										}
										(++count11);
									}
									(&a2[location12])->key = key9;
									(&a2[location12])->value = value10;
									c1 = _max377(count11, c1);
								}
							}
						}
					}
					(++i7);
				}
			}
		}
	}
	_freeArray1095(((void *)zself->associations), zself->allocated);
	zself->collisions = c1;
	zself->associations = a2;
	zself->allocated = zs;
}

static void Dictionary_increaseTally565(Dictionary22 *zself)
{
	(++zself->tally);
	if((char)((zself->tally * 4) > (zself->allocated * 3)))
	{
		Dictionary_resize564(zself, ((zself->allocated * 3) / 2));
	}
}

static int Dictionary_hash566(Dictionary22 *zself, String8Expression66 *zk, int zmod)
{
	int t1;
	t1 = _umod375(((int )String8Expression_hashKey517(zk)), zmod);
	return t1;
}

static char Dictionary_isEqual567(Dictionary22 *zself, String8Expression66 *zk1, String8Expression66 *zk2)
{
	char t1;
	t1 = String8Expression_isKeyEqual519(zk1, zk2);
	return t1;
}

static int Dictionary_slot568(Dictionary22 *zself, String8Expression66 *zk)
{
	int t1;
	t1 = Dictionary_hash566(zself, zk, zself->allocated);
	return t1;
}

static void String16Expression_initialize569(String16Expression67 *zself, unsigned short *zvalue, unsigned char *zvalue8, Program5 *zprogram, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 2, ztype);
	zself->value = zvalue;
	zself->value8 = zvalue8;
	zself->next = zprogram->string16Constants;
	zprogram->string16Constants = zself;
}

static size_t String16Expression_hashKey570(String16Expression67 *zself)
{
	size_t t1;
	t1 = (_hash324(zself->value8) + Type_hash521(((Expression21 *)zself)->type));
	return t1;
}

static void String16Expression_addToStringBuffer571(String16Expression67 *zself, StringBuffer2 *zsb)
{
	StringBuffer__shl365(zsb, ((unsigned char)34U));
	StringBuffer__shl1279(zsb, zself->value);
	StringBuffer__shl365(zsb, ((unsigned char)34U));
}

static char String16Expression_isKeyEqual572(String16Expression67 *zself, String16Expression67 *zother)
{
	char t1;
	t1 = ((char)(((Expression21 *)zself)->type == ((Expression21 *)zother)->type) && _isEqual327(zself->value8, zother->value8));
	return t1;
}

static void Dictionary_initialize573(Dictionary23 *zself)
{
	zself->collisions = 0;
	zself->tally = 0;
	zself->allocated = 10;
	zself->associations = _allocateArray717(10);
	{
		{
			int self1;
			int i2;
			self1 = zself->allocated;
			i2 = 0;
			while((char)(i2 < self1))
			{
				{
					{
						Association196 *a3;
						a3 = (&zself->associations[i2]);
						a3->key = ((String16Expression67 *)0);
					}
				}
				(++i2);
			}
		}
	}
}

static void Dictionary_release574(Dictionary23 *zself)
{
	_freeArray1096(((void *)zself->associations), zself->allocated);
}

static String16Expression67 *Dictionary_add575(Dictionary23 *zself, String16Expression67 *zk, String16Expression67 *zv)
{
	int location1;
	int count2;
	location1 = Dictionary_slot581(zself, zk);
	count2 = 1;
	for(;;)
	{
		Association196 *a3;
		a3 = (&zself->associations[location1]);
		if(Association_notEmpty1509(a3))
		{
			if(Dictionary_isEqual580(zself, zk, a3->key))
			{
				String16Expression67 *old4;
				String16Expression67 *t5;
				old4 = a3->value;
				a3->key = zk;
				a3->value = zv;
				t5 = old4;
				return t5;
			}
			else
			{
				(++location1);
				if((char)(location1 == zself->allocated))
				{
					location1 = 0;
				}
				(++count2);
			}
		}
		else
		{
			String16Expression67 *t6;
			a3->key = zk;
			a3->value = zv;
			if((char)(count2 > zself->collisions))
			{
				zself->collisions = count2;
			}
			Dictionary_increaseTally578(zself);
			t6 = ((String16Expression67 *)0);
			return t6;
		}
	}
}

static String16Expression67 *Dictionary__at576(Dictionary23 *zself, String16Expression67 *zk)
{
	int location1;
	int count2;
	String16Expression67 *t7;
	location1 = Dictionary_slot581(zself, zk);
	count2 = zself->collisions;
	while((char)(count2 > 0))
	{
		Association196 *a5;
		a5 = (&zself->associations[location1]);
		if(Association_isEmpty716(a5))
		{
			goto L3;
		}
		else
		{
			if(Dictionary_isEqual580(zself, a5->key, zk))
			{
				String16Expression67 *t6;
				t6 = a5->value;
				return t6;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(--count2);
	}
	L3: ;
	t7 = ((String16Expression67 *)0);
	return t7;
}

static void Dictionary_resize577(Dictionary23 *zself, int zs)
{
	int c1;
	Association196 *a2;
	c1 = 0;
	a2 = _allocateArray717(zs);
	{
		Association196 *a3;
		a3 = a2;
		{
			int i4;
			i4 = 0;
			while((char)(i4 < zs))
			{
				{
					{
						Association196 *e5;
						e5 = (&a3[i4]);
						e5->key = ((String16Expression67 *)0);
					}
				}
				(++i4);
			}
		}
	}
	{
		{
			{
				int self6;
				int i7;
				self6 = zself->allocated;
				i7 = 0;
				while((char)(i7 < self6))
				{
					{
						{
							Association196 *a8;
							a8 = (&zself->associations[i7]);
							if(Association_notEmpty1509(a8))
							{
								{
									String16Expression67 *key9;
									String16Expression67 *value10;
									int count11;
									int location12;
									key9 = a8->key;
									value10 = a8->value;
									count11 = 1;
									location12 = Dictionary_hash579(zself, key9, zs);
									while(Association_notEmpty1509((&a2[location12])))
									{
										(++location12);
										if((char)(location12 == zs))
										{
											location12 = 0;
										}
										(++count11);
									}
									(&a2[location12])->key = key9;
									(&a2[location12])->value = value10;
									c1 = _max377(count11, c1);
								}
							}
						}
					}
					(++i7);
				}
			}
		}
	}
	_freeArray1096(((void *)zself->associations), zself->allocated);
	zself->collisions = c1;
	zself->associations = a2;
	zself->allocated = zs;
}

static void Dictionary_increaseTally578(Dictionary23 *zself)
{
	(++zself->tally);
	if((char)((zself->tally * 4) > (zself->allocated * 3)))
	{
		Dictionary_resize577(zself, ((zself->allocated * 3) / 2));
	}
}

static int Dictionary_hash579(Dictionary23 *zself, String16Expression67 *zk, int zmod)
{
	int t1;
	t1 = _umod375(((int )String16Expression_hashKey570(zk)), zmod);
	return t1;
}

static char Dictionary_isEqual580(Dictionary23 *zself, String16Expression67 *zk1, String16Expression67 *zk2)
{
	char t1;
	t1 = String16Expression_isKeyEqual572(zk1, zk2);
	return t1;
}

static int Dictionary_slot581(Dictionary23 *zself, String16Expression67 *zk)
{
	int t1;
	t1 = Dictionary_hash579(zself, zk, zself->allocated);
	return t1;
}

static void ArrayType_initialize582(ArrayType102 *zself, Type98 *zcellType, size_t zarraySize, Type98 *zparent)
{
	Scope8 *scope1;
	scope1 = (&zcellType->scope);
	Type_initialize520(((Type98 *)zself), scope1, zparent, 11, ((size_t)0xFFFFFFFFFFFFFFFFU), ((size_t)0xFFFFFFFFFFFFFFFFU));
	zself->cellType = zcellType;
	zself->arraySize = zarraySize;
}

static char ArrayType_match583(ArrayType102 *zself, ArrayType102 *zother)
{
	char t1;
	t1 = ((char)(zself->cellType->size == zother->cellType->size) && Type_match530(zself->cellType, zother->cellType));
	return t1;
}

static void Dictionary_initialize584(Dictionary24 *zself)
{
	zself->collisions = 0;
	zself->tally = 0;
	zself->allocated = 10;
	zself->associations = _allocateArray662(10);
	{
		{
			int self1;
			int i2;
			self1 = zself->allocated;
			i2 = 0;
			while((char)(i2 < self1))
			{
				{
					{
						Association197 *a3;
						a3 = (&zself->associations[i2]);
						a3->key = ((ArrayType102 *)0);
					}
				}
				(++i2);
			}
		}
	}
}

static void Dictionary_release585(Dictionary24 *zself)
{
	_freeArray1097(((void *)zself->associations), zself->allocated);
}

static ArrayType102 *Dictionary_add586(Dictionary24 *zself, ArrayType102 *zk, ArrayType102 *zv)
{
	int location1;
	int count2;
	location1 = Dictionary_slot592(zself, zk);
	count2 = 1;
	for(;;)
	{
		Association197 *a3;
		a3 = (&zself->associations[location1]);
		if(Association_notEmpty1657(a3))
		{
			if(Dictionary_isEqual591(zself, zk, a3->key))
			{
				ArrayType102 *old4;
				ArrayType102 *t5;
				old4 = a3->value;
				a3->key = zk;
				a3->value = zv;
				t5 = old4;
				return t5;
			}
			else
			{
				(++location1);
				if((char)(location1 == zself->allocated))
				{
					location1 = 0;
				}
				(++count2);
			}
		}
		else
		{
			ArrayType102 *t6;
			a3->key = zk;
			a3->value = zv;
			if((char)(count2 > zself->collisions))
			{
				zself->collisions = count2;
			}
			Dictionary_increaseTally589(zself);
			t6 = ((ArrayType102 *)0);
			return t6;
		}
	}
}

static ArrayType102 *Dictionary__at587(Dictionary24 *zself, ArrayType102 *zk)
{
	int location1;
	int count2;
	ArrayType102 *t7;
	location1 = Dictionary_slot592(zself, zk);
	count2 = zself->collisions;
	while((char)(count2 > 0))
	{
		Association197 *a5;
		a5 = (&zself->associations[location1]);
		if(Association_isEmpty661(a5))
		{
			goto L3;
		}
		else
		{
			if(Dictionary_isEqual591(zself, a5->key, zk))
			{
				ArrayType102 *t6;
				t6 = a5->value;
				return t6;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(--count2);
	}
	L3: ;
	t7 = ((ArrayType102 *)0);
	return t7;
}

static void Dictionary_resize588(Dictionary24 *zself, int zs)
{
	int c1;
	Association197 *a2;
	c1 = 0;
	a2 = _allocateArray662(zs);
	{
		Association197 *a3;
		a3 = a2;
		{
			int i4;
			i4 = 0;
			while((char)(i4 < zs))
			{
				{
					{
						Association197 *e5;
						e5 = (&a3[i4]);
						e5->key = ((ArrayType102 *)0);
					}
				}
				(++i4);
			}
		}
	}
	{
		{
			{
				int self6;
				int i7;
				self6 = zself->allocated;
				i7 = 0;
				while((char)(i7 < self6))
				{
					{
						{
							Association197 *a8;
							a8 = (&zself->associations[i7]);
							if(Association_notEmpty1657(a8))
							{
								{
									ArrayType102 *key9;
									ArrayType102 *value10;
									int count11;
									int location12;
									key9 = a8->key;
									value10 = a8->value;
									count11 = 1;
									location12 = Dictionary_hash590(zself, key9, zs);
									while(Association_notEmpty1657((&a2[location12])))
									{
										(++location12);
										if((char)(location12 == zs))
										{
											location12 = 0;
										}
										(++count11);
									}
									(&a2[location12])->key = key9;
									(&a2[location12])->value = value10;
									c1 = _max377(count11, c1);
								}
							}
						}
					}
					(++i7);
				}
			}
		}
	}
	_freeArray1097(((void *)zself->associations), zself->allocated);
	zself->collisions = c1;
	zself->associations = a2;
	zself->allocated = zs;
}

static void Dictionary_increaseTally589(Dictionary24 *zself)
{
	(++zself->tally);
	if((char)((zself->tally * 4) > (zself->allocated * 3)))
	{
		Dictionary_resize588(zself, ((zself->allocated * 3) / 2));
	}
}

static int Dictionary_hash590(Dictionary24 *zself, ArrayType102 *zk, int zmod)
{
	int t1;
	t1 = _umod375(((int )ArrayType_hashArrayType249(zk)), zmod);
	return t1;
}

static char Dictionary_isEqual591(Dictionary24 *zself, ArrayType102 *zk1, ArrayType102 *zk2)
{
	char t1;
	t1 = ArrayType_equalsArrayType250(zk1, zk2);
	return t1;
}

static int Dictionary_slot592(Dictionary24 *zself, ArrayType102 *zk)
{
	int t1;
	t1 = Dictionary_hash590(zself, zk, zself->allocated);
	return t1;
}

static void FunctionType_initialize593(FunctionType103 *zself, unsigned char zcallingConvention, TypeSequence108 *ztypes, TypeSequence108 *zreturnTypes, Type98 *zparent)
{
	Type_initialize520(((Type98 *)zself), (&zparent->scope), zparent, 12, ((size_t)0xFFFFFFFFFFFFFFFFU), ((size_t)0x0000000000000001U));
	zself->callingConvention = zcallingConvention;
	zself->types = ztypes;
	zself->returnTypes = zreturnTypes;
}

static size_t FunctionType_hash594(FunctionType103 *zself)
{
	size_t h1;
	size_t t10;
	h1 = ((size_t)0x0000000000000000U);
	{
		{
			TypeSequence108 *self2;
			self2 = zself->types;
			{
				int self3;
				int i4;
				self3 = self2->size;
				i4 = 0;
				while((char)(i4 < self3))
				{
					{
						{
							Type98 *t5;
							t5 = TypeSequence__at603(self2, i4);
							{
								(h1 += Type_hash521(t5));
							}
						}
					}
					(++i4);
				}
			}
		}
	}
	{
		{
			TypeSequence108 *self6;
			self6 = zself->returnTypes;
			{
				int self7;
				int i8;
				self7 = self6->size;
				i8 = 0;
				while((char)(i8 < self7))
				{
					{
						{
							Type98 *t9;
							t9 = TypeSequence__at603(self6, i8);
							{
								(h1 += Type_hash521(t9));
							}
						}
					}
					(++i8);
				}
			}
		}
	}
	t10 = h1;
	return t10;
}

static char FunctionType_match595(FunctionType103 *zself, FunctionType103 *zother)
{
	char t1;
	t1 = (((char)(zself->callingConvention == zother->callingConvention) && TypeSequence_match609(zself->types, zother->types)) && TypeSequence_match609(zself->returnTypes, zother->returnTypes));
	return t1;
}

static char FunctionType_isEqual596(FunctionType103 *zself, FunctionType103 *zother)
{
	char t1;
	t1 = (((char)(zself->callingConvention == zother->callingConvention) && TypeSequence_isEqual608(zself->types, zother->types)) && TypeSequence_isEqual608(zself->returnTypes, zother->returnTypes));
	return t1;
}

static void FunctionType_addToStringBuffer597(FunctionType103 *zself, StringBuffer2 *zstream)
{
	StringBuffer__shl367(zstream, S1789);
	switch( zself->callingConvention )
	{
	case ((unsigned char)2U):
	{
		StringBuffer__shl367(zstream, S1788);
	}
	break;
	case ((unsigned char)1U):
	{
		StringBuffer__shl367(zstream, S1787);
	}
	break;
	}
	if(TypeSequence_notEmpty1274(zself->types))
	{
		char comma1;
		StringBuffer__shl367(zstream, S1786);
		comma1 = 0;
		{
			{
				TypeSequence108 *self2;
				self2 = zself->types;
				{
					int self3;
					int i4;
					self3 = self2->size;
					i4 = 0;
					while((char)(i4 < self3))
					{
						{
							{
								Type98 *t5;
								t5 = TypeSequence__at603(self2, i4);
								{
									if(comma1)
									{
										StringBuffer__shl367(zstream, S1954);
									}
									comma1 = 1;
									StringBuffer__shl925(zstream, t5);
								}
							}
						}
						(++i4);
					}
				}
			}
		}
		StringBuffer__shl365(zstream, ((unsigned char)41U));
	}
	if(TypeSequence_notEmpty1274(zself->returnTypes))
	{
		char comma6;
		StringBuffer__shl367(zstream, S1785);
		comma6 = 0;
		{
			{
				TypeSequence108 *self7;
				self7 = zself->returnTypes;
				{
					int self8;
					int i9;
					self8 = self7->size;
					i9 = 0;
					while((char)(i9 < self8))
					{
						{
							{
								Type98 *t10;
								t10 = TypeSequence__at603(self7, i9);
								{
									if(comma6)
									{
										StringBuffer__shl367(zstream, S1954);
									}
									comma6 = 1;
									StringBuffer__shl925(zstream, t10);
								}
							}
						}
						(++i9);
					}
				}
			}
		}
		StringBuffer__shl365(zstream, ((unsigned char)41U));
	}
}

static TypeSequence108 *_new598(MemoryPool160 *zpool, int zsize)
{
	TypeSequence108 *self1;
	TypeSequence108 *t2;
	self1 = MemoryPool_allocateWithArray893(zpool, zsize);
	TypeSequence_initialize601(self1, zsize);
	t2 = self1;
	return t2;
}

static TypeSequence108 *_fromExpressions599(MemoryPool160 *zpool, ExpressionList61 *zexpressions)
{
	TypeSequence108 *types1;
	int i2;
	TypeSequence108 *t8;
	if(Collection_isEmpty902(((Collection63 *)zexpressions)))
	{
		TypeSequence108 *t3;
		t3 = (&S1675);
		return t3;
	}
	types1 = _new598(zpool, ((Collection63 *)zexpressions)->size);
	i2 = 0;
	{
		CollectionPool62 *self4;
		self4 = ((CollectionPool62 *)zexpressions);
		{
			Collection63 *self5;
			CollectionPoolElement205 *e6;
			self5 = ((Collection63 *)self4);
			e6 = self5->firstElement;
			while((char)(e6 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *e7;
						e7 = e6->object;
						TypeSequence_set602(types1, i2, e7->type);
						(++i2);
					}
				}
				e6 = e6->nextSibling;
			}
		}
	}
	t8 = types1;
	return t8;
}

static TypeSequence108 *_fromParameters600(MemoryPool160 *zpool, Collection34 *zparameters)
{
	TypeSequence108 *types1;
	int i2;
	TypeSequence108 *t5;
	if(Collection_isEmpty728(zparameters))
	{
		TypeSequence108 *t3;
		t3 = (&S1675);
		return t3;
	}
	types1 = _new598(zpool, zparameters->size);
	i2 = 0;
	{
		Parameter35 *e4;
		e4 = zparameters->firstElement;
		while((char)(e4 != ((Parameter35 *)0)))
		{
			{
				TypeSequence_set602(types1, i2, e4->type);
				(++i2);
			}
			e4 = e4->nextSibling;
		}
	}
	t5 = types1;
	return t5;
}

static void TypeSequence_initialize601(TypeSequence108 *zself, int zsize)
{
	zself->size = zsize;
}

static void TypeSequence_set602(TypeSequence108 *zself, int zindex, Type98 *ztype)
{
	zself->array[zindex] = ztype;
}

static Type98 *TypeSequence__at603(TypeSequence108 *zself, int zindex)
{
	Type98 *t1;
	t1 = zself->array[zindex];
	return t1;
}

static Type98 *TypeSequence_first604(TypeSequence108 *zself)
{
	Type98 *t1;
	t1 = TypeSequence__at603(zself, 0);
	return t1;
}

static char TypeSequence_merge605(TypeSequence108 *zself, ExpressionList61 *zexpressions)
{
	int n1;
	CollectionPoolElement205 *j2;
	char t9;
	n1 = zself->size;
	if((char)(n1 != ((Collection63 *)zexpressions)->size))
	{
		char t3;
		t3 = 0;
		return t3;
	}
	j2 = ((Collection63 *)zexpressions)->firstElement;
	{
		int self4;
		int i5;
		self4 = n1;
		i5 = 0;
		while((char)(i5 < self4))
		{
			{
				if((char)(Type_common531(TypeSequence__at603(zself, i5), j2->object->type) == ((Type98 *)0)))
				{
					char t6;
					t6 = 0;
					return t6;
				}
				j2 = j2->nextSibling;
			}
			(++i5);
		}
	}
	j2 = ((Collection63 *)zexpressions)->firstElement;
	{
		int self7;
		int i8;
		self7 = n1;
		i8 = 0;
		while((char)(i8 < self7))
		{
			{
				TypeSequence_set602(zself, i8, Type_common531(TypeSequence__at603(zself, i8), j2->object->type));
				j2 = j2->nextSibling;
			}
			(++i8);
		}
	}
	t9 = 1;
	return t9;
}

static void TypeSequence_addToStringBuffer606(TypeSequence108 *zself, StringBuffer2 *zs)
{
	char comma1;
	if(TypeSequence_isEmpty607(zself))
	{
		return;
	}
	StringBuffer__shl365(zs, ((unsigned char)40U));
	comma1 = 0;
	{
		{
			int self2;
			int i3;
			self2 = zself->size;
			i3 = 0;
			while((char)(i3 < self2))
			{
				{
					{
						Type98 *type4;
						type4 = TypeSequence__at603(zself, i3);
						if(comma1)
						{
							StringBuffer__shl367(zs, S1954);
						}
						comma1 = 1;
						StringBuffer__shl925(zs, type4);
					}
				}
				(++i3);
			}
		}
	}
	StringBuffer__shl365(zs, ((unsigned char)41U));
}

static char TypeSequence_isEmpty607(TypeSequence108 *zself)
{
	char t1;
	t1 = (char)(zself->size == 0);
	return t1;
}

static char TypeSequence_isEqual608(TypeSequence108 *zself, TypeSequence108 *zother)
{
	int n1;
	char t6;
	n1 = zself->size;
	if((char)(n1 != zother->size))
	{
		char t2;
		t2 = 0;
		return t2;
	}
	{
		int self3;
		int i4;
		self3 = n1;
		i4 = 0;
		while((char)(i4 < self3))
		{
			{
				if((char)(TypeSequence__at603(zself, i4) != TypeSequence__at603(zother, i4)))
				{
					char t5;
					t5 = 0;
					return t5;
				}
			}
			(++i4);
		}
	}
	t6 = 1;
	return t6;
}

static char TypeSequence_match609(TypeSequence108 *zself, TypeSequence108 *zother)
{
	int n1;
	char t6;
	n1 = zself->size;
	if((char)(n1 != zother->size))
	{
		char t2;
		t2 = 0;
		return t2;
	}
	{
		int self3;
		int i4;
		self3 = n1;
		i4 = 0;
		while((char)(i4 < self3))
		{
			{
				if((!Type_match530(TypeSequence__at603(zself, i4), TypeSequence__at603(zother, i4))))
				{
					char t5;
					t5 = 0;
					return t5;
				}
			}
			(++i4);
		}
	}
	t6 = 1;
	return t6;
}

static void Dictionary_initialize610(Dictionary26 *zself)
{
	zself->collisions = 0;
	zself->tally = 0;
	zself->allocated = 10;
	zself->associations = _allocateArray664(10);
	{
		{
			int self1;
			int i2;
			self1 = zself->allocated;
			i2 = 0;
			while((char)(i2 < self1))
			{
				{
					{
						Association198 *a3;
						a3 = (&zself->associations[i2]);
						a3->key = ((FunctionType103 *)0);
					}
				}
				(++i2);
			}
		}
	}
}

static void Dictionary_release611(Dictionary26 *zself)
{
	_freeArray1098(((void *)zself->associations), zself->allocated);
}

static FunctionType103 *Dictionary_add612(Dictionary26 *zself, FunctionType103 *zk, FunctionType103 *zv)
{
	int location1;
	int count2;
	location1 = Dictionary_slot618(zself, zk);
	count2 = 1;
	for(;;)
	{
		Association198 *a3;
		a3 = (&zself->associations[location1]);
		if(Association_notEmpty1457(a3))
		{
			if(Dictionary_isEqual617(zself, zk, a3->key))
			{
				FunctionType103 *old4;
				FunctionType103 *t5;
				old4 = a3->value;
				a3->key = zk;
				a3->value = zv;
				t5 = old4;
				return t5;
			}
			else
			{
				(++location1);
				if((char)(location1 == zself->allocated))
				{
					location1 = 0;
				}
				(++count2);
			}
		}
		else
		{
			FunctionType103 *t6;
			a3->key = zk;
			a3->value = zv;
			if((char)(count2 > zself->collisions))
			{
				zself->collisions = count2;
			}
			Dictionary_increaseTally615(zself);
			t6 = ((FunctionType103 *)0);
			return t6;
		}
	}
}

static FunctionType103 *Dictionary__at613(Dictionary26 *zself, FunctionType103 *zk)
{
	int location1;
	int count2;
	FunctionType103 *t7;
	location1 = Dictionary_slot618(zself, zk);
	count2 = zself->collisions;
	while((char)(count2 > 0))
	{
		Association198 *a5;
		a5 = (&zself->associations[location1]);
		if(Association_isEmpty663(a5))
		{
			goto L3;
		}
		else
		{
			if(Dictionary_isEqual617(zself, a5->key, zk))
			{
				FunctionType103 *t6;
				t6 = a5->value;
				return t6;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(--count2);
	}
	L3: ;
	t7 = ((FunctionType103 *)0);
	return t7;
}

static void Dictionary_resize614(Dictionary26 *zself, int zs)
{
	int c1;
	Association198 *a2;
	c1 = 0;
	a2 = _allocateArray664(zs);
	{
		Association198 *a3;
		a3 = a2;
		{
			int i4;
			i4 = 0;
			while((char)(i4 < zs))
			{
				{
					{
						Association198 *e5;
						e5 = (&a3[i4]);
						e5->key = ((FunctionType103 *)0);
					}
				}
				(++i4);
			}
		}
	}
	{
		{
			{
				int self6;
				int i7;
				self6 = zself->allocated;
				i7 = 0;
				while((char)(i7 < self6))
				{
					{
						{
							Association198 *a8;
							a8 = (&zself->associations[i7]);
							if(Association_notEmpty1457(a8))
							{
								{
									FunctionType103 *key9;
									FunctionType103 *value10;
									int count11;
									int location12;
									key9 = a8->key;
									value10 = a8->value;
									count11 = 1;
									location12 = Dictionary_hash616(zself, key9, zs);
									while(Association_notEmpty1457((&a2[location12])))
									{
										(++location12);
										if((char)(location12 == zs))
										{
											location12 = 0;
										}
										(++count11);
									}
									(&a2[location12])->key = key9;
									(&a2[location12])->value = value10;
									c1 = _max377(count11, c1);
								}
							}
						}
					}
					(++i7);
				}
			}
		}
	}
	_freeArray1098(((void *)zself->associations), zself->allocated);
	zself->collisions = c1;
	zself->associations = a2;
	zself->allocated = zs;
}

static void Dictionary_increaseTally615(Dictionary26 *zself)
{
	(++zself->tally);
	if((char)((zself->tally * 4) > (zself->allocated * 3)))
	{
		Dictionary_resize614(zself, ((zself->allocated * 3) / 2));
	}
}

static int Dictionary_hash616(Dictionary26 *zself, FunctionType103 *zk, int zmod)
{
	int t1;
	t1 = _umod375(((int )FunctionType_hash594(zk)), zmod);
	return t1;
}

static char Dictionary_isEqual617(Dictionary26 *zself, FunctionType103 *zk1, FunctionType103 *zk2)
{
	char t1;
	t1 = FunctionType_isEqual596(zk1, zk2);
	return t1;
}

static int Dictionary_slot618(Dictionary26 *zself, FunctionType103 *zk)
{
	int t1;
	t1 = Dictionary_hash616(zself, zk, zself->allocated);
	return t1;
}

static void Builder_initialize619(Builder171 *zself, ImportPath10 *zimportPath, SimpleDictionary186 *zdefines, Program5 *zprogram)
{
	zself->importPath = zimportPath;
	zself->defines = zdefines;
	zself->program = zprogram;
	zself->currentLocalPool = ((LocalPool180 *)0);
	zself->nameIndex = 1U;
	MemoryBuffer_initialize627((&zself->nameBuffer));
	LinkCollection_initialize636((&zself->localPools));
	Dictionary_initialize639(((Dictionary175 *)(&zself->integerConstants)));
	Vector_initialize651((&zself->functionsToDefine));
}

static void Builder_release620(Builder171 *zself)
{
	Vector_release653((&zself->functionsToDefine));
	Dictionary_release640(((Dictionary175 *)(&zself->integerConstants)));
	MemoryBuffer_release628((&zself->nameBuffer));
	LinkCollection_deleteAllAndRelease637((&zself->localPools));
}

static char Builder_compile621(Builder171 *zself, unsigned char *zfilename)
{
	Module7 *module1;
	char ok2;
	char t13;
	module1 = Builder_loadModule622(zself, zfilename, ((unsigned char *)0), -1);
	if((char)(module1 == ((Module7 *)0)))
	{
		char t3;
		t3 = 0;
		return t3;
	}
	ok2 = 1;
	{
		CollectionPool13 *self4;
		self4 = (&zself->program->functions);
		{
			Collection14 *self5;
			CollectionPoolElement191 *e6;
			self5 = ((Collection14 *)self4);
			e6 = self5->firstElement;
			while((char)(e6 != ((CollectionPoolElement191 *)0)))
			{
				{
					{
						Function33 *f7;
						f7 = e6->object;
						if((char)(((Definition32 *)f7)->name == (&identifiers1661)->main))
						{
							f7->entry = 1;
						}
						if((f7->entry && (!((Prototype31 *)f7)->used)))
						{
							{
								Scope8 *initialScope8;
								BuilderContext177 cx9;
								initialScope8 = ((Scope8 *)module1);
								BuilderContext_initialize731((&cx9), ((BuilderContext177 *)0), zself, initialScope8, Builder_getLocalPool623(zself), ((MacroContext178 *)0));
								{
									(ok2 &= BuilderContext_defineFunctionType739((&cx9), f7));
								}
								Builder_releaseLocalPool624(zself);
							}
						}
					}
				}
				e6 = e6->nextSibling;
			}
		}
	}
	while(Vector_notEmpty934((&zself->functionsToDefine)))
	{
		Function33 *f10;
		f10 = Vector_last655((&zself->functionsToDefine));
		Vector_removeLast657((&zself->functionsToDefine));
		{
			Scope8 *initialScope11;
			BuilderContext177 cx12;
			initialScope11 = ((Definition32 *)f10)->scope;
			BuilderContext_initialize731((&cx12), ((BuilderContext177 *)0), zself, initialScope11, Builder_getLocalPool623(zself), ((MacroContext178 *)0));
			{
				(ok2 &= BuilderContext_defineFunctionBody741((&cx12), f10));
			}
			Builder_releaseLocalPool624(zself);
		}
	}
	t13 = ok2;
	return t13;
}

static Module7 *Builder_loadModule622(Builder171 *zself, unsigned char *zfilename, unsigned char *zfile, int zline)
{
	Module7 *module1;
	ASTModule112 *ast2;
	char ok3;
	Module7 *t9;
	module1 = Program_findModule429(zself->program, zfilename);
	if((char)(module1 != ((Module7 *)0)))
	{
		Module7 *t5;
		if(module1->loading)
		{
			Module7 *t4;
			ErrorReporter_reportError1531(((ErrorReporter158 *)zself), zfile, zline, ((unsigned char *)S2038), zfilename);
			t4 = ((Module7 *)0);
			return t4;
		}
		t5 = module1;
		return t5;
	}
	ast2 = Builder_loadAST625(zself, zfilename, zfile, zline);
	if((char)(ast2 == ((ASTModule112 *)0)))
	{
		Module7 *t6;
		t6 = ((Module7 *)0);
		return t6;
	}
	module1 = Program_createModule421(zself->program, zfilename, zself->importPath);
	module1->loading = 1;
	{
		Scope8 *initialScope7;
		BuilderContext177 cx8;
		initialScope7 = ((Scope8 *)module1);
		BuilderContext_initialize731((&cx8), ((BuilderContext177 *)0), zself, initialScope7, Builder_getLocalPool623(zself), ((MacroContext178 *)0));
		{
			ok3 = BuilderContext_declareContent732((&cx8), ((ASTNode110 *)ast2), ((Type98 *)0), ((MetaType99 *)0));
		}
		Builder_releaseLocalPool624(zself);
	}
	module1->loading = 0;
	t9 = (ok3?module1:((Module7 *)0));
	return t9;
}

static MemoryPool160 *Builder_getLocalPool623(Builder171 *zself)
{
	LocalPool180 *e1;
	MemoryPool160 *t2;
	e1 = zself->currentLocalPool;
	if((char)(e1 == ((LocalPool180 *)0)))
	{
		e1 = (&zself->localPools)->firstElement;
	}
	else
	{
		e1 = ((LinkCollectionElement181 *)e1)->nextSibling;
	}
	if((char)(e1 == ((LocalPool180 *)0)))
	{
		e1 = _new853();
		LinkCollection_add638((&zself->localPools), e1);
	}
	else
	{
		LocalPool_reset852(e1);
	}
	zself->currentLocalPool = e1;
	t2 = (&e1->pool);
	return t2;
}

static void Builder_releaseLocalPool624(Builder171 *zself)
{
	zself->currentLocalPool = ((LinkCollectionElement181 *)zself->currentLocalPool)->previousSibling;
}

static ASTModule112 *Builder_loadAST625(Builder171 *zself, unsigned char *zfilename, unsigned char *zfile, int zline)
{
	MemoryBuffer159 mb1;
	Error162 *err2;
	unsigned char *text3;
	Parser182 parser4;
	ASTModule112 *ast5;
	ASTModule112 *t7;
	MemoryBuffer_initialize627((&mb1));
	err2 = _loadFile626(zfilename, (&mb1));
	if((char)(err2 != ((Error162 *)0)))
	{
		ASTModule112 *t6;
		ErrorReporter_reportError1531(((ErrorReporter158 *)zself), zfile, zline, ((unsigned char *)S2039), zfilename);
		Error_delete1077(err2);
		MemoryBuffer_release628((&mb1));
		t6 = ((ASTModule112 *)0);
		return t6;
	}
	text3 = ((unsigned char *)(&mb1)->buffer);
	Parser_initialize1533((&parser4), zself->program->pool, text3, zfilename, zself->defines, (&zself->program->identifiers), ((ErrorReporter158 *)zself));
	ast5 = Parser_getModule1535((&parser4));
	Parser_release1534((&parser4));
	MemoryBuffer_release628((&mb1));
	t7 = ast5;
	return t7;
}

static Error162 *_loadFile626(unsigned char *zfilename, MemoryBuffer159 *zbuffer)
{
	size_t size1;
	Error162 *err12;
	File166 *f3;
	Error162 *err24;
	unsigned char *base5;
	size_t read6;
	Error162 *err37;
	size_t t8;
	Error162 *t9;
	File166 *t11;
	Error162 *t12;
	size_t t14;
	Error162 *t15;
	Error162 *t16;
	t8 = _getSize354(zfilename, (&t9));
	size1 = t8;
	err12 = t9;
	if((char)(err12 != ((Error162 *)0)))
	{
		Error162 *t10;
		t10 = err12;
		return t10;
	}
	t11 = _openRead356(zfilename, (&t12));
	f3 = t11;
	err24 = t12;
	if((char)(err24 != ((Error162 *)0)))
	{
		Error162 *t13;
		t13 = err24;
		return t13;
	}
	base5 = MemoryBuffer_allocate631(zbuffer, (size1 + ((size_t)0x0000000000000001U)));
	t14 = File_read360(f3, base5, size1, (&t15));
	read6 = t14;
	err37 = t15;
	err37 = Error__or1079(err37, ((Error162 *)File_close359(f3)));
	base5[size1] = ((unsigned char)0U);
	t16 = err37;
	return t16;
}

static void MemoryBuffer_initialize627(MemoryBuffer159 *zself)
{
	zself->buffer = _allocateBytes257(((size_t)0x0000000000001000U));
	zself->used = ((size_t)0x0000000000000000U);
	zself->bufferSize = ((size_t)0x0000000000001000U);
}

static void MemoryBuffer_release628(MemoryBuffer159 *zself)
{
	_freeBytes258(((void *)zself->buffer), zself->bufferSize);
}

static unsigned char *MemoryBuffer_base629(MemoryBuffer159 *zself)
{
	unsigned char *t1;
	t1 = zself->buffer;
	return t1;
}

static size_t MemoryBuffer_size630(MemoryBuffer159 *zself)
{
	size_t t1;
	t1 = zself->used;
	return t1;
}

static unsigned char *MemoryBuffer_allocate631(MemoryBuffer159 *zself, size_t zsize)
{
	unsigned char *p1;
	unsigned char *t2;
	p1 = MemoryBuffer_reserve635(zself, zsize);
	(zself->used += zsize);
	t2 = p1;
	return t2;
}

static void MemoryBuffer_addByte632(MemoryBuffer159 *zself, unsigned char zx)
{
	MemoryBuffer_add931(zself, zx);
}

static void MemoryBuffer_addBlock633(MemoryBuffer159 *zself, void *zbase, size_t zsize)
{
	_copyBytes259(((void *)MemoryBuffer_reserve635(zself, zsize)), zbase, zsize);
	(zself->used += zsize);
}

static void MemoryBuffer_removeAll634(MemoryBuffer159 *zself)
{
	zself->used = ((size_t)0x0000000000000000U);
}

static unsigned char *MemoryBuffer_reserve635(MemoryBuffer159 *zself, size_t zl)
{
	unsigned char *t3;
	if((char)(((size_t )((zself->used + zl) + ((size_t)0x0000000000000001U))) > ((size_t )zself->bufferSize)))
	{
		size_t newSize1;
		unsigned char *q2;
		newSize1 = ((((zself->used + zl) + ((size_t)0x0000000000000001U)) * ((size_t)0x0000000000000005U)) / ((size_t)0x0000000000000004U));
		q2 = _allocateBytes257(newSize1);
		_copyBytes259(((void *)q2), ((void *)zself->buffer), zself->used);
		_freeBytes258(((void *)zself->buffer), zself->bufferSize);
		zself->bufferSize = newSize1;
		zself->buffer = q2;
	}
	t3 = (zself->buffer + zself->used);
	return t3;
}

static void LinkCollection_initialize636(LinkCollection172 *zself)
{
	zself->firstElement = ((LocalPool180 *)0);
	zself->lastElement = ((LocalPool180 *)0);
}

static void LinkCollection_deleteAllAndRelease637(LinkCollection172 *zself)
{
	LocalPool180 *e1;
	e1 = zself->firstElement;
	while((char)(e1 != ((LocalPool180 *)0)))
	{
		LocalPool180 *next2;
		next2 = ((LinkCollectionElement181 *)e1)->nextSibling;
		LocalPool_delete1094(e1);
		e1 = next2;
	}
}

static void LinkCollection_add638(LinkCollection172 *zself, LocalPool180 *ze)
{
	((LinkCollectionElement181 *)ze)->nextSibling = ((LocalPool180 *)0);
	((LinkCollectionElement181 *)ze)->previousSibling = zself->lastElement;
	if((char)(zself->firstElement == ((LocalPool180 *)0)))
	{
		zself->firstElement = ze;
	}
	if((char)(zself->lastElement != ((LocalPool180 *)0)))
	{
		((LinkCollectionElement181 *)zself->lastElement)->nextSibling = ze;
	}
	zself->lastElement = ze;
}

static void Dictionary_initialize639(Dictionary175 *zself)
{
	zself->collisions = 0;
	zself->tally = 0;
	zself->allocated = 10;
	zself->associations = _allocateArray719(10);
	{
		{
			int self1;
			int i2;
			self1 = zself->allocated;
			i2 = 0;
			while((char)(i2 < self1))
			{
				{
					{
						Association199 *a3;
						a3 = (&zself->associations[i2]);
						a3->key = ((IntegerExpression20 *)0);
					}
				}
				(++i2);
			}
		}
	}
}

static void Dictionary_release640(Dictionary175 *zself)
{
	_freeArray1093(((void *)zself->associations), zself->allocated);
}

static IntegerExpression20 *Dictionary_add641(Dictionary175 *zself, IntegerExpression20 *zk, IntegerExpression20 *zv)
{
	int location1;
	int count2;
	location1 = Dictionary_slot648(zself, zk);
	count2 = 1;
	for(;;)
	{
		Association199 *a3;
		a3 = (&zself->associations[location1]);
		if(Association_notEmpty1451(a3))
		{
			if(Dictionary_isEqual647(zself, zk, a3->key))
			{
				IntegerExpression20 *old4;
				IntegerExpression20 *t5;
				old4 = a3->value;
				a3->key = zk;
				a3->value = zv;
				t5 = old4;
				return t5;
			}
			else
			{
				(++location1);
				if((char)(location1 == zself->allocated))
				{
					location1 = 0;
				}
				(++count2);
			}
		}
		else
		{
			IntegerExpression20 *t6;
			a3->key = zk;
			a3->value = zv;
			if((char)(count2 > zself->collisions))
			{
				zself->collisions = count2;
			}
			Dictionary_increaseTally645(zself);
			t6 = ((IntegerExpression20 *)0);
			return t6;
		}
	}
}

static void Dictionary_removeAll642(Dictionary175 *zself)
{
	{
		{
			int self1;
			int i2;
			self1 = zself->allocated;
			i2 = 0;
			while((char)(i2 < self1))
			{
				{
					{
						Association199 *a3;
						a3 = (&zself->associations[i2]);
						a3->key = ((IntegerExpression20 *)0);
					}
				}
				(++i2);
			}
		}
	}
	zself->tally = 0;
}

static IntegerExpression20 *Dictionary__at643(Dictionary175 *zself, IntegerExpression20 *zk)
{
	int location1;
	int count2;
	IntegerExpression20 *t7;
	location1 = Dictionary_slot648(zself, zk);
	count2 = zself->collisions;
	while((char)(count2 > 0))
	{
		Association199 *a5;
		a5 = (&zself->associations[location1]);
		if(Association_isEmpty718(a5))
		{
			goto L3;
		}
		else
		{
			if(Dictionary_isEqual647(zself, a5->key, zk))
			{
				IntegerExpression20 *t6;
				t6 = a5->value;
				return t6;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(--count2);
	}
	L3: ;
	t7 = ((IntegerExpression20 *)0);
	return t7;
}

static void Dictionary_resize644(Dictionary175 *zself, int zs)
{
	int c1;
	Association199 *a2;
	c1 = 0;
	a2 = _allocateArray719(zs);
	{
		Association199 *a3;
		a3 = a2;
		{
			int i4;
			i4 = 0;
			while((char)(i4 < zs))
			{
				{
					{
						Association199 *e5;
						e5 = (&a3[i4]);
						e5->key = ((IntegerExpression20 *)0);
					}
				}
				(++i4);
			}
		}
	}
	{
		{
			{
				int self6;
				int i7;
				self6 = zself->allocated;
				i7 = 0;
				while((char)(i7 < self6))
				{
					{
						{
							Association199 *a8;
							a8 = (&zself->associations[i7]);
							if(Association_notEmpty1451(a8))
							{
								{
									IntegerExpression20 *key9;
									IntegerExpression20 *value10;
									int count11;
									int location12;
									key9 = a8->key;
									value10 = a8->value;
									count11 = 1;
									location12 = Dictionary_hash646(zself, key9, zs);
									while(Association_notEmpty1451((&a2[location12])))
									{
										(++location12);
										if((char)(location12 == zs))
										{
											location12 = 0;
										}
										(++count11);
									}
									(&a2[location12])->key = key9;
									(&a2[location12])->value = value10;
									c1 = _max377(count11, c1);
								}
							}
						}
					}
					(++i7);
				}
			}
		}
	}
	_freeArray1093(((void *)zself->associations), zself->allocated);
	zself->collisions = c1;
	zself->associations = a2;
	zself->allocated = zs;
}

static void Dictionary_increaseTally645(Dictionary175 *zself)
{
	(++zself->tally);
	if((char)((zself->tally * 4) > (zself->allocated * 3)))
	{
		Dictionary_resize644(zself, ((zself->allocated * 3) / 2));
	}
}

static int Dictionary_hash646(Dictionary175 *zself, IntegerExpression20 *zk, int zmod)
{
	int t1;
	t1 = _umod375(((int )IntegerExpression_hash513(zk)), zmod);
	return t1;
}

static char Dictionary_isEqual647(Dictionary175 *zself, IntegerExpression20 *zk1, IntegerExpression20 *zk2)
{
	char t1;
	t1 = IntegerExpression_isEqual515(zk1, zk2);
	return t1;
}

static int Dictionary_slot648(Dictionary175 *zself, IntegerExpression20 *zk)
{
	int t1;
	t1 = Dictionary_hash646(zself, zk, zself->allocated);
	return t1;
}

static void IntegerConstantDictionary_add649(IntegerConstantDictionary173 *zself, IntegerExpression20 *zconstant)
{
	Dictionary_add641(((Dictionary175 *)((SimpleDictionary174 *)zself)), zconstant, zconstant);
}

static char IntegerConstantDictionary_has650(IntegerConstantDictionary173 *zself, IntegerExpression20 *zc)
{
	char t1;
	t1 = (char)(Dictionary__at643(((Dictionary175 *)zself), zc) != ((IntegerExpression20 *)0));
	return t1;
}

static void Vector_initialize651(Vector176 *zself)
{
	Vector_initializeWithSize652(zself, 8);
}

static void Vector_initializeWithSize652(Vector176 *zself, int zinitialAllocated)
{
	zself->size = 0;
	zself->allocated = zinitialAllocated;
	zself->array = _allocateArray729(zinitialAllocated);
}

static void Vector_release653(Vector176 *zself)
{
	_freeArray933(((void *)zself->array), zself->allocated);
}

static Function33 *Vector__at654(Vector176 *zself, int zi)
{
	Function33 *t1;
	t1 = zself->array[zi];
	return t1;
}

static Function33 *Vector_last655(Vector176 *zself)
{
	Function33 *t1;
	t1 = Vector__at654(zself, (zself->size - 1));
	return t1;
}

static void Vector_add656(Vector176 *zself, Function33 *zvalue)
{
	int index1;
	index1 = zself->size;
	if((char)(zself->allocated == index1))
	{
		Vector_increaseAllocated659(zself);
	}
	zself->array[index1] = zvalue;
	(++zself->size);
}

static void Vector_removeLast657(Vector176 *zself)
{
	(--zself->size);
}

static char Vector_isEmpty658(Vector176 *zself)
{
	char t1;
	t1 = (char)(zself->size == 0);
	return t1;
}

static void Vector_increaseAllocated659(Vector176 *zself)
{
	Vector_allocate660(zself, (((zself->allocated * 3) / 2) + 1));
}

static void Vector_allocate660(Vector176 *zself, int zn)
{
	Function33 **a1;
	a1 = _allocateArray729(zn);
	_copyArray932(((void *)a1), ((void *)zself->array), zself->size);
	_freeArray933(((void *)zself->array), zself->allocated);
	zself->allocated = zn;
	zself->array = a1;
}

static char Association_isEmpty661(Association197 *zself)
{
	char t1;
	t1 = (char)(zself->key == ((ArrayType102 *)0));
	return t1;
}

static Association197 *_allocateArray662(int zn)
{
	Association197 *t1;
	t1 = ((Association197 *)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000008U))));
	return t1;
}

static char Association_isEmpty663(Association198 *zself)
{
	char t1;
	t1 = (char)(zself->key == ((FunctionType103 *)0));
	return t1;
}

static Association198 *_allocateArray664(int zn)
{
	Association198 *t1;
	t1 = ((Association198 *)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000008U))));
	return t1;
}

static IdentifierAssociation194 *_allocateArray665(int zn)
{
	IdentifierAssociation194 *t1;
	t1 = ((IdentifierAssociation194 *)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000008U))));
	return t1;
}

static unsigned char *_string666(void *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself);
	return t1;
}

static char _isEqual667(void *zself, unsigned char *zstr, int zsize)
{
	char t1;
	t1 = (_areBytesEquals261(((void *)zself), ((void *)zstr), _toByteSize670(zsize)) && (char)(_string666(zself)[zsize] == ((unsigned char)0U)));
	return t1;
}

static size_t _hash668(void *zself)
{
	size_t t1;
	t1 = ((size_t )zself);
	return t1;
}

static void _addToStringBuffer669(void *zself, StringBuffer2 *zsb)
{
	StringBuffer__shl862(zsb, _string666(zself));
}

static size_t _toByteSize670(int zself)
{
	size_t t1;
	t1 = ((size_t )zself);
	return t1;
}

static unsigned char *MemoryPool_allocateArray671(MemoryPool160 *zself, int zn)
{
	unsigned char *t1;
	t1 = ((unsigned char *)MemoryPool_allocateBytes297(zself, (((size_t )zn) * ((size_t)0x0000000000000001U))));
	return t1;
}

static void _add672(int zself, StringBuffer2 *zsb, unsigned long long zinteger, unsigned char *zstring, void *zidentifier)
{
	switch( zself )
	{
	case 2:
	{
		StringBuffer__shl861(zsb, zidentifier);
	}
	break;
	case 5:
	{
		StringBuffer__shl365(zsb, ((unsigned char)39U));
		StringBuffer__shl861(zsb, zidentifier);
	}
	break;
	case 3:
	{
		StringBuffer__shl1209(zsb, zinteger);
	}
	break;
	case 0:
	{
		unsigned int c1;
		c1 = ((unsigned int )zinteger);
		StringBuffer_addChar277(zsb, c1);
	}
	break;
	default:
	{
		StringBuffer__shl1591(zsb, zself);
	}
	}
}

static void _addToStringBuffer673(int zself, StringBuffer2 *zsb)
{
	unsigned char *s1;
	s1 = _findName674(zself, A1681);
	if((char)(s1 == ((unsigned char *)0)))
	{
		s1 = _findName674(zself, A1680);
	}
	if((char)(s1 == ((unsigned char *)0)))
	{
		s1 = S1690;
	}
	StringBuffer__shl862(zsb, s1);
}

static unsigned char *_findName674(int zself, Keyword200 *zlist)
{
	Keyword200 *item1;
	unsigned char *t3;
	item1 = zlist;
	while((char)((&item1[((size_t)0x0000000000000000U)])->name != ((unsigned char *)0)))
	{
		if((char)(zself == (&item1[((size_t)0x0000000000000000U)])->token))
		{
			unsigned char *t2;
			t2 = (&item1[((size_t)0x0000000000000000U)])->name;
			return t2;
		}
		(++item1);
	}
	t3 = ((unsigned char *)0);
	return t3;
}

static void _freeArray675(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000008U));
	_freeBytes258(zp, bytes1);
}

static BuiltinType100 *MemoryPool_new676(MemoryPool160 *zself, Module7 *v1x, Type98 *v2x, int v3x, size_t v4x, void *v5x, char v6x)
{
	BuiltinType100 *obj1;
	BuiltinType100 *t2;
	obj1 = MemoryPool_allocate677(zself);
	BuiltinType_initialize678(obj1, ((Scope8 *)v1x), v2x, v3x, v4x, v5x, v6x);
	t2 = obj1;
	return t2;
}

static BuiltinType100 *MemoryPool_allocate677(MemoryPool160 *zself)
{
	BuiltinType100 *t1;
	t1 = ((BuiltinType100 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000050U)));
	return t1;
}

static void BuiltinType_initialize678(BuiltinType100 *zself, Scope8 *zscope, Type98 *zparent, int zcode, size_t zsize, void *zname, char zsubType)
{
	Type_initialize520(((Type98 *)zself), zscope, zparent, zcode, zsize, zsize);
	zself->name = zname;
	((Type98 *)zself)->subType = zsubType;
}

static TypeDefinition91 *MemoryPool_new679(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, Type98 *v4x)
{
	TypeDefinition91 *obj1;
	TypeDefinition91 *t2;
	obj1 = MemoryPool_allocate680(zself);
	TypeDefinition_initialize699(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static TypeDefinition91 *MemoryPool_allocate680(MemoryPool160 *zself)
{
	TypeDefinition91 *t1;
	t1 = ((TypeDefinition91 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void Definition_initialize681(Definition32 *zself, Scope8 *zscope, int zline, void *zname, int zcode)
{
	zself->scope = zscope;
	zself->line = zline;
	zself->code = zcode;
	zself->name = zname;
}

static Module7 *Definition_module682(Definition32 *zself)
{
	Module7 *t1;
	t1 = zself->scope->module;
	return t1;
}

static Function33 *Definition_asFunction683(Definition32 *zself)
{
	Function33 *t1;
	_assert876((char)(zself->code == 4), S1777);
	t1 = ((Function33 *)zself);
	return t1;
}

static GenericFunction37 *Definition_asGenericFunction684(Definition32 *zself)
{
	GenericFunction37 *t1;
	_assert876((char)(zself->code == 0), S1775);
	t1 = ((GenericFunction37 *)zself);
	return t1;
}

static ExternFunction36 *Definition_asExternFunction685(Definition32 *zself)
{
	ExternFunction36 *t1;
	_assert876((char)(zself->code == 11), S1772);
	t1 = ((ExternFunction36 *)zself);
	return t1;
}

static Alias89 *Definition_asAlias686(Definition32 *zself)
{
	Alias89 *t1;
	_assert876((char)(zself->code == 2), S1770);
	t1 = ((Alias89 *)zself);
	return t1;
}

static GlobalVariable97 *Definition_asGlobalVariable687(Definition32 *zself)
{
	GlobalVariable97 *t1;
	_assert876((char)(zself->code == 3), S1771);
	t1 = ((GlobalVariable97 *)zself);
	return t1;
}

static Variable41 *Definition_asVariable688(Definition32 *zself)
{
	Variable41 *t1;
	_assert876((char)(zself->code == 6), S1765);
	t1 = ((Variable41 *)zself);
	return t1;
}

static Parameter35 *Definition_asParameter689(Definition32 *zself)
{
	Parameter35 *t1;
	_assert876((char)(zself->code == 5), S1768);
	t1 = ((Parameter35 *)zself);
	return t1;
}

static VargParameter42 *Definition_asVargParameter690(Definition32 *zself)
{
	VargParameter42 *t1;
	_assert876((char)(zself->code == 12), S1767);
	t1 = ((VargParameter42 *)zself);
	return t1;
}

static LocalAlias43 *Definition_asLocalAlias691(Definition32 *zself)
{
	LocalAlias43 *t1;
	_assert876((char)(zself->code == 13), S1766);
	t1 = ((LocalAlias43 *)zself);
	return t1;
}

static Attribute107 *Definition_asAttribute692(Definition32 *zself)
{
	Attribute107 *t1;
	_assert876((char)(zself->code == 7), S1763);
	t1 = ((Attribute107 *)zself);
	return t1;
}

static TypeArgument106 *Definition_asTypeArgument693(Definition32 *zself)
{
	TypeArgument106 *t1;
	_assert876((char)(zself->code == 8), S1764);
	t1 = ((TypeArgument106 *)zself);
	return t1;
}

static OperationDefinition93 *Definition_asOperation694(Definition32 *zself)
{
	OperationDefinition93 *t1;
	t1 = ((OperationDefinition93 *)zself);
	return t1;
}

static TypeDefinition91 *Definition_asType695(Definition32 *zself)
{
	TypeDefinition91 *t1;
	_assert876((char)(zself->code == 9), S1769);
	t1 = ((TypeDefinition91 *)zself);
	return t1;
}

static SubTypeDefinition92 *Definition_asSubType696(Definition32 *zself)
{
	SubTypeDefinition92 *t1;
	_assert876((char)(zself->code == 10), S1769);
	t1 = ((SubTypeDefinition92 *)zself);
	return t1;
}

static GenericType94 *Definition_asGenericType697(Definition32 *zself)
{
	GenericType94 *t1;
	_assert876((char)(zself->code == 1), S1773);
	t1 = ((GenericType94 *)zself);
	return t1;
}

static char Definition_hasLocation698(Definition32 *zself)
{
	char t1;
	t1 = (char)(zself->line != -1);
	return t1;
}

static void TypeDefinition_initialize699(TypeDefinition91 *zself, Module7 *zmodule, int zline, void *zname, Type98 *ztype)
{
	Definition_initialize681(((Definition32 *)zself), ((Scope8 *)zmodule), zline, zname, 9);
	zself->type = ztype;
}

static DefinitionItem189 **MemoryPool_allocateArray700(MemoryPool160 *zself, int zn)
{
	DefinitionItem189 **t1;
	t1 = ((DefinitionItem189 **)MemoryPool_allocateBytes297(zself, (((size_t )zn) * ((size_t)0x0000000000000004U))));
	return t1;
}

static void DefinitionItem_initialize701(DefinitionItem189 *zself, Definition32 *zdefinition, unsigned char zvisibility)
{
	zself->definition = zdefinition;
	zself->visibility = zvisibility;
}

static char DefinitionItem_isPublic702(DefinitionItem189 *zself)
{
	char t1;
	t1 = (char)(zself->visibility == ((unsigned char)0U));
	return t1;
}

static DefinitionItem189 *MemoryPool_new703(MemoryPool160 *zself, Definition32 *v1x, unsigned char v2x)
{
	DefinitionItem189 *obj1;
	DefinitionItem189 *t2;
	obj1 = MemoryPool_allocate704(zself);
	DefinitionItem_initialize701(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static DefinitionItem189 *MemoryPool_allocate704(MemoryPool160 *zself)
{
	DefinitionItem189 *t1;
	t1 = ((DefinitionItem189 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static Definition32 *MemoryPool_new705(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, int v4x)
{
	Definition32 *obj1;
	Definition32 *t2;
	obj1 = MemoryPool_allocate706(zself);
	Definition_initialize681(obj1, ((Scope8 *)v1x), v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static Definition32 *MemoryPool_allocate706(MemoryPool160 *zself)
{
	Definition32 *t1;
	t1 = ((Definition32 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static DefinitionDictionary9 *MemoryPool_new707(MemoryPool160 *zself, MemoryPool160 *v1x, int v2x)
{
	DefinitionDictionary9 *obj1;
	DefinitionDictionary9 *t2;
	obj1 = MemoryPool_allocate708(zself);
	DefinitionDictionary_initialize446(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static DefinitionDictionary9 *MemoryPool_allocate708(MemoryPool160 *zself)
{
	DefinitionDictionary9 *t1;
	t1 = ((DefinitionDictionary9 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void MetaType_initialize709(MetaType99 *zself, Type98 *ztype)
{
	Type98 *parent1;
	parent1 = ((Type98 *)0);
	if((char)(ztype->parent != ((Type98 *)0)))
	{
		parent1 = ((Type98 *)Type_metaType523(ztype->parent));
	}
	Type_initialize520(((Type98 *)zself), (&ztype->scope), parent1, 0, ((size_t)0xFFFFFFFFFFFFFFFFU), ((size_t)0x0000000000000001U));
	zself->type = ztype;
	ztype->cachedMeta = zself;
}

static OperationDefinition93 *MemoryPool_new710(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, int v4x, int v5x)
{
	OperationDefinition93 *obj1;
	OperationDefinition93 *t2;
	obj1 = MemoryPool_allocate711(zself);
	OperationDefinition_initialize712(obj1, v1x, v2x, v3x, v4x, v5x);
	t2 = obj1;
	return t2;
}

static OperationDefinition93 *MemoryPool_allocate711(MemoryPool160 *zself)
{
	OperationDefinition93 *t1;
	t1 = ((OperationDefinition93 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void OperationDefinition_initialize712(OperationDefinition93 *zself, Module7 *zmodule, int zline, void *zname, int zcode, int zecode)
{
	Definition_initialize681(((Definition32 *)zself), ((Scope8 *)zmodule), zline, zname, zcode);
	zself->ecode = zecode;
}

static void PointerType_initialize713(PointerType101 *zself, Scope8 *zscope, Type98 *ztarget, Type98 *zparent, void *zname)
{
	Type_initialize520(((Type98 *)zself), zscope, zparent, 9, ((size_t)0x0000000000000004U), ((size_t)0x0000000000000004U));
	zself->name = zname;
	((Type98 *)zself)->subType = (char)(zname != ((void *)0));
	zself->target = ztarget;
}

static char Association_isEmpty714(Association195 *zself)
{
	char t1;
	t1 = (char)(zself->key == ((String8Expression66 *)0));
	return t1;
}

static Association195 *_allocateArray715(int zn)
{
	Association195 *t1;
	t1 = ((Association195 *)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000008U))));
	return t1;
}

static char Association_isEmpty716(Association196 *zself)
{
	char t1;
	t1 = (char)(zself->key == ((String16Expression67 *)0));
	return t1;
}

static Association196 *_allocateArray717(int zn)
{
	Association196 *t1;
	t1 = ((Association196 *)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000008U))));
	return t1;
}

static char Association_isEmpty718(Association199 *zself)
{
	char t1;
	t1 = (char)(zself->key == ((IntegerExpression20 *)0));
	return t1;
}

static Association199 *_allocateArray719(int zn)
{
	Association199 *t1;
	t1 = ((Association199 *)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000008U))));
	return t1;
}

static void Prototype_use720(Prototype31 *zself)
{
	zself->used = 1;
}

static void Function_initialize721(Function33 *zself, Scope8 *zscope, ASTFunction115 *zsource, Type98 *zcontext)
{
	Definition_initialize681(((Definition32 *)((Prototype31 *)zself)), zscope, ((Location45 *)zsource)->line, zsource->name, 4);
	((Prototype31 *)zself)->state = ((unsigned char)0U);
	((Prototype31 *)zself)->used = 0;
	((Prototype31 *)zself)->namingConvention = ((ASTElement109 *)zsource)->directives->namingConvention;
	((Prototype31 *)zself)->callingConvention = ((ASTElement109 *)zsource)->directives->callingConvention;
	((Prototype31 *)zself)->returnTypes = ((TypeSequence108 *)0);
	zself->source = zsource;
	Collection_initialize726((&zself->parameters));
	zself->body = ((Block38 *)0);
	zself->entry = ((ASTElement109 *)zsource)->directives->entry;
	zself->isMacro = zsource->isMacro;
	zself->isVariadic = zsource->isVariadic;
	zself->publicName = ((unsigned char *)0);
	zself->returnCount = 0;
	zself->context = zcontext;
	zself->composites = ((CompositeExpression75 *)0);
	((Prototype31 *)zself)->generator = ((void *)0);
}

static void Function_createParameter722(Function33 *zself, int zline, void *zname, Type98 *ztype, char zgeneralizable)
{
	Scope8 *scope1;
	Program5 *program2;
	Parameter35 *param3;
	scope1 = ((Definition32 *)zself)->scope;
	program2 = scope1->module->program;
	param3 = MemoryPool_new873(program2->pool, scope1, zline, zname, ztype, zgeneralizable);
	Collection_add727((&zself->parameters), param3);
}

static void Function_prepareLocals723(Function33 *zself)
{
	CompositeExpression75 *p1;
	p1 = zself->composites;
	while((char)(p1 != ((CompositeExpression75 *)0)))
	{
		((Expression21 *)p1)->generator = ((void *)0);
		p1 = p1->nextComposite;
	}
}

static char Function_isInstance724(Function33 *zself)
{
	char t1;
	t1 = zself->source->generic;
	return t1;
}

static void Function_addToStringBuffer725(Function33 *zself, StringBuffer2 *zsb)
{
	char comma1;
	if((char)(zself->context != ((Type98 *)0)))
	{
		StringBuffer__shl925(zsb, zself->context);
		StringBuffer__shl365(zsb, ((unsigned char)46U));
	}
	StringBuffer__shl861(zsb, ((Definition32 *)zself)->name);
	StringBuffer__shl367(zsb, S1786);
	comma1 = 0;
	{
		{
			Collection34 *self2;
			Parameter35 *e3;
			self2 = (&zself->parameters);
			e3 = self2->firstElement;
			while((char)(e3 != ((Parameter35 *)0)))
			{
				{
					{
						if(comma1)
						{
							StringBuffer__shl367(zsb, S1954);
						}
						comma1 = 1;
						if((char)(e3->type == ((Type98 *)0)))
						{
							StringBuffer__shl365(zsb, ((unsigned char)63U));
						}
						else
						{
							StringBuffer__shl925(zsb, e3->type);
							if(e3->generalizable)
							{
								StringBuffer__shl365(zsb, ((unsigned char)43U));
							}
						}
					}
				}
				e3 = e3->nextSibling;
			}
		}
	}
	StringBuffer__shl367(zsb, S1776);
	if((char)(((Prototype31 *)zself)->returnTypes == ((TypeSequence108 *)0)))
	{
		StringBuffer__shl365(zsb, ((unsigned char)63U));
	}
	else
	{
		StringBuffer__shl924(zsb, ((Prototype31 *)zself)->returnTypes);
	}
}

static void Collection_initialize726(Collection34 *zself)
{
	zself->size = 0;
	zself->firstElement = ((Parameter35 *)0);
	zself->lastElement = ((Parameter35 *)0);
}

static void Collection_add727(Collection34 *zself, Parameter35 *ze)
{
	if((char)(zself->lastElement != ((Parameter35 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((Parameter35 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((Parameter35 *)0);
}

static char Collection_isEmpty728(Collection34 *zself)
{
	char t1;
	t1 = (char)(zself->firstElement == ((Parameter35 *)0));
	return t1;
}

static Function33 **_allocateArray729(int zn)
{
	Function33 **t1;
	t1 = ((Function33 **)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000004U))));
	return t1;
}

static void CollectionPoolElement_initialize730(CollectionPoolElement191 *zself, Function33 *zobject)
{
	zself->object = zobject;
}

static void BuilderContext_initialize731(BuilderContext177 *zself, BuilderContext177 *zparent, Builder171 *zbuilder, Scope8 *zscope, MemoryPool160 *zpool, MacroContext178 *zmacro)
{
	zself->parent = zparent;
	zself->builder = zbuilder;
	zself->pool = zpool;
	zself->base = zscope;
	zself->scope = zscope;
	zself->block = ((Block38 *)0);
	zself->returnCount = 0;
	zself->returnTypes = ((TypeSequence108 *)0);
	zself->fixedReturnTypes = ((TypeSequence108 *)0);
	zself->breakContext = ((BreakContext179 *)0);
	zself->extra = ((ExpressionList61 *)0);
	zself->macroContext = zmacro;
	zself->composites = ((CompositeExpression75 *)0);
}

static char BuilderContext_declareContent732(BuilderContext177 *zself, ASTNode110 *zsource, Type98 *zcontext, MetaType99 *zmetaType)
{
	char ok1;
	Program5 *program2;
	Module7 *module3;
	Scope8 *scope4;
	char t28;
	ok1 = 1;
	program2 = BuilderContext_program835(zself);
	module3 = BuilderContext_module836(zself);
	scope4 = zself->scope;
	{
		Collection111 *self5;
		ASTElement109 *e6;
		self5 = (&zsource->children);
		e6 = self5->firstElement;
		while((char)(e6 != ((ASTElement109 *)0)))
		{
			{
				switch( e6->code )
				{
				case 11:
				{
					ASTFunction115 *sf7;
					sf7 = ASTElement_asFunction866(e6);
					if(sf7->generic)
					{
						GenericFunction37 *d8;
						d8 = Program_createGenericFunction427(program2, scope4, sf7, ((Type98 *)zmetaType));
						(ok1 &= BuilderContext_addContextualDefinition840(zself, ((Type98 *)zmetaType), ((Definition32 *)d8), ((ASTElement109 *)sf7)->directives->visibility));
					}
					else
					{
						Function33 *d9;
						d9 = Program_createFunction423(program2, scope4, sf7, ((Type98 *)zmetaType));
						(ok1 &= BuilderContext_addContextualDefinition840(zself, ((Type98 *)zmetaType), ((Definition32 *)d9), ((ASTElement109 *)sf7)->directives->visibility));
					}
				}
				break;
				case 12:
				{
					Alias89 *p10;
					p10 = Program_createAlias426(program2, scope4, ((Type98 *)zmetaType), ASTElement_asAlias869(e6));
					(ok1 &= BuilderContext_addContextualDefinition840(zself, ((Type98 *)zmetaType), ((Definition32 *)p10), e6->directives->visibility));
				}
				break;
				case 13:
				{
					GlobalVariable97 *d11;
					d11 = Program_createGlobalVariable425(program2, scope4, ASTElement_asGlobalVariable865(e6));
					(ok1 &= BuilderContext_addContextualDefinition840(zself, ((Type98 *)zmetaType), ((Definition32 *)d11), e6->directives->visibility));
				}
				break;
				case 14:
				{
					(ok1 &= BuilderContext_declareStructure735(zself, ASTElement_asType864(e6), ((Type98 *)zmetaType)));
				}
				break;
				case 15:
				{
					(ok1 &= BuilderContext_declareType736(zself, ASTElement_asType864(e6), ((Type98 *)zmetaType)));
				}
				break;
				case 20:
				{
					ExternFunction36 *f12;
					f12 = Program_createExternFunction424(program2, module3, ASTElement_asExternFunction867(e6), scope4, ((Type98 *)zmetaType));
					(ok1 &= BuilderContext_addContextualDefinition840(zself, ((Type98 *)zmetaType), ((Definition32 *)f12), e6->directives->visibility));
				}
				break;
				case 1:
				{
					ASTFunction115 *sf13;
					sf13 = ASTElement_asFunction866(e6);
					if(sf13->generic)
					{
						GenericFunction37 *d14;
						d14 = Program_createGenericFunction427(program2, scope4, sf13, ((Type98 *)0));
						(ok1 &= BuilderContext_addGlobalDefinition839(zself, scope4, ((Definition32 *)d14), ((ASTElement109 *)sf13)->directives->visibility));
					}
					else
					{
						Function33 *d15;
						d15 = Program_createFunction423(program2, scope4, sf13, ((Type98 *)0));
						(ok1 &= BuilderContext_addGlobalDefinition839(zself, scope4, ((Definition32 *)d15), ((ASTElement109 *)sf13)->directives->visibility));
					}
				}
				break;
				case 2:
				{
					Alias89 *d16;
					d16 = Program_createAlias426(program2, scope4, ((Type98 *)0), ASTElement_asAlias869(e6));
					(ok1 &= BuilderContext_addGlobalDefinition839(zself, scope4, ((Definition32 *)d16), e6->directives->visibility));
				}
				break;
				case 3:
				{
					GlobalVariable97 *d17;
					d17 = Program_createGlobalVariable425(program2, scope4, ASTElement_asGlobalVariable865(e6));
					(ok1 &= BuilderContext_addGlobalDefinition839(zself, scope4, ((Definition32 *)d17), e6->directives->visibility));
				}
				break;
				case 4:
				{
					(ok1 &= BuilderContext_declareStructure735(zself, ASTElement_asType864(e6), ((Type98 *)0)));
				}
				break;
				case 5:
				{
					(ok1 &= BuilderContext_declareType736(zself, ASTElement_asType864(e6), ((Type98 *)0)));
				}
				break;
				case 18:
				{
					ExternFunction36 *d18;
					d18 = Program_createExternFunction424(program2, module3, ASTElement_asExternFunction867(e6), scope4, ((Type98 *)0));
					(ok1 &= BuilderContext_addGlobalDefinition839(zself, scope4, ((Definition32 *)d18), e6->directives->visibility));
				}
				break;
				case 17:
				{
					(ok1 &= BuilderContext_processImport737(zself, ASTElement_asImport871(e6)));
				}
				break;
				case 16:
				{
					Symbol29 *symbol19;
					symbol19 = Program_getSymbol417(program2, ASTElement_asSymbol870(e6));
					(ok1 &= BuilderContext_addContextualSymbol841(zself, zcontext, symbol19));
				}
				break;
				case 6:
				{
					ASTFunction115 *sf20;
					sf20 = ASTElement_asFunction866(e6);
					if(sf20->generic)
					{
						GenericFunction37 *d21;
						d21 = Program_createGenericFunction427(program2, scope4, sf20, zcontext);
						(ok1 &= BuilderContext_addContextualDefinition840(zself, zcontext, ((Definition32 *)d21), ((ASTElement109 *)sf20)->directives->visibility));
					}
					else
					{
						Function33 *d22;
						d22 = Program_createFunction423(program2, scope4, sf20, zcontext);
						(ok1 &= BuilderContext_addContextualDefinition840(zself, zcontext, ((Definition32 *)d22), ((ASTElement109 *)sf20)->directives->visibility));
					}
				}
				break;
				case 7:
				{
					Alias89 *p23;
					p23 = Program_createAlias426(program2, scope4, zcontext, ASTElement_asAlias869(e6));
					(ok1 &= BuilderContext_addContextualDefinition840(zself, zcontext, ((Definition32 *)p23), e6->directives->visibility));
				}
				break;
				case 8:
				{
					if((!Type_isPointer548(zcontext)))
					{
						BuilderContext_reportSourceError1295(zself, ((Location45 *)e6), S2026, zcontext);
						ok1 = 0;
					}
					else
					{
						Type98 *target24;
						target24 = Type_asPointer533(zcontext)->target;
						if((!Type_isStructure549(target24)))
						{
							BuilderContext_reportSourceError1295(zself, ((Location45 *)e6), S2026, target24);
							ok1 = 0;
						}
						else
						{
							StructureType104 *structure25;
							Attribute107 *a26;
							structure25 = Type_asStructure535(Type_asPointer533(zcontext)->target);
							a26 = StructureType_createAttribute1030(structure25, ASTElement_asAttribute868(e6));
							(ok1 &= BuilderContext_addContextualDefinition840(zself, zcontext, ((Definition32 *)a26), e6->directives->visibility));
						}
					}
				}
				break;
				case 9:
				{
					(ok1 &= BuilderContext_declareStructure735(zself, ASTElement_asType864(e6), zcontext));
				}
				break;
				case 10:
				{
					(ok1 &= BuilderContext_declareType736(zself, ASTElement_asType864(e6), zcontext));
				}
				break;
				case 19:
				{
					ExternFunction36 *f27;
					f27 = Program_createExternFunction424(program2, module3, ASTElement_asExternFunction867(e6), scope4, zcontext);
					(ok1 &= BuilderContext_addContextualDefinition840(zself, zcontext, ((Definition32 *)f27), e6->directives->visibility));
				}
				break;
				}
			}
			e6 = e6->nextSibling;
		}
	}
	(ok1 &= BuilderContext_declareExtensions733(zself, zsource));
	if((char)(zmetaType != ((MetaType99 *)0)))
	{
		((Type98 *)zmetaType)->state = (ok1?((unsigned char)1U):((unsigned char)2U));
	}
	t28 = ok1;
	return t28;
}

static char BuilderContext_declareExtensions733(BuilderContext177 *zself, ASTNode110 *zsource)
{
	char ok1;
	char t4;
	ok1 = 1;
	{
		Collection111 *self2;
		ASTElement109 *e3;
		self2 = (&zsource->children);
		e3 = self2->firstElement;
		while((char)(e3 != ((ASTElement109 *)0)))
		{
			{
				if((char)(e3->code == 21))
				{
					(ok1 &= BuilderContext_declareExtension734(zself, ASTElement_asExtension872(e3)));
				}
			}
			e3 = e3->nextSibling;
		}
	}
	t4 = ok1;
	return t4;
}

static char BuilderContext_declareExtension734(BuilderContext177 *zself, ASTExtension119 *zsource)
{
	Type98 *type1;
	char ok2;
	Scope8 *scope3;
	char t8;
	type1 = BuilderContext_evaluateType802(zself, zsource->type);
	if((char)(type1 == ((Type98 *)0)))
	{
		char t4;
		t4 = 0;
		return t4;
	}
	ok2 = BuilderContext_defineType745(zself, type1);
	if((!ok2))
	{
		char t5;
		t5 = 0;
		return t5;
	}
	scope3 = Program_getScope420(BuilderContext_program835(zself), zself->scope, 64);
	{
		Scope8 *initialScope6;
		BuilderContext177 cx7;
		initialScope6 = scope3;
		BuilderContext_initialize731((&cx7), zself, zself->builder, initialScope6, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
		{
			(ok2 &= BuilderContext_declareContent732((&cx7), ((ASTNode110 *)zsource), type1, Type_metaType523(type1)));
		}
		Builder_releaseLocalPool624(zself->builder);
	}
	t8 = ok2;
	return t8;
}

static char BuilderContext_declareStructure735(BuilderContext177 *zself, ASTType118 *zss, Type98 *zcontext)
{
	Program5 *program1;
	Module7 *module2;
	Scope8 *scope3;
	Definition32 *d4;
	program1 = BuilderContext_program835(zself);
	module2 = BuilderContext_module836(zself);
	scope3 = zself->scope;
	if(ASTType_generic1362(zss))
	{
		d4 = ((Definition32 *)Program_createGenericType428(program1, scope3, zss));
	}
	else
	{
		StructureType104 *structure5;
		structure5 = Program_createStructure422(program1, scope3, zss, ((ExpressionList61 *)0));
		d4 = ((Definition32 *)Program_getTypeDefinition415(program1, module2, ((Location45 *)zss)->line, zss->name, ((Type98 *)structure5)));
	}
	if((char)(zcontext == ((Type98 *)0)))
	{
		char t6;
		t6 = BuilderContext_addGlobalDefinition839(zself, scope3, d4, ((ASTElement109 *)zss)->directives->visibility);
		return t6;
	}
	else
	{
		char t7;
		t7 = BuilderContext_addContextualDefinition840(zself, zcontext, d4, ((ASTElement109 *)zss)->directives->visibility);
		return t7;
	}
}

static char BuilderContext_declareType736(BuilderContext177 *zself, ASTType118 *zst, Type98 *zcontext)
{
	Program5 *program1;
	Module7 *module2;
	Scope8 *scope3;
	Definition32 *d4;
	program1 = BuilderContext_program835(zself);
	module2 = BuilderContext_module836(zself);
	scope3 = zself->scope;
	if(ASTType_generic1362(zst))
	{
		d4 = ((Definition32 *)Program_createGenericType428(program1, scope3, zst));
	}
	else
	{
		d4 = ((Definition32 *)Program_getSubTypeDefinition416(program1, scope3, zst));
	}
	if((char)(zcontext == ((Type98 *)0)))
	{
		char t5;
		t5 = BuilderContext_addGlobalDefinition839(zself, scope3, d4, ((ASTElement109 *)zst)->directives->visibility);
		return t5;
	}
	else
	{
		char t6;
		t6 = BuilderContext_addContextualDefinition840(zself, zcontext, d4, ((ASTElement109 *)zst)->directives->visibility);
		return t6;
	}
}

static char BuilderContext_processImport737(BuilderContext177 *zself, ASTImport113 *zi)
{
	unsigned char *filename1;
	Module7 *child2;
	char ok3;
	char t11;
	filename1 = Module_getFullName453(BuilderContext_module836(zself), zi->name);
	child2 = Builder_loadModule622(zself->builder, filename1, BuilderContext_module836(zself)->filename, ((Location45 *)zi)->line);
	if((char)(child2 == ((Module7 *)0)))
	{
		char t4;
		t4 = 0;
		return t4;
	}
	ok3 = 1;
	{
		Scope8 *self5;
		self5 = ((Scope8 *)child2);
		{
			DefinitionDictionary9 *self6;
			self6 = (&self5->definitions);
			if((char)(self6->names != ((DefinitionItem189 **)0)))
			{
				{
					int self7;
					int i8;
					self7 = self6->size;
					i8 = 0;
					while((char)(i8 < self7))
					{
						{
							DefinitionItem189 *item9;
							item9 = self6->names[i8];
							while((char)(item9 != ((DefinitionItem189 *)0)))
							{
								if(DefinitionItem_isPublic702(item9))
								{
									{
										Definition32 *d10;
										d10 = item9->definition;
										{
											(ok3 &= BuilderContext_addGlobalDefinition839(zself, zself->scope, d10, ((ASTElement109 *)zi)->directives->visibility));
										}
									}
								}
								item9 = item9->next;
							}
						}
						(++i8);
					}
				}
			}
		}
	}
	t11 = ok3;
	return t11;
}

static char BuilderContext_defineAlias738(BuilderContext177 *zself, Alias89 *zalias)
{
	switch( zalias->state )
	{
	case ((unsigned char)1U):
	{
		char t1;
		t1 = 1;
		return t1;
	}
	break;
	case ((unsigned char)2U):
	{
		char t2;
		t2 = 0;
		return t2;
	}
	break;
	case ((unsigned char)3U):
	{
		char t3;
		BuilderContext_reportDefinitionError855(zself, ((Definition32 *)zalias), S1975, ((Definition32 *)zalias)->name);
		zalias->state = ((unsigned char)2U);
		t3 = 0;
		return t3;
	}
	break;
	default:
	{
		char ok4;
		char t12;
		zalias->state = ((unsigned char)3U);
		Alias_use1386(zalias);
		ok4 = 1;
		{
			Scope8 *initialScope5;
			BuilderContext177 cx6;
			initialScope5 = ((Definition32 *)zalias)->scope;
			BuilderContext_initialize731((&cx6), zself, zself->builder, initialScope5, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
			{
				ASTExpression140 *s7;
				Expression21 *e8;
				s7 = zalias->source->expression;
				if((char)(zalias->context != ((Type98 *)0)))
				{
					{
						BuilderContext177 *self9;
						Scope8 scope10;
						self9 = (&cx6);
						Scope_initialize442((&scope10), self9->scope, self9->scope->module, self9->pool, 64);
						self9->scope = (&scope10);
						{
							Parameter35 *p11;
							p11 = MemoryPool_new1387(BuilderContext_program835((&cx6))->pool, Definition_module682(((Definition32 *)zalias)), ((Definition32 *)zalias)->line, (&identifiers1661)->self, zalias->context, 1);
							BuilderContext_addLocalDefinition838((&cx6), ((Definition32 *)p11));
							e8 = BuilderContext_evaluateExpression761((&cx6), s7, ((Type98 *)0));
						}
						{
							self9->scope = (&scope10)->parent;
						}
					}
				}
				else
				{
					e8 = BuilderContext_evaluateExpression761((&cx6), s7, ((Type98 *)0));
				}
				if((char)(e8 == ((Expression21 *)0)))
				{
					ok4 = 0;
				}
				else
				{
					if(((!Expression_isType505(e8)) && (!Expression_isConstant501(e8))))
					{
						BuilderContext_reportSourceError1294((&cx6), ((Location45 *)s7), S2004);
						ok4 = 0;
					}
					else
					{
						zalias->expression = e8;
					}
				}
			}
			Builder_releaseLocalPool624(zself->builder);
		}
		zalias->state = (ok4?((unsigned char)1U):((unsigned char)2U));
		t12 = ok4;
		return t12;
	}
	}
}

static char BuilderContext_defineFunctionType739(BuilderContext177 *zself, Function33 *zf)
{
	switch( ((Prototype31 *)zf)->state )
	{
	case ((unsigned char)2U):
	{
		char t1;
		t1 = 0;
		return t1;
	}
	break;
	case ((unsigned char)1U):
	{
		char t2;
		t2 = 1;
		return t2;
	}
	break;
	case ((unsigned char)3U):
	{
		char t3;
		BuilderContext_reportDefinitionError855(zself, ((Definition32 *)zf), S1984, ((Definition32 *)zf)->name);
		((Prototype31 *)zf)->state = ((unsigned char)2U);
		t3 = 0;
		return t3;
	}
	break;
	default:
	{
		char ok4;
		char t17;
		((Prototype31 *)zf)->state = ((unsigned char)3U);
		Prototype_use720(((Prototype31 *)zf));
		ok4 = 1;
		{
			Scope8 *initialScope5;
			BuilderContext177 cx6;
			initialScope5 = ((Definition32 *)zf)->scope;
			BuilderContext_initialize731((&cx6), zself, zself->builder, initialScope5, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
			{
				char needBody7;
				ASTFunction115 *source8;
				if((!Function_isInstance724(zf)))
				{
					if((char)(zf->context != ((Type98 *)0)))
					{
						Function_createParameter722(zf, ((Location45 *)zf->source)->line, (&identifiers1661)->self, zf->context, 1);
					}
					{
						Collection202 *self9;
						ASTParameter120 *e10;
						self9 = zf->source->parameters;
						e10 = self9->firstElement;
						while((char)(e10 != ((ASTParameter120 *)0)))
						{
							{
								Type98 *type11;
								type11 = BuilderContext_evaluateSimpleType801((&cx6), e10->type);
								if((char)(type11 != ((Type98 *)0)))
								{
									Function_createParameter722(zf, ((Location45 *)e10)->line, e10->name, type11, 1);
								}
								else
								{
									ok4 = 0;
								}
							}
							e10 = e10->nextSibling;
						}
					}
				}
				needBody7 = 0;
				source8 = zf->source;
				if((char)(source8->returnTypes != ((Collection203 *)0)))
				{
					{
						BuilderContext177 *self12;
						Scope8 scope13;
						self12 = (&cx6);
						Scope_initialize442((&scope13), self12->scope, self12->scope->module, self12->pool, 64);
						self12->scope = (&scope13);
						{
							{
								{
									Collection34 *self14;
									Parameter35 *e15;
									self14 = (&zf->parameters);
									e15 = self14->firstElement;
									while((char)(e15 != ((Parameter35 *)0)))
									{
										{
											if((char)(((Definition32 *)e15)->name != ((void *)0)))
											{
												{
													(ok4 &= BuilderContext_addLocalDefinition838((&cx6), ((Definition32 *)e15)));
												}
											}
										}
										e15 = e15->nextSibling;
									}
								}
							}
							if(ok4)
							{
								TypeSequence108 *types16;
								types16 = BuilderContext_evaluateSimpleTypes799((&cx6), source8->returnTypes);
								((Prototype31 *)zf)->returnTypes = types16;
								(ok4 &= (char)(types16 != ((TypeSequence108 *)0)));
							}
						}
						{
							self12->scope = (&scope13)->parent;
						}
					}
				}
				else
				{
					needBody7 = 1;
				}
				if((ok4 && (!zf->isMacro)))
				{
					if(needBody7)
					{
						ok4 = BuilderContext_defineFunctionBody741((&cx6), zf);
					}
					else
					{
						Vector_add656((&(&cx6)->builder->functionsToDefine), zf);
					}
				}
			}
			Builder_releaseLocalPool624(zself->builder);
		}
		((Prototype31 *)zf)->state = (ok4?((unsigned char)1U):((unsigned char)2U));
		t17 = ok4;
		return t17;
	}
	}
}

static char BuilderContext_defineGenericFunction740(BuilderContext177 *zself, GenericFunction37 *zf)
{
	switch( zf->state )
	{
	case ((unsigned char)1U):
	{
		char t1;
		t1 = 1;
		return t1;
	}
	break;
	case ((unsigned char)2U):
	{
		char t2;
		t2 = 0;
		return t2;
	}
	break;
	case ((unsigned char)3U):
	{
		char t3;
		BuilderContext_reportDefinitionError855(zself, ((Definition32 *)zf), S1981, ((Definition32 *)zf)->name);
		zf->state = ((unsigned char)2U);
		t3 = 0;
		return t3;
	}
	break;
	default:
	{
		char ok4;
		char t14;
		ok4 = 1;
		zf->state = ((unsigned char)3U);
		{
			Scope8 *initialScope5;
			BuilderContext177 cx6;
			initialScope5 = ((Definition32 *)zf)->scope;
			BuilderContext_initialize731((&cx6), zself, zself->builder, initialScope5, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
			{
				{
					BuilderContext177 *self7;
					Scope8 scope8;
					self7 = (&cx6);
					Scope_initialize442((&scope8), self7->scope, self7->scope->module, self7->pool, 64);
					self7->scope = (&scope8);
					{
						if((char)(zf->context != ((Type98 *)0)))
						{
							char generalizable9;
							Type98 *type10;
							generalizable9 = 1;
							type10 = zf->context;
							if(zf->source->selfGeneric)
							{
								generalizable9 = 0;
								type10 = ((Type98 *)0);
							}
							GenericFunction_createParameter1328(zf, ((Location45 *)zf->source)->line, (&identifiers1661)->self, type10, generalizable9);
						}
						{
							Collection202 *self11;
							ASTParameter120 *e12;
							self11 = zf->source->parameters;
							e12 = self11->firstElement;
							while((char)(e12 != ((ASTParameter120 *)0)))
							{
								{
									Type98 *type13;
									type13 = ((Type98 *)0);
									if((char)(e12->type != ((ASTExpression140 *)0)))
									{
										type13 = BuilderContext_evaluateSimpleType801((&cx6), e12->type);
										if((char)(type13 == ((Type98 *)0)))
										{
											ok4 = 0;
										}
									}
									GenericFunction_createParameter1328(zf, ((Location45 *)e12)->line, e12->name, type13, 1);
								}
								e12 = e12->nextSibling;
							}
						}
					}
					{
						self7->scope = (&scope8)->parent;
					}
				}
			}
			Builder_releaseLocalPool624(zself->builder);
		}
		zf->state = (ok4?((unsigned char)1U):((unsigned char)2U));
		t14 = ok4;
		return t14;
	}
	}
}

static char BuilderContext_defineFunctionBody741(BuilderContext177 *zself, Function33 *zf)
{
	char ok1;
	char t9;
	ok1 = 1;
	{
		Scope8 scope2;
		Scope_initialize442((&scope2), zself->scope, zself->scope->module, zself->pool, 64);
		zself->scope = (&scope2);
		{
			Block38 *block3;
			if(zf->isVariadic)
			{
				zself->extra = MemoryPool_new898(zself->pool);
				{
					Collection34 *self4;
					Parameter35 *e5;
					self4 = (&zf->parameters);
					e5 = self4->firstElement;
					while((char)(e5 != ((Parameter35 *)0)))
					{
						{
							if((char)(((Definition32 *)e5)->name == ((void *)0)))
							{
								CollectionPool_add903(((CollectionPool62 *)zself->extra), zself->pool, e5->expression);
							}
						}
						e5 = e5->nextSibling;
					}
				}
			}
			{
				{
					Collection34 *self6;
					Parameter35 *e7;
					self6 = (&zf->parameters);
					e7 = self6->firstElement;
					while((char)(e7 != ((Parameter35 *)0)))
					{
						{
							if((char)(((Definition32 *)e7)->name != ((void *)0)))
							{
								{
									(ok1 &= BuilderContext_addLocalDefinition838(zself, ((Definition32 *)e7)));
								}
							}
						}
						e7 = e7->nextSibling;
					}
				}
			}
			if((!ok1))
			{
				goto L8;
			}
			zself->fixedReturnTypes = ((Prototype31 *)zf)->returnTypes;
			block3 = BuilderContext_evaluateBlock803(zself, zf->source->body);
			if((char)(block3 == ((Block38 *)0)))
			{
				ok1 = 0;
				goto L8;
			}
			if((!BuilderContext_finalizeBody742(zself, zf, block3)))
			{
				ok1 = 0;
				goto L8;
			}
			zf->body = block3;
			zf->publicName = Builder_getPublicName930(zself->builder, zf);
			zf->composites = zself->composites;
		}
		L8: ;
		{
			zself->scope = (&scope2)->parent;
		}
	}
	t9 = ok1;
	return t9;
}

static char BuilderContext_finalizeBody742(BuilderContext177 *zself, Function33 *zf, Block38 *zbody)
{
	char t3;
	if(((!zbody->terminated) || (char)(zself->returnTypes == ((TypeSequence108 *)0))))
	{
		if((!BuilderContext_merge832(zself, (&S1677))))
		{
			char t1;
			BuilderContext_reportSourceError920(zself, ((Location45 *)zf->source), S2032, zself->returnTypes);
			t1 = 0;
			return t1;
		}
	}
	if((char)(((Prototype31 *)zf)->returnTypes != ((TypeSequence108 *)0)))
	{
		if((!TypeSequence_match609(zself->returnTypes, ((Prototype31 *)zf)->returnTypes)))
		{
			char t2;
			BuilderContext_reportSourceError926(zself, ((Location45 *)zf->source), S2034, zself->returnTypes, ((Prototype31 *)zf)->returnTypes);
			t2 = 0;
			return t2;
		}
	}
	else
	{
		((Prototype31 *)zf)->returnTypes = zself->returnTypes;
	}
	zf->returnCount = zself->returnCount;
	t3 = 1;
	return t3;
}

static char BuilderContext_defineExternFunction743(BuilderContext177 *zself, ExternFunction36 *zf)
{
	switch( ((Prototype31 *)zf)->state )
	{
	case ((unsigned char)1U):
	{
		char t1;
		t1 = 1;
		return t1;
	}
	break;
	case ((unsigned char)2U):
	{
		char t2;
		t2 = 0;
		return t2;
	}
	break;
	case ((unsigned char)3U):
	{
		char t3;
		BuilderContext_reportDefinitionError890(zself, ((Definition32 *)zf), S2009);
		((Prototype31 *)zf)->state = ((unsigned char)2U);
		t3 = 0;
		return t3;
	}
	break;
	default:
	{
		char ok4;
		char t7;
		ok4 = 1;
		((Prototype31 *)zf)->state = ((unsigned char)3U);
		Prototype_use720(((Prototype31 *)zf));
		{
			Scope8 *initialScope5;
			BuilderContext177 cx6;
			initialScope5 = ((Definition32 *)zf)->scope;
			BuilderContext_initialize731((&cx6), zself, zself->builder, initialScope5, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
			{
				zf->parameterTypes = BuilderContext_evaluateSimpleTypesWithContext800((&cx6), zf->source->parameters, zf->context);
				if((char)(zf->parameterTypes == ((TypeSequence108 *)0)))
				{
					ok4 = 0;
				}
				((Prototype31 *)zf)->returnTypes = BuilderContext_evaluateSimpleTypes799((&cx6), zf->source->returns);
				if((char)(((Prototype31 *)zf)->returnTypes == ((TypeSequence108 *)0)))
				{
					ok4 = 0;
				}
			}
			Builder_releaseLocalPool624(zself->builder);
		}
		if((ok4 && (char)(zf->publicName == ((unsigned char *)0))))
		{
			zf->publicName = Builder_getPublicName1377(zself->builder, zf);
		}
		((Prototype31 *)zf)->state = (ok4?((unsigned char)1U):((unsigned char)2U));
		t7 = ok4;
		return t7;
	}
	}
}

static char BuilderContext_defineGlobalVariable744(BuilderContext177 *zself, GlobalVariable97 *zv)
{
	switch( zv->state )
	{
	case ((unsigned char)1U):
	{
		char t1;
		t1 = 1;
		return t1;
	}
	break;
	case ((unsigned char)2U):
	{
		char t2;
		t2 = 0;
		return t2;
	}
	break;
	case ((unsigned char)3U):
	{
		char t3;
		BuilderContext_reportDefinitionError855(zself, ((Definition32 *)zv), S1975, ((Definition32 *)zv)->name);
		zv->state = ((unsigned char)2U);
		t3 = 0;
		return t3;
	}
	break;
	default:
	{
		char ok4;
		char t10;
		ok4 = 1;
		zv->state = ((unsigned char)3U);
		GlobalVariable_use1009(zv);
		{
			Scope8 *initialScope5;
			BuilderContext177 cx6;
			initialScope5 = ((Definition32 *)zv)->scope;
			BuilderContext_initialize731((&cx6), zself, zself->builder, initialScope5, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
			{
				if((char)(zv->source->type != ((ASTExpression140 *)0)))
				{
					Type98 *storageType7;
					storageType7 = BuilderContext_evaluateType802((&cx6), zv->source->type);
					if((char)(storageType7 == ((Type98 *)0)))
					{
						ok4 = 0;
						goto L8;
					}
					if((!BuilderContext_defineTypeSize753((&cx6), storageType7)))
					{
						ok4 = 0;
						goto L8;
					}
					GlobalVariable_setStorageType1008(zv, storageType7);
				}
				else
				{
					Expression21 *initialValue9;
					initialValue9 = BuilderContext_evaluateExpression761((&cx6), zv->source->initialValue, ((Type98 *)0));
					if((char)(initialValue9 == ((Expression21 *)0)))
					{
						ok4 = 0;
						goto L8;
					}
					if((!BuilderContext_checkConstant847((&cx6), ((Location45 *)zv->source), initialValue9)))
					{
						ok4 = 0;
						goto L8;
					}
					GlobalVariable_setStorageType1008(zv, initialValue9->type);
					GlobalVariable_setInitialValue1007(zv, initialValue9);
				}
			}
			L8: ;
			Builder_releaseLocalPool624(zself->builder);
		}
		zv->state = (ok4?((unsigned char)1U):((unsigned char)2U));
		t10 = ok4;
		return t10;
	}
	}
}

static char BuilderContext_defineType745(BuilderContext177 *zself, Type98 *ztype)
{
	switch( ztype->state )
	{
	case ((unsigned char)1U):
	{
		char t1;
		t1 = 1;
		return t1;
	}
	break;
	case ((unsigned char)2U):
	{
		char t2;
		t2 = 0;
		return t2;
	}
	break;
	case ((unsigned char)3U):
	{
		ASTNode110 *source3;
		int line4;
		char t5;
		source3 = ztype->source;
		line4 = ((char)(source3 != ((ASTNode110 *)0))?((Location45 *)source3)->line:-1);
		BuilderContext_reportError1296(zself, Type_module527(ztype)->filename, line4, S1982, ztype);
		ztype->state = ((unsigned char)2U);
		t5 = 0;
		return t5;
	}
	break;
	default:
	{
		char ok6;
		char t7;
		ztype->state = ((unsigned char)3U);
		switch( ztype->code )
		{
		case 9:
		{
			ok6 = BuilderContext_definePointer746(zself, Type_asPointer533(ztype));
		}
		break;
		case 10:
		{
			ok6 = BuilderContext_defineStructure747(zself, Type_asStructure535(ztype));
		}
		break;
		case 11:
		{
			ok6 = BuilderContext_defineArray750(zself, Type_asArray534(ztype));
		}
		break;
		case 0:
		{
			ok6 = BuilderContext_defineMeta751(zself, Type_asMeta536(ztype));
		}
		break;
		default:
		{
			ok6 = BuilderContext_defineOther752(zself, ztype);
		}
		}
		ztype->state = (ok6?((unsigned char)1U):((unsigned char)2U));
		t7 = ok6;
		return t7;
	}
	}
}

static char BuilderContext_definePointer746(BuilderContext177 *zself, PointerType101 *zpointer)
{
	char ok1;
	ASTNode110 *source2;
	char t5;
	ok1 = BuilderContext_defineType745(zself, ((Type98 *)zpointer)->parent);
	(ok1 &= BuilderContext_defineType745(zself, zpointer->target));
	source2 = ((Type98 *)zpointer)->source;
	if((char)(source2 != ((ASTNode110 *)0)))
	{
		{
			Scope8 *initialScope3;
			BuilderContext177 cx4;
			initialScope3 = (&((Type98 *)zpointer)->scope);
			BuilderContext_initialize731((&cx4), zself, zself->builder, initialScope3, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
			{
				(ok1 &= BuilderContext_declareContent732((&cx4), source2, ((Type98 *)zpointer), Type_metaType523(((Type98 *)zpointer))));
			}
			Builder_releaseLocalPool624(zself->builder);
		}
	}
	t5 = ok1;
	return t5;
}

static char BuilderContext_defineStructure747(BuilderContext177 *zself, StructureType104 *zstructure)
{
	ASTType118 *source1;
	PointerType101 *context2;
	char ok3;
	size_t sum4;
	size_t alignMax5;
	StructureType104 *parent6;
	char t17;
	StructureType_use1029(zstructure);
	source1 = ASTElement_asType864(((ASTElement109 *)((Type98 *)zstructure)->source));
	context2 = Type_pointer524(((Type98 *)zstructure));
	ok3 = 1;
	{
		Scope8 *initialScope7;
		BuilderContext177 cx8;
		initialScope7 = (&((Type98 *)zstructure)->scope);
		BuilderContext_initialize731((&cx8), zself, zself->builder, initialScope7, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
		{
			(ok3 &= BuilderContext_defineStructureParent748((&cx8), zstructure, source1->parent));
			(ok3 &= BuilderContext_declareContent732((&cx8), ((ASTNode110 *)source1), ((Type98 *)context2), Type_metaType523(((Type98 *)zstructure))));
			{
				{
					Collection105 *self9;
					Attribute107 *e10;
					self9 = (&zstructure->attributes);
					e10 = self9->firstElement;
					while((char)(e10 != ((Attribute107 *)0)))
					{
						{
							{
								(ok3 &= BuilderContext_defineStructureAttribute749((&cx8), e10));
							}
						}
						e10 = e10->nextSibling;
					}
				}
			}
		}
		Builder_releaseLocalPool624(zself->builder);
	}
	if((!ok3))
	{
		char t11;
		t11 = 0;
		return t11;
	}
	sum4 = ((size_t)0x0000000000000000U);
	alignMax5 = ((size_t)0x0000000000000001U);
	parent6 = zstructure->parentStructure;
	if((char)(parent6 != ((StructureType104 *)0)))
	{
		size_t align12;
		align12 = ((Type98 *)parent6)->align;
		if((char)(((size_t )align12) > ((size_t )alignMax5)))
		{
			alignMax5 = align12;
		}
		(--align12);
		(sum4 += align12);
		(sum4 &= (~align12));
		(sum4 += ((Type98 *)parent6)->size);
	}
	{
		{
			Collection105 *self13;
			Attribute107 *e14;
			self13 = (&zstructure->attributes);
			e14 = self13->firstElement;
			while((char)(e14 != ((Attribute107 *)0)))
			{
				{
					{
						Type98 *st15;
						size_t align16;
						st15 = e14->storageType;
						align16 = st15->align;
						if((char)(((size_t )align16) > ((size_t )alignMax5)))
						{
							alignMax5 = align16;
						}
						(--align16);
						(sum4 += align16);
						(sum4 &= (~align16));
						e14->offset = sum4;
						(sum4 += st15->size);
					}
				}
				e14 = e14->nextSibling;
			}
		}
	}
	((Type98 *)zstructure)->align = alignMax5;
	(--alignMax5);
	(sum4 += alignMax5);
	(sum4 &= (~alignMax5));
	((Type98 *)zstructure)->size = sum4;
	t17 = 1;
	return t17;
}

static char BuilderContext_defineStructureParent748(BuilderContext177 *zself, StructureType104 *zstructure, ASTExpression140 *zpe)
{
	Type98 *type1;
	StructureType104 *parentStructure2;
	char t7;
	if((char)(zpe == ((ASTExpression140 *)0)))
	{
		char t3;
		t3 = 1;
		return t3;
	}
	type1 = BuilderContext_evaluateType802(zself, zpe);
	if((char)(type1 == ((Type98 *)0)))
	{
		char t4;
		t4 = 0;
		return t4;
	}
	if((!Type_isStructure549(type1)))
	{
		char t5;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zpe), S2026, type1);
		t5 = 0;
		return t5;
	}
	parentStructure2 = Type_asStructure535(type1);
	if((!BuilderContext_defineType745(zself, ((Type98 *)parentStructure2))))
	{
		char t6;
		t6 = 0;
		return t6;
	}
	StructureType_setParentStructure1028(zstructure, parentStructure2);
	t7 = 1;
	return t7;
}

static char BuilderContext_defineStructureAttribute749(BuilderContext177 *zself, Attribute107 *zattribute)
{
	Type98 *storageType1;
	char t5;
	storageType1 = BuilderContext_evaluateType802(zself, zattribute->source->type);
	if((char)(storageType1 == ((Type98 *)0)))
	{
		char t2;
		t2 = 0;
		return t2;
	}
	if((!BuilderContext_defineTypeSize753(zself, storageType1)))
	{
		char t3;
		t3 = 0;
		return t3;
	}
	if((char)(storageType1->size == ((size_t)0xFFFFFFFFFFFFFFFFU)))
	{
		char t4;
		BuilderContext_reportDefinitionError855(zself, ((Definition32 *)zattribute), S2024, ((Definition32 *)zattribute)->name);
		t4 = 0;
		return t4;
	}
	zattribute->storageType = storageType1;
	zattribute->type = Type_effective525(storageType1);
	t5 = 1;
	return t5;
}

static char BuilderContext_defineArray750(BuilderContext177 *zself, ArrayType102 *zarray)
{
	Type98 *cellType1;
	char t3;
	cellType1 = zarray->cellType;
	if((!BuilderContext_defineTypeSize753(zself, cellType1)))
	{
		char t2;
		t2 = 0;
		return t2;
	}
	((Type98 *)zarray)->size = (zarray->arraySize * cellType1->size);
	((Type98 *)zarray)->align = cellType1->align;
	t3 = 1;
	return t3;
}

static char BuilderContext_defineMeta751(BuilderContext177 *zself, MetaType99 *zmetaType)
{
	char t1;
	t1 = BuilderContext_defineType745(zself, zmetaType->type);
	return t1;
}

static char BuilderContext_defineOther752(BuilderContext177 *zself, Type98 *ztype)
{
	Type98 *parent1;
	char ok2;
	ASTNode110 *source3;
	char t8;
	parent1 = ztype->parent;
	ok2 = ((char)(parent1 == ((Type98 *)0)) || BuilderContext_defineType745(zself, ztype->parent));
	if((!ok2))
	{
		char t4;
		t4 = 0;
		return t4;
	}
	source3 = ztype->source;
	if((char)(source3 == ((ASTNode110 *)0)))
	{
		char t5;
		t5 = 1;
		return t5;
	}
	{
		Scope8 *initialScope6;
		BuilderContext177 cx7;
		initialScope6 = (&ztype->scope);
		BuilderContext_initialize731((&cx7), zself, zself->builder, initialScope6, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
		{
			(ok2 &= BuilderContext_declareContent732((&cx7), source3, ztype, Type_metaType523(ztype)));
		}
		Builder_releaseLocalPool624(zself->builder);
	}
	t8 = ok2;
	return t8;
}

static char BuilderContext_defineTypeSize753(BuilderContext177 *zself, Type98 *ztype)
{
	if((Type_isStructure549(ztype) || Type_isArray550(ztype)))
	{
		char t1;
		t1 = BuilderContext_defineType745(zself, ztype);
		return t1;
	}
	else
	{
		char t2;
		t2 = 1;
		return t2;
	}
}

static char BuilderContext_defineSymbol754(BuilderContext177 *zself, Type98 *ztype, Symbol29 *zstart)
{
	switch( zstart->state )
	{
	case ((unsigned char)1U):
	{
		char t1;
		t1 = 1;
		return t1;
	}
	break;
	case ((unsigned char)2U):
	{
		char t2;
		t2 = 0;
		return t2;
	}
	break;
	case ((unsigned char)3U):
	{
		char t3;
		BuilderContext_reportSourceError1513(zself, ((Location45 *)zstart->source), S1980, zstart);
		zstart->state = ((unsigned char)2U);
		t3 = 0;
		return t3;
	}
	break;
	default:
	{
		char ok4;
		char t14;
		ok4 = 1;
		{
			Scope8 *initialScope5;
			BuilderContext177 cx6;
			initialScope5 = (&ztype->scope);
			BuilderContext_initialize731((&cx6), zself, zself->builder, initialScope5, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
			{
				unsigned long long (currentValue7)[1];
				{
					SymbolDictionary27 *self8;
					self8 = ztype->symbols;
					{
						Collection28 *self9;
						Symbol29 *e10;
						self9 = (&self8->ordered);
						e10 = self9->firstElement;
						while((char)(e10 != ((Symbol29 *)0)))
						{
							{
								{
									e10->state = ((unsigned char)3U);
								}
							}
							e10 = ((CollectionElement30 *)e10)->nextSibling;
						}
					}
				}
				currentValue7[((size_t)0x0000000000000000U)] = 0UL;
				{
					SymbolDictionary27 *self11;
					self11 = ztype->symbols;
					{
						Collection28 *self12;
						Symbol29 *e13;
						self12 = (&self11->ordered);
						e13 = self12->firstElement;
						while((char)(e13 != ((Symbol29 *)0)))
						{
							{
								{
									if((!BuilderContext_defineSymbolValue755((&cx6), ztype, e13, ((unsigned long long *)currentValue7))))
									{
										e13->state = ((unsigned char)2U);
										ok4 = 0;
									}
									else
									{
										e13->state = ((unsigned char)1U);
									}
								}
							}
							e13 = ((CollectionElement30 *)e13)->nextSibling;
						}
					}
				}
			}
			Builder_releaseLocalPool624(zself->builder);
		}
		t14 = ok4;
		return t14;
	}
	}
}

static char BuilderContext_defineSymbolValue755(BuilderContext177 *zself, Type98 *ztype, Symbol29 *zsymbol, unsigned long long *zcurrentValue)
{
	ASTSymbol121 *source1;
	ASTExpression140 *sourceExpression2;
	char t8;
	source1 = zsymbol->source;
	sourceExpression2 = source1->expression;
	if((char)(sourceExpression2 != ((ASTExpression140 *)0)))
	{
		Expression21 *e3;
		e3 = BuilderContext_evaluateExpression761(zself, sourceExpression2, ztype);
		if((char)(e3 == ((Expression21 *)0)))
		{
			char t4;
			t4 = 0;
			return t4;
		}
		if((!BuilderContext_checkConstant847(zself, ((Location45 *)sourceExpression2), e3)))
		{
			char t5;
			t5 = 0;
			return t5;
		}
		if((char)(e3->type != ztype))
		{
			char t6;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)sourceExpression2), S1978);
			t6 = 0;
			return t6;
		}
		zsymbol->value = e3;
		if(Type_isInteger551(ztype))
		{
			zcurrentValue[((size_t)0x0000000000000000U)] = Expression_asConstantInteger477(e3)->value;
		}
	}
	else
	{
		if((!Type_isInteger551(ztype)))
		{
			char t7;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)source1), S1961);
			t7 = 0;
			return t7;
		}
		zsymbol->value = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), zcurrentValue[((size_t)0x0000000000000000U)], ztype));
	}
	(++zcurrentValue[((size_t)0x0000000000000000U)]);
	t8 = 1;
	return t8;
}

static ExpressionList61 *BuilderContext_evaluateExpressions756(BuilderContext177 *zself, Collection203 *zsource)
{
	ExpressionList61 *list1;
	ExpressionList61 *t5;
	if(Collection_isEmpty889(zsource))
	{
		ExpressionList61 *t2;
		t2 = (&S1677);
		return t2;
	}
	list1 = Program_getExpressionList413(BuilderContext_program835(zself));
	{
		ASTExpression140 *e3;
		e3 = zsource->firstElement;
		while((char)(e3 != ((ASTExpression140 *)0)))
		{
			{
				if((char)(BuilderContext_evaluateAndExpandExpression759(zself, e3, ((Type98 *)0), list1) == -1))
				{
					ExpressionList61 *t4;
					t4 = ((ExpressionList61 *)0);
					return t4;
				}
			}
			e3 = e3->nextSibling;
		}
	}
	t5 = list1;
	return t5;
}

static ExpressionList61 *BuilderContext_evaluateArguments757(BuilderContext177 *zself, Location45 *zlocation, Collection203 *zsource, Collection34 *zparameters, char zisVariadic, Expression21 *zcontext)
{
	Program5 *program1;
	ExpressionList61 *arguments2;
	Parameter35 *p3;
	Type98 *t4;
	int expected5;
	int got6;
	ExpressionList61 *t12;
	program1 = BuilderContext_program835(zself);
	arguments2 = Program_getExpressionList413(program1);
	p3 = zparameters->firstElement;
	t4 = ((Type98 *)0);
	if((char)(zcontext != ((Expression21 *)0)))
	{
		p3 = p3->nextSibling;
		CollectionPool_add903(((CollectionPool62 *)arguments2), program1->pool, zcontext);
		t4 = zcontext->type;
	}
	{
		ASTExpression140 *e7;
		e7 = zsource->firstElement;
		while((char)(e7 != ((ASTExpression140 *)0)))
		{
			{
				int n8;
				if(((char)(p3 != ((Parameter35 *)0)) && (char)(p3->type != ((Type98 *)0))))
				{
					t4 = p3->type;
				}
				n8 = BuilderContext_evaluateAndExpandExpression759(zself, e7, t4, arguments2);
				if((char)(n8 == -1))
				{
					ExpressionList61 *t9;
					t9 = ((ExpressionList61 *)0);
					return t9;
				}
				while(((char)(p3 != ((Parameter35 *)0)) && (char)(n8 != 0)))
				{
					(--n8);
					p3 = p3->nextSibling;
				}
				t4 = CollectionPool_last904(((CollectionPool62 *)arguments2))->type;
			}
			e7 = e7->nextSibling;
		}
	}
	expected5 = zparameters->size;
	got6 = ((Collection63 *)arguments2)->size;
	if(zisVariadic)
	{
		if((char)(got6 < expected5))
		{
			ExpressionList61 *t10;
			BuilderContext_reportSourceError1302(zself, zlocation, S2018, expected5, got6);
			t10 = ((ExpressionList61 *)0);
			return t10;
		}
	}
	else
	{
		if((char)(got6 != expected5))
		{
			ExpressionList61 *t11;
			BuilderContext_reportSourceError1302(zself, zlocation, S2019, expected5, got6);
			t11 = ((ExpressionList61 *)0);
			return t11;
		}
	}
	t12 = arguments2;
	return t12;
}

static ExpressionList61 *BuilderContext_evaluateTypedArguments758(BuilderContext177 *zself, Location45 *zlocation, Collection203 *zsource, TypeSequence108 *ztypes, Expression21 *zcontext)
{
	ExpressionList61 *arguments1;
	int i2;
	int n3;
	int expected4;
	int got5;
	ExpressionList61 *t16;
	if((Collection_isEmpty889(zsource) && (char)(zcontext == ((Expression21 *)0))))
	{
		ExpressionList61 *t6;
		t6 = (&S1677);
		return t6;
	}
	arguments1 = Program_getExpressionList413(BuilderContext_program835(zself));
	i2 = 0;
	n3 = ztypes->size;
	if((char)(zcontext != ((Expression21 *)0)))
	{
		(++i2);
		CollectionPool_add903(((CollectionPool62 *)arguments1), BuilderContext_program835(zself)->pool, zcontext);
	}
	{
		ASTExpression140 *e7;
		e7 = zsource->firstElement;
		while((char)(e7 != ((ASTExpression140 *)0)))
		{
			{
				Type98 *t8;
				int c9;
				t8 = ((char)(i2 < n3)?TypeSequence__at603(ztypes, i2):((Type98 *)0));
				c9 = BuilderContext_evaluateAndExpandExpression759(zself, e7, t8, arguments1);
				if((char)(c9 == -1))
				{
					ExpressionList61 *t10;
					t10 = ((ExpressionList61 *)0);
					return t10;
				}
				(i2 += c9);
			}
			e7 = e7->nextSibling;
		}
	}
	expected4 = ztypes->size;
	got5 = ((Collection63 *)arguments1)->size;
	if((char)(got5 != expected4))
	{
		ExpressionList61 *t11;
		BuilderContext_reportSourceError1302(zself, zlocation, S2019, expected4, got5);
		t11 = ((ExpressionList61 *)0);
		return t11;
	}
	i2 = 0;
	{
		CollectionPool62 *self12;
		self12 = ((CollectionPool62 *)arguments1);
		{
			Collection63 *self13;
			CollectionPoolElement205 *e14;
			self13 = ((Collection63 *)self12);
			e14 = self13->firstElement;
			while((char)(e14 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						if((!BuilderContext_checkCompatible842(zself, zlocation, i2, e14->object, TypeSequence__at603(ztypes, i2))))
						{
							ExpressionList61 *t15;
							t15 = ((ExpressionList61 *)0);
							return t15;
						}
						(++i2);
					}
				}
				e14 = e14->nextSibling;
			}
		}
	}
	t16 = arguments1;
	return t16;
}

static int BuilderContext_evaluateAndExpandExpression759(BuilderContext177 *zself, ASTExpression140 *zsource, Type98 *ztype, ExpressionList61 *zlist)
{
	Expression21 *e1;
	int t4;
	e1 = BuilderContext_evaluateExpression761(zself, zsource, ztype);
	if((char)(e1 == ((Expression21 *)0)))
	{
		int t2;
		t2 = -1;
		return t2;
	}
	if(Expression_isVoid508(e1))
	{
		int t3;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1992);
		t3 = -1;
		return t3;
	}
	t4 = BuilderContext_expandExpression831(zself, zlist, e1);
	return t4;
}

static Expression21 *BuilderContext_evaluateCondition760(BuilderContext177 *zself, ASTExpression140 *zsource)
{
	Expression21 *e1;
	Expression21 *t4;
	e1 = BuilderContext_evaluateExpression761(zself, zsource, ((Type98 *)BuilderContext_program835(zself)->booleanType));
	if((char)(e1 == ((Expression21 *)0)))
	{
		Expression21 *t2;
		t2 = ((Expression21 *)0);
		return t2;
	}
	if((!Type_isBoolean547(e1->type)))
	{
		Expression21 *t3;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S2014);
		t3 = ((Expression21 *)0);
		return t3;
	}
	t4 = e1;
	return t4;
}

static Expression21 *BuilderContext_evaluateExpression761(BuilderContext177 *zself, ASTExpression140 *zsource, Type98 *ztype)
{
	Program5 *program1;
	program1 = BuilderContext_program835(zself);
	switch( zsource->code )
	{
	case 0:
	{
		Expression21 *t2;
		t2 = BuilderContext_evaluateString762(zself, ASTExpression_asString896(zsource), ztype);
		return t2;
	}
	break;
	case 1:
	{
		Expression21 *t3;
		t3 = ((Expression21 *)BuilderContext_evaluateInteger763(zself, ASTExpression_asInteger894(zsource), ztype));
		return t3;
	}
	break;
	case 2:
	{
		Expression21 *t4;
		t4 = ((Expression21 *)BuilderContext_evaluateNegativeInteger764(zself, ASTExpression_asInteger894(zsource), ztype));
		return t4;
	}
	break;
	case 3:
	{
		Expression21 *t5;
		t5 = BuilderContext_evaluateSymbol765(zself, ASTExpression_asSymbol897(zsource), ztype);
		return t5;
	}
	break;
	case 4:
	{
		Expression21 *t6;
		t6 = BuilderContext_evaluateSequence766(zself, ASTExpression_asArray895(zsource), ztype);
		return t6;
	}
	break;
	case 5:
	{
		Expression21 *t7;
		t7 = BuilderContext_evaluateFreeCall772(zself, ((ASTFreeCall141 *)zsource));
		return t7;
	}
	break;
	case 6:
	{
		Expression21 *t8;
		t8 = BuilderContext_evaluateContextCall773(zself, ((ASTContextCall142 *)zsource), ztype);
		return t8;
	}
	break;
	case 15:
	{
		Expression21 *t9;
		t9 = BuilderContext_evaluateColon777(zself, ((ASTBinary144 *)zsource));
		return t9;
	}
	break;
	case 16:
	{
		Expression21 *t10;
		t10 = BuilderContext_evaluateTypeof775(zself, ((ASTUnary143 *)zsource));
		return t10;
	}
	break;
	case 7:
	{
		Expression21 *t11;
		t11 = BuilderContext_evaluateMinimal785(zself, ((ASTBinary144 *)zsource), 20);
		return t11;
	}
	break;
	case 8:
	{
		Expression21 *t12;
		t12 = BuilderContext_evaluateMinimal785(zself, ((ASTBinary144 *)zsource), 21);
		return t12;
	}
	break;
	case 9:
	{
		Expression21 *t13;
		t13 = BuilderContext_evaluateFunctionType778(zself, ((ASTFunctionType146 *)zsource));
		return t13;
	}
	break;
	case 10:
	{
		Expression21 *t14;
		t14 = BuilderContext_evaluateArrayType774(zself, ((ASTArrayType147 *)zsource));
		return t14;
	}
	break;
	case 11:
	{
		Expression21 *t15;
		t15 = ((Expression21 *)BuilderContext_evaluateFunctionReference779(zself, ((ASTFunctionReference148 *)zsource)));
		return t15;
	}
	break;
	case 12:
	{
		Expression21 *t16;
		t16 = BuilderContext_evaluateOffset787(zself, ((ASTOffset152 *)zsource), ztype);
		return t16;
	}
	break;
	case 13:
	{
		Expression21 *t17;
		t17 = ((Expression21 *)BuilderContext_evaluateCond783(zself, ((ASTCond153 *)zsource), ztype));
		return t17;
	}
	break;
	case 14:
	{
		Expression21 *t18;
		t18 = ((Expression21 *)BuilderContext_evaluateEllipsis786(zself, zsource));
		return t18;
	}
	break;
	case 17:
	{
		Expression21 *t19;
		t19 = BuilderContext_evaluatePointer776(zself, ((ASTUnary143 *)zsource));
		return t19;
	}
	break;
	case 18:
	{
		Expression21 *t20;
		t20 = ((Expression21 *)BuilderContext_evaluateYield788(zself, ((ASTArray145 *)zsource)));
		return t20;
	}
	break;
	default:
	{
		Expression21 *t21;
		_assertFailure1193(S1759);
		t21 = ((Expression21 *)0);
		return t21;
	}
	}
}

static Expression21 *BuilderContext_evaluateString762(BuilderContext177 *zself, ASTString150 *zsource, Type98 *ztypespace)
{
	PointerType101 *pointerType1;
	Type98 *targetType2;
	ArrayType102 *arrayType3;
	Type98 *cellType4;
	if((char)(ztypespace == ((Type98 *)0)))
	{
		Expression21 *t5;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1968);
		t5 = ((Expression21 *)0);
		return t5;
	}
	if((!Type_isPointer548(ztypespace)))
	{
		Expression21 *t6;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S1997, ztypespace);
		t6 = ((Expression21 *)0);
		return t6;
	}
	pointerType1 = Type_asPointer533(ztypespace);
	targetType2 = pointerType1->target;
	if((!Type_isArray550(targetType2)))
	{
		Expression21 *t7;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S1996, targetType2);
		t7 = ((Expression21 *)0);
		return t7;
	}
	arrayType3 = Type_asArray534(targetType2);
	cellType4 = arrayType3->cellType;
	if((!Type_isInteger551(cellType4)))
	{
		Expression21 *t8;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S1995, cellType4);
		t8 = ((Expression21 *)0);
		return t8;
	}
	switch( cellType4->size )
	{
	case ((size_t)0x0000000000000001U):
	{
		Expression21 *t9;
		t9 = ((Expression21 *)Program_getString8389(BuilderContext_program835(zself), zsource->string, ztypespace));
		return t9;
	}
	break;
	case ((size_t)0x0000000000000002U):
	{
		Expression21 *t10;
		t10 = ((Expression21 *)Program_getString16390(BuilderContext_program835(zself), zsource->string, ztypespace));
		return t10;
	}
	break;
	default:
	{
		Expression21 *t11;
		BuilderContext_reportSourceError1510(zself, ((Location45 *)zsource), S1993, (cellType4->size * ((size_t)0x0000000000000008U)));
		t11 = ((Expression21 *)0);
		return t11;
	}
	}
}

static IntegerExpression20 *BuilderContext_evaluateInteger763(BuilderContext177 *zself, ASTInteger149 *zsource, Type98 *ztype)
{
	unsigned long long n1;
	IntegerExpression20 *t5;
	if((char)(ztype == ((Type98 *)0)))
	{
		IntegerExpression20 *t2;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1967);
		t2 = ((IntegerExpression20 *)0);
		return t2;
	}
	if((!Type_isInteger551(ztype)))
	{
		IntegerExpression20 *t3;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S1964, ztype);
		t3 = ((IntegerExpression20 *)0);
		return t3;
	}
	n1 = zsource->integer;
	if((!Type_checkIntegerLimits538(ztype, n1)))
	{
		IntegerExpression20 *t4;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S2007, ztype);
		t4 = ((IntegerExpression20 *)0);
		return t4;
	}
	t5 = Program_getInteger391(BuilderContext_program835(zself), n1, ztype);
	return t5;
}

static IntegerExpression20 *BuilderContext_evaluateNegativeInteger764(BuilderContext177 *zself, ASTInteger149 *zsource, Type98 *ztype)
{
	unsigned long long n1;
	IntegerExpression20 *t5;
	if((char)(ztype == ((Type98 *)0)))
	{
		IntegerExpression20 *t2;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1967);
		t2 = ((IntegerExpression20 *)0);
		return t2;
	}
	if((!Type_isInteger551(ztype)))
	{
		IntegerExpression20 *t3;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S1964, ztype);
		t3 = ((IntegerExpression20 *)0);
		return t3;
	}
	n1 = zsource->integer;
	if((!Type_checkNegativeIntegerLimits539(ztype, n1)))
	{
		IntegerExpression20 *t4;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S2007, ztype);
		t4 = ((IntegerExpression20 *)0);
		return t4;
	}
	t5 = Program_getInteger391(BuilderContext_program835(zself), (-n1), ztype);
	return t5;
}

static Expression21 *BuilderContext_evaluateSymbol765(BuilderContext177 *zself, ASTSymbolName151 *zsource, Type98 *ztypespace)
{
	char ok1;
	void *name2;
	Type98 *type3;
	Expression21 *t10;
	if((char)(ztypespace == ((Type98 *)0)))
	{
		Expression21 *t4;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1965);
		t4 = ((Expression21 *)0);
		return t4;
	}
	ok1 = BuilderContext_defineType745(zself, ztypespace);
	if((!ok1))
	{
		Expression21 *t5;
		t5 = ((Expression21 *)0);
		return t5;
	}
	name2 = zsource->symbol;
	type3 = ztypespace;
	while((char)(type3 != ((Type98 *)0)))
	{
		Symbol29 *symbol6;
		symbol6 = Type_findSymbol546(type3, name2);
		if((char)(symbol6 != ((Symbol29 *)0)))
		{
			char ok7;
			Expression21 *t9;
			ok7 = BuilderContext_defineSymbol754(zself, type3, symbol6);
			if((!ok7))
			{
				Expression21 *t8;
				t8 = ((Expression21 *)0);
				return t8;
			}
			t9 = symbol6->value;
			return t9;
		}
		type3 = type3->parent;
	}
	BuilderContext_reportSourceError1322(zself, ((Location45 *)zsource), S1963, name2, ztypespace);
	t10 = ((Expression21 *)0);
	return t10;
}

static Expression21 *BuilderContext_evaluateSequence766(BuilderContext177 *zself, ASTArray145 *zsource, Type98 *ztypespace)
{
	Type98 *targetType1;
	if((char)(ztypespace == ((Type98 *)0)))
	{
		Expression21 *t2;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1966);
		t2 = ((Expression21 *)0);
		return t2;
	}
	if((!Type_isPointer548(ztypespace)))
	{
		Expression21 *t3;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S1997, ztypespace);
		t3 = ((Expression21 *)0);
		return t3;
	}
	targetType1 = Type_asPointer533(ztypespace)->target;
	if(Type_isStructure549(targetType1))
	{
		Expression21 *t4;
		t4 = ((Expression21 *)BuilderContext_evaluateStructureInitializer767(zself, zsource, ztypespace));
		return t4;
	}
	else
	{
		if(Type_isArray550(targetType1))
		{
			Expression21 *t5;
			t5 = ((Expression21 *)BuilderContext_evaluateArrayInitializer768(zself, zsource, ztypespace));
			return t5;
		}
		else
		{
			Expression21 *t6;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S1988, ztypespace);
			t6 = ((Expression21 *)0);
			return t6;
		}
	}
}

static StructureExpression68 *BuilderContext_evaluateStructureInitializer767(BuilderContext177 *zself, ASTArray145 *zsource, Type98 *ztype)
{
	StructureType104 *structure1;
	char ok2;
	ExpressionList61 *arguments3;
	SequenceIterator201 iter4;
	Program5 *program5;
	StructureExpression68 *t9;
	structure1 = Type_asStructure535(Type_asPointer533(ztype)->target);
	ok2 = BuilderContext_defineType745(zself, ((Type98 *)structure1));
	if((!ok2))
	{
		StructureExpression68 *t6;
		t6 = ((StructureExpression68 *)0);
		return t6;
	}
	arguments3 = Program_getExpressionList413(BuilderContext_program835(zself));
	SequenceIterator_initialize1518((&iter4), arguments3, zsource->arguments);
	if((!BuilderContext_checkStructureInitializer769(zself, ((Location45 *)zsource), structure1, (&iter4))))
	{
		StructureExpression68 *t7;
		t7 = ((StructureExpression68 *)0);
		return t7;
	}
	if((!SequenceIterator_isEOF1519((&iter4))))
	{
		StructureExpression68 *t8;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1986);
		t8 = ((StructureExpression68 *)0);
		return t8;
	}
	program5 = BuilderContext_program835(zself);
	t9 = Program_getStructureInitializer407(program5, arguments3, ztype, structure1);
	return t9;
}

static ArrayExpression69 *BuilderContext_evaluateArrayInitializer768(BuilderContext177 *zself, ASTArray145 *zsource, Type98 *ztype)
{
	ArrayType102 *array1;
	char ok2;
	ExpressionList61 *arguments3;
	SequenceIterator201 iter4;
	Program5 *program5;
	ArrayExpression69 *t9;
	array1 = Type_asArray534(Type_asPointer533(ztype)->target);
	ok2 = BuilderContext_defineType745(zself, ((Type98 *)array1));
	if((!ok2))
	{
		ArrayExpression69 *t6;
		t6 = ((ArrayExpression69 *)0);
		return t6;
	}
	arguments3 = Program_getExpressionList413(BuilderContext_program835(zself));
	SequenceIterator_initialize1518((&iter4), arguments3, zsource->arguments);
	if((!BuilderContext_checkArrayInitializer770(zself, ((Location45 *)zsource), array1, (&iter4))))
	{
		ArrayExpression69 *t7;
		t7 = ((ArrayExpression69 *)0);
		return t7;
	}
	if((!SequenceIterator_isEOF1519((&iter4))))
	{
		ArrayExpression69 *t8;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1986);
		t8 = ((ArrayExpression69 *)0);
		return t8;
	}
	program5 = BuilderContext_program835(zself);
	t9 = Program_getArrayInitializer408(program5, arguments3, ztype, array1);
	return t9;
}

static char BuilderContext_checkStructureInitializer769(BuilderContext177 *zself, Location45 *zlocation, StructureType104 *zstructure, SequenceIterator201 *ziter)
{
	char t5;
	if((char)(zstructure->parentStructure != ((StructureType104 *)0)))
	{
		if((!BuilderContext_checkStructureInitializer769(zself, zlocation, zstructure->parentStructure, ziter)))
		{
			char t1;
			t1 = 0;
			return t1;
		}
	}
	{
		{
			Collection105 *self2;
			Attribute107 *e3;
			self2 = (&zstructure->attributes);
			e3 = self2->firstElement;
			while((char)(e3 != ((Attribute107 *)0)))
			{
				{
					{
						if((!BuilderContext_checkInitializer771(zself, zlocation, e3->storageType, ziter)))
						{
							char t4;
							t4 = 0;
							return t4;
						}
					}
				}
				e3 = e3->nextSibling;
			}
		}
	}
	t5 = 1;
	return t5;
}

static char BuilderContext_checkArrayInitializer770(BuilderContext177 *zself, Location45 *zlocation, ArrayType102 *ztype, SequenceIterator201 *ziter)
{
	Type98 *cellType1;
	size_t n2;
	size_t i3;
	char t7;
	cellType1 = ztype->cellType;
	n2 = ztype->arraySize;
	i3 = ((size_t)0x0000000000000000U);
	for(;;)
	{
		if((char)(n2 == ((size_t)0x0000000000000000U)))
		{
			if(SequenceIterator_isEOF1519(ziter))
			{
				goto L4;
			}
		}
		else
		{
			if((char)(i3 == n2))
			{
				goto L4;
			}
		}
		if((!BuilderContext_checkInitializer771(zself, zlocation, cellType1, ziter)))
		{
			char t6;
			t6 = 0;
			return t6;
		}
		(++i3);
	}
	L4: ;
	t7 = 1;
	return t7;
}

static char BuilderContext_checkInitializer771(BuilderContext177 *zself, Location45 *zlocation, Type98 *ztype, SequenceIterator201 *ziter)
{
	Expression21 *e1;
	char t10;
	if(Type_isArray550(ztype))
	{
		char t2;
		t2 = BuilderContext_checkArrayInitializer770(zself, zlocation, Type_asArray534(ztype), ziter);
		return t2;
	}
	if(Type_isStructure549(ztype))
	{
		char t3;
		t3 = BuilderContext_checkStructureInitializer769(zself, zlocation, Type_asStructure535(ztype), ziter);
		return t3;
	}
	if(SequenceIterator_isEOF1519(ziter))
	{
		char t4;
		BuilderContext_reportSourceError1294(zself, zlocation, S1987);
		t4 = 0;
		return t4;
	}
	if((char)(ziter->element == ((CollectionPoolElement205 *)0)))
	{
		CollectionPoolElement205 *pred5;
		int n6;
		pred5 = ((Collection63 *)ziter->arguments)->lastElement;
		n6 = BuilderContext_evaluateAndExpandExpression759(zself, ziter->source, ztype, ziter->arguments);
		if((char)(n6 == -1))
		{
			char t7;
			t7 = 0;
			return t7;
		}
		ziter->source = ziter->source->nextSibling;
		ziter->element = ((char)(pred5 == ((CollectionPoolElement205 *)0))?((Collection63 *)ziter->arguments)->firstElement:pred5->nextSibling);
	}
	e1 = ziter->element->object;
	ziter->element = ziter->element->nextSibling;
	(++ziter->index);
	if((!BuilderContext_checkConstant847(zself, zlocation, e1)))
	{
		char t8;
		t8 = 0;
		return t8;
	}
	if((!BuilderContext_checkCompatible842(zself, zlocation, ziter->index, e1, ztype)))
	{
		char t9;
		t9 = 0;
		return t9;
	}
	t10 = 1;
	return t10;
}

static Expression21 *BuilderContext_evaluateFreeCall772(BuilderContext177 *zself, ASTFreeCall141 *zsrc)
{
	Definition32 *definition1;
	Expression21 *t3;
	definition1 = BuilderContext_getDefinition824(zself, ((Location45 *)zsrc), zsrc->name);
	if((char)(definition1 == ((Definition32 *)0)))
	{
		Expression21 *t2;
		t2 = ((Expression21 *)0);
		return t2;
	}
	t3 = BuilderContext_evaluateDefinition789(zself, zsrc, definition1, ((Expression21 *)0));
	return t3;
}

static Expression21 *BuilderContext_evaluateContextCall773(BuilderContext177 *zself, ASTContextCall142 *zsrc, Type98 *ztype)
{
	Expression21 *e11;
	Definition32 *definition2;
	Expression21 *t5;
	e11 = BuilderContext_evaluateExpression761(zself, zsrc->context, ztype);
	if((char)(e11 == ((Expression21 *)0)))
	{
		Expression21 *t3;
		t3 = ((Expression21 *)0);
		return t3;
	}
	definition2 = BuilderContext_getContextualDefinition825(zself, ((Location45 *)zsrc), ((ASTFreeCall141 *)zsrc)->name, e11->type);
	if((char)(definition2 == ((Definition32 *)0)))
	{
		Expression21 *t4;
		t4 = ((Expression21 *)0);
		return t4;
	}
	t5 = BuilderContext_evaluateDefinition789(zself, ((ASTFreeCall141 *)zsrc), definition2, e11);
	return t5;
}

static Expression21 *BuilderContext_evaluateArrayType774(BuilderContext177 *zself, ASTArrayType147 *zsrc)
{
	Type98 *cellType1;
	size_t size2;
	Expression21 *t7;
	cellType1 = BuilderContext_evaluateType802(zself, zsrc->cellType);
	if((char)(cellType1 == ((Type98 *)0)))
	{
		Expression21 *t3;
		t3 = ((Expression21 *)0);
		return t3;
	}
	size2 = ((size_t)0x0000000000000000U);
	if((char)(zsrc->arraySize != ((ASTExpression140 *)0)))
	{
		Expression21 *e24;
		e24 = BuilderContext_evaluateExpression761(zself, zsrc->arraySize, ((Type98 *)BuilderContext_program835(zself)->sizeType));
		if((char)(e24 == ((Expression21 *)0)))
		{
			Expression21 *t5;
			t5 = ((Expression21 *)0);
			return t5;
		}
		if((!Expression_isConstantInteger502(e24)))
		{
			Expression21 *t6;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S1979);
			t6 = ((Expression21 *)0);
			return t6;
		}
		size2 = ((size_t )Expression_constantInteger476(e24));
	}
	t7 = Type_expression526(Program_getArrayType384(BuilderContext_program835(zself), cellType1, size2));
	return t7;
}

static Expression21 *BuilderContext_evaluateTypeof775(BuilderContext177 *zself, ASTUnary143 *zsrc)
{
	Expression21 *e1;
	Expression21 *t5;
	e1 = BuilderContext_evaluateExpression761(zself, zsrc->argument, ((Type98 *)0));
	if((char)(e1 == ((Expression21 *)0)))
	{
		Expression21 *t2;
		t2 = ((Expression21 *)0);
		return t2;
	}
	if(Expression_isVoid508(e1))
	{
		Expression21 *t3;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S1992);
		t3 = ((Expression21 *)0);
		return t3;
	}
	if(Expression_isComposite509(e1))
	{
		Expression21 *t4;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S1991);
		t4 = ((Expression21 *)0);
		return t4;
	}
	t5 = Type_expression526(e1->type);
	return t5;
}

static Expression21 *BuilderContext_evaluatePointer776(BuilderContext177 *zself, ASTUnary143 *zsrc)
{
	Type98 *type1;
	PointerType101 *pointerType2;
	Expression21 *t4;
	type1 = BuilderContext_evaluateType802(zself, zsrc->argument);
	if((char)(type1 == ((Type98 *)0)))
	{
		Expression21 *t3;
		t3 = ((Expression21 *)0);
		return t3;
	}
	pointerType2 = Type_pointer524(type1);
	t4 = Type_expression526(((Type98 *)pointerType2));
	return t4;
}

static Expression21 *BuilderContext_evaluateColon777(BuilderContext177 *zself, ASTBinary144 *zsrc)
{
	Type98 *expected1;
	Expression21 *e2;
	Expression21 *t6;
	expected1 = BuilderContext_evaluateSimpleType801(zself, zsrc->argument1);
	if((char)(expected1 == ((Type98 *)0)))
	{
		Expression21 *t3;
		t3 = ((Expression21 *)0);
		return t3;
	}
	e2 = BuilderContext_evaluateExpression761(zself, zsrc->argument2, expected1);
	if((char)(e2 == ((Expression21 *)0)))
	{
		Expression21 *t4;
		t4 = ((Expression21 *)0);
		return t4;
	}
	if((!Type_match530(e2->type, expected1)))
	{
		Expression21 *t5;
		BuilderContext_reportSourceError1306(zself, ((Location45 *)zsrc), S2008, 1, e2->type, expected1);
		t5 = ((Expression21 *)0);
		return t5;
	}
	t6 = e2;
	return t6;
}

static Expression21 *BuilderContext_evaluateFunctionType778(BuilderContext177 *zself, ASTFunctionType146 *zsource)
{
	TypeSequence108 *types1;
	TypeSequence108 *rtypes2;
	Program5 *program3;
	FunctionType103 *ftype4;
	PointerType101 *ptype5;
	Expression21 *t8;
	types1 = BuilderContext_evaluateSimpleTypes799(zself, zsource->parameters);
	if((char)(types1 == ((TypeSequence108 *)0)))
	{
		Expression21 *t6;
		t6 = ((Expression21 *)0);
		return t6;
	}
	rtypes2 = BuilderContext_evaluateSimpleTypes799(zself, zsource->returnTypes);
	if((char)(rtypes2 == ((TypeSequence108 *)0)))
	{
		Expression21 *t7;
		t7 = ((Expression21 *)0);
		return t7;
	}
	program3 = BuilderContext_program835(zself);
	ftype4 = Program_getFunctionType385(program3, zsource->callingConvention, types1, rtypes2);
	ptype5 = Type_pointer524(((Type98 *)ftype4));
	t8 = Type_expression526(((Type98 *)ptype5));
	return t8;
}

static FunctionExpression70 *BuilderContext_evaluateFunctionReference779(BuilderContext177 *zself, ASTFunctionReference148 *zsource)
{
	Type98 *context1;
	Definition32 *definition2;
	TypeSequence108 *types3;
	context1 = ((Type98 *)0);
	if((char)(zsource->context != ((ASTExpression140 *)0)))
	{
		context1 = BuilderContext_evaluateType802(zself, zsource->context);
		if((char)(context1 == ((Type98 *)0)))
		{
			FunctionExpression70 *t4;
			t4 = ((FunctionExpression70 *)0);
			return t4;
		}
		definition2 = BuilderContext_getContextualDefinition825(zself, ((Location45 *)zsource), zsource->name, context1);
	}
	else
	{
		definition2 = BuilderContext_getDefinition824(zself, ((Location45 *)zsource), zsource->name);
	}
	if((char)(definition2 == ((Definition32 *)0)))
	{
		FunctionExpression70 *t5;
		t5 = ((FunctionExpression70 *)0);
		return t5;
	}
	types3 = BuilderContext_evaluateSimpleTypesWithContext800(zself, zsource->types, context1);
	if((char)(types3 == ((TypeSequence108 *)0)))
	{
		FunctionExpression70 *t6;
		t6 = ((FunctionExpression70 *)0);
		return t6;
	}
	if((char)(definition2->code == 0))
	{
		GenericFunction37 *g7;
		char ok8;
		g7 = Definition_asGenericFunction684(definition2);
		ok8 = BuilderContext_defineGenericFunction740(zself, g7);
		if((!ok8))
		{
			FunctionExpression70 *t9;
			t9 = ((FunctionExpression70 *)0);
			return t9;
		}
		definition2 = ((Definition32 *)BuilderContext_getFunctionInstanceFromTypes826(zself, g7, types3));
	}
	switch( definition2->code )
	{
	case 4:
	{
		Function33 *f10;
		char ok11;
		FunctionExpression70 *t15;
		f10 = Definition_asFunction683(definition2);
		if(f10->isMacro)
		{
			FunctionExpression70 *t12;
			BuilderContext_reportSourceError1338(zself, ((Location45 *)zsource), S1974, f10);
			t12 = ((FunctionExpression70 *)0);
			return t12;
		}
		ok11 = BuilderContext_defineFunctionType739(zself, f10);
		if((!ok11))
		{
			FunctionExpression70 *t13;
			t13 = ((FunctionExpression70 *)0);
			return t13;
		}
		if((!BuilderContext_checkExactParameters780(zself, ((Location45 *)zsource), (&f10->parameters), types3)))
		{
			FunctionExpression70 *t14;
			t14 = ((FunctionExpression70 *)0);
			return t14;
		}
		t15 = Program_getFunctionReference388(BuilderContext_program835(zself), ((Prototype31 *)f10), types3);
		return t15;
	}
	break;
	case 11:
	{
		ExternFunction36 *f16;
		char ok17;
		FunctionExpression70 *t20;
		f16 = Definition_asExternFunction685(definition2);
		ok17 = BuilderContext_defineExternFunction743(zself, f16);
		if((!ok17))
		{
			FunctionExpression70 *t18;
			t18 = ((FunctionExpression70 *)0);
			return t18;
		}
		if((!BuilderContext_checkExactTypes781(zself, ((Location45 *)zsource), f16->parameterTypes, types3)))
		{
			FunctionExpression70 *t19;
			t19 = ((FunctionExpression70 *)0);
			return t19;
		}
		t20 = Program_getFunctionReference388(BuilderContext_program835(zself), ((Prototype31 *)f16), types3);
		return t20;
	}
	break;
	default:
	{
		FunctionExpression70 *t21;
		BuilderContext_reportSourceError1357(zself, ((Location45 *)zsource), S1994, zsource->name);
		t21 = ((FunctionExpression70 *)0);
		return t21;
	}
	}
}

static char BuilderContext_checkExactParameters780(BuilderContext177 *zself, Location45 *zlocation, Collection34 *zparameters, TypeSequence108 *zargumentTypes)
{
	int expected1;
	int got2;
	int i3;
	char ok4;
	Parameter35 *p5;
	char t10;
	expected1 = zparameters->size;
	got2 = zargumentTypes->size;
	if((char)(expected1 != got2))
	{
		char t6;
		BuilderContext_reportSourceError1302(zself, zlocation, S2019, expected1, got2);
		t6 = 0;
		return t6;
	}
	i3 = 0;
	ok4 = 1;
	p5 = zparameters->firstElement;
	{
		{
			int self7;
			int i8;
			self7 = zargumentTypes->size;
			i8 = 0;
			while((char)(i8 < self7))
			{
				{
					{
						Type98 *type9;
						type9 = TypeSequence__at603(zargumentTypes, i8);
						(ok4 &= BuilderContext_checkExact782(zself, zlocation, i3, type9, p5->type));
						p5 = p5->nextSibling;
						(++i3);
					}
				}
				(++i8);
			}
		}
	}
	t10 = ok4;
	return t10;
}

static char BuilderContext_checkExactTypes781(BuilderContext177 *zself, Location45 *zlocation, TypeSequence108 *zparameterTypes, TypeSequence108 *zargumentTypes)
{
	int expected1;
	int got2;
	int i3;
	char ok4;
	char t9;
	expected1 = zparameterTypes->size;
	got2 = zargumentTypes->size;
	if((char)(expected1 != got2))
	{
		char t5;
		BuilderContext_reportSourceError1302(zself, zlocation, S2019, expected1, got2);
		t5 = 0;
		return t5;
	}
	i3 = 0;
	ok4 = 1;
	{
		{
			int self6;
			int i7;
			self6 = zargumentTypes->size;
			i7 = 0;
			while((char)(i7 < self6))
			{
				{
					{
						Type98 *type8;
						type8 = TypeSequence__at603(zargumentTypes, i7);
						(ok4 &= BuilderContext_checkExact782(zself, zlocation, i3, type8, TypeSequence__at603(zparameterTypes, i3)));
						(++i3);
					}
				}
				(++i7);
			}
		}
	}
	t9 = ok4;
	return t9;
}

static char BuilderContext_checkExact782(BuilderContext177 *zself, Location45 *zlocation, int zposition, Type98 *ztype, Type98 *zexpected)
{
	char t2;
	if((char)(ztype != zexpected))
	{
		char t1;
		BuilderContext_reportSourceError1306(zself, zlocation, S2008, (zposition + 1), ztype, zexpected);
		t1 = 0;
		return t1;
	}
	t2 = 1;
	return t2;
}

static CondExpression82 *BuilderContext_evaluateCond783(BuilderContext177 *zself, ASTCond153 *zsource, Type98 *ztype)
{
	Expression21 *c1;
	ExpressionList61 *a12;
	ExpressionList61 *a23;
	Program5 *program4;
	MemoryPool160 *pool5;
	TypeSequence108 *types6;
	char ok7;
	CondExpression82 *t10;
	c1 = BuilderContext_evaluateCondition760(zself, zsource->condition);
	a12 = BuilderContext_evaluateCondExpressions784(zself, ((Location45 *)zsource), zsource->arguments1, ztype);
	a23 = BuilderContext_evaluateCondExpressions784(zself, ((Location45 *)zsource), zsource->arguments2, ztype);
	if((((char)(c1 == ((Expression21 *)0)) || (char)(a12 == ((ExpressionList61 *)0))) || (char)(a23 == ((ExpressionList61 *)0))))
	{
		CondExpression82 *t8;
		t8 = ((CondExpression82 *)0);
		return t8;
	}
	program4 = BuilderContext_program835(zself);
	pool5 = program4->pool;
	types6 = _fromExpressions599(pool5, a12);
	ok7 = TypeSequence_merge605(types6, a23);
	if((!ok7))
	{
		CondExpression82 *t9;
		BuilderContext_reportSourceError1523(zself, ((Location45 *)zsource), S2033, ExpressionList_asTypes906(a12), ExpressionList_asTypes906(a23));
		t9 = ((CondExpression82 *)0);
		return t9;
	}
	t10 = Program_getCond400(program4, c1, a12, a23, types6);
	return t10;
}

static ExpressionList61 *BuilderContext_evaluateCondExpressions784(BuilderContext177 *zself, Location45 *zlocation, Collection203 *zsource, Type98 *ztype)
{
	ExpressionList61 *list1;
	ExpressionList61 *t11;
	list1 = Program_getExpressionList413(BuilderContext_program835(zself));
	{
		ASTExpression140 *e2;
		e2 = zsource->firstElement;
		while((char)(e2 != ((ASTExpression140 *)0)))
		{
			{
				if((char)(BuilderContext_evaluateAndExpandExpression759(zself, e2, ztype, list1) == -1))
				{
					ExpressionList61 *t3;
					t3 = ((ExpressionList61 *)0);
					return t3;
				}
			}
			e2 = e2->nextSibling;
		}
	}
	if(Collection_isEmpty902(((Collection63 *)list1)))
	{
		ExpressionList61 *t4;
		BuilderContext_reportSourceError1294(zself, zlocation, S1990);
		t4 = ((ExpressionList61 *)0);
		return t4;
	}
	{
		CollectionPool62 *self5;
		self5 = ((CollectionPool62 *)list1);
		{
			Collection63 *self6;
			CollectionPoolElement205 *e7;
			self6 = ((Collection63 *)self5);
			e7 = self6->firstElement;
			while((char)(e7 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *e8;
						e8 = e7->object;
						if((!BuilderContext_checkNoType844(zself, zlocation, e8)))
						{
							ExpressionList61 *t9;
							t9 = ((ExpressionList61 *)0);
							return t9;
						}
						if((!BuilderContext_defineType745(zself, e8->type)))
						{
							ExpressionList61 *t10;
							t10 = ((ExpressionList61 *)0);
							return t10;
						}
					}
				}
				e7 = e7->nextSibling;
			}
		}
	}
	t11 = list1;
	return t11;
}

static Expression21 *BuilderContext_evaluateMinimal785(BuilderContext177 *zself, ASTBinary144 *zsource, int zcode)
{
	Expression21 *a11;
	Expression21 *a22;
	Program5 *program3;
	a11 = BuilderContext_evaluateCondition760(zself, zsource->argument1);
	a22 = BuilderContext_evaluateCondition760(zself, zsource->argument2);
	if(((char)(a11 == ((Expression21 *)0)) || (char)(a22 == ((Expression21 *)0))))
	{
		Expression21 *t4;
		t4 = ((Expression21 *)0);
		return t4;
	}
	program3 = BuilderContext_program835(zself);
	if(Expression_isConstantInteger502(a11))
	{
		char c5;
		c5 = (char)(Expression_constantInteger476(a11) != 0UL);
		if((char)(zcode == 20))
		{
			Expression21 *t6;
			t6 = (c5?a22:((Expression21 *)Program_getFalse394(program3)));
			return t6;
		}
		else
		{
			Expression21 *t7;
			t7 = (c5?((Expression21 *)Program_getTrue393(program3)):a22);
			return t7;
		}
	}
	else
	{
		Expression21 *t8;
		t8 = ((Expression21 *)Program_getBinary398(program3, zcode, ((Type98 *)program3->booleanType), a11, a22));
		return t8;
	}
}

static VargsExpression88 *BuilderContext_evaluateEllipsis786(BuilderContext177 *zself, ASTExpression140 *zsource)
{
	Program5 *program1;
	VargsExpression88 *t3;
	if((!BuilderContext_checkVargs846(zself, ((Location45 *)zsource))))
	{
		VargsExpression88 *t2;
		t2 = ((VargsExpression88 *)0);
		return t2;
	}
	program1 = BuilderContext_program835(zself);
	t3 = Program_getVargs401(program1, zself->extra);
	return t3;
}

static Expression21 *BuilderContext_evaluateOffset787(BuilderContext177 *zself, ASTOffset152 *zsource, Type98 *ztype)
{
	Expression21 *e1;
	e1 = BuilderContext_evaluateExpression761(zself, zsource->type, ztype);
	if((char)(e1 == ((Expression21 *)0)))
	{
		Expression21 *t2;
		t2 = ((Expression21 *)0);
		return t2;
	}
	if((!Expression_isType505(e1)))
	{
		Type98 *type3;
		Attribute107 *attribute4;
		Program5 *program5;
		IntegerExpression20 *offset6;
		PointerType101 *byteptr7;
		UnaryExpression73 *base8;
		BinaryExpression72 *addr9;
		PointerType101 *addrType10;
		UnaryExpression73 *value11;
		Expression21 *t14;
		type3 = e1->type;
		if((!Type_isPointer548(type3)))
		{
			Expression21 *t12;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S1997, type3);
			t12 = ((Expression21 *)0);
			return t12;
		}
		type3 = Type_asPointer533(type3)->target;
		attribute4 = BuilderContext_getAttribute823(zself, zsource, type3);
		if((char)(attribute4 == ((Attribute107 *)0)))
		{
			Expression21 *t13;
			t13 = ((Expression21 *)0);
			return t13;
		}
		program5 = BuilderContext_program835(zself);
		offset6 = Program_getInteger391(program5, ((unsigned long long )attribute4->offset), ((Type98 *)program5->sizeType));
		byteptr7 = Type_pointer524(Program_getArrayType384(program5, ((Type98 *)program5->uint8Type), ((size_t)0x0000000000000000U)));
		base8 = Program_getUnary397(program5, 9, ((Type98 *)byteptr7), e1);
		addr9 = Program_getBinary398(program5, 70, ((Type98 *)byteptr7), ((Expression21 *)base8), ((Expression21 *)offset6));
		addrType10 = Type_pointer524(attribute4->storageType);
		value11 = Program_getUnary397(program5, 9, ((Type98 *)addrType10), ((Expression21 *)addr9));
		t14 = ((Expression21 *)value11);
		return t14;
	}
	else
	{
		Type98 *type15;
		Attribute107 *attribute16;
		Expression21 *t18;
		type15 = Expression_asType484(e1)->type;
		attribute16 = BuilderContext_getAttribute823(zself, zsource, type15);
		if((char)(attribute16 == ((Attribute107 *)0)))
		{
			Expression21 *t17;
			t17 = ((Expression21 *)0);
			return t17;
		}
		t18 = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), ((unsigned long long )attribute16->offset), ((Type98 *)BuilderContext_program835(zself)->sizeType)));
		return t18;
	}
}

static MacroCallExpression85 *BuilderContext_evaluateYield788(BuilderContext177 *zself, ASTArray145 *zsource)
{
	ExpressionList61 *arguments1;
	ASTBlockClosure154 *sourceBlock2;
	int got3;
	int expected4;
	MacroBlock86 *block5;
	BuilderContext177 *cx6;
	BreakContext179 bc7;
	MacroCallExpression85 *t34;
	if((char)(zself->macroContext == ((MacroContext178 *)0)))
	{
		MacroCallExpression85 *t8;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1958);
		t8 = ((MacroCallExpression85 *)0);
		return t8;
	}
	arguments1 = BuilderContext_evaluateExpressions756(zself, zsource->arguments);
	if((char)(arguments1 == ((ExpressionList61 *)0)))
	{
		MacroCallExpression85 *t9;
		t9 = ((MacroCallExpression85 *)0);
		return t9;
	}
	{
		CollectionPool62 *self10;
		self10 = ((CollectionPool62 *)arguments1);
		{
			Collection63 *self11;
			CollectionPoolElement205 *e12;
			self11 = ((Collection63 *)self10);
			e12 = self11->firstElement;
			while((char)(e12 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *e13;
						e13 = e12->object;
						if((!BuilderContext_checkNoType844(zself, ((Location45 *)zsource), e13)))
						{
							MacroCallExpression85 *t14;
							t14 = ((MacroCallExpression85 *)0);
							return t14;
						}
					}
				}
				e12 = e12->nextSibling;
			}
		}
	}
	sourceBlock2 = zself->macroContext->sourceBlock;
	got3 = sourceBlock2->parameters->size;
	expected4 = ((Collection63 *)arguments1)->size;
	if((char)(expected4 != got3))
	{
		MacroCallExpression85 *t15;
		BuilderContext_reportSourceError1302(zself, ((Location45 *)zsource), S2020, expected4, got3);
		t15 = ((MacroCallExpression85 *)0);
		return t15;
	}
	block5 = Program_getMacroBlock405(BuilderContext_program835(zself));
	cx6 = zself->parent;
	BreakContext_initializeBlock1441((&bc7), zself, block5);
	{
		BuilderContext177 *self16;
		BreakContext179 *bc17;
		BreakContext179 *old18;
		self16 = cx6;
		bc17 = (&bc7);
		old18 = self16->breakContext;
		self16->breakContext = bc17;
		{
			{
				BuilderContext177 *self19;
				Block38 *block20;
				self19 = cx6;
				block20 = ((Block38 *)block5);
				{
					BuilderContext177 *self21;
					Scope8 scope22;
					self21 = self19;
					Scope_initialize442((&scope22), self21->scope, self21->scope->module, self21->pool, 64);
					self21->scope = (&scope22);
					{
						Block38 *saveBlock23;
						saveBlock23 = self19->block;
						self19->block = block20;
						{
							{
								Collection244 *iterable124;
								ExpressionList61 *iterable225;
								CollectionPoolElement205 *e226;
								iterable124 = sourceBlock2->parameters;
								iterable225 = arguments1;
								e226 = ((Collection63 *)iterable225)->firstElement;
								{
									Collection244 *self27;
									ASTId155 *e28;
									self27 = iterable124;
									e28 = self27->firstElement;
									while((char)(e28 != ((ASTId155 *)0)))
									{
										{
											Expression21 *v229;
											v229 = CollectionPool_elementValue1237(((CollectionPool62 *)iterable225), e226);
											{
												Definition32 *d30;
												if(((Expression_isConstant501(v229) || Expression_isLocalVariable503(v229)) || Expression_isParameter504(v229)))
												{
													d30 = ((Definition32 *)Program_getLocalAlias419(BuilderContext_program835(cx6), BuilderContext_module836(cx6), ((Location45 *)e28)->line, e28->name, v229));
												}
												else
												{
													d30 = ((Definition32 *)BuilderContext_createVariable829(cx6, ((Location45 *)e28)->line, e28->name, v229->type, v229));
												}
												if((!BuilderContext_addLocalDefinition838(cx6, d30)))
												{
													MacroCallExpression85 *t31;
													t31 = ((MacroCallExpression85 *)0);
													{
														self19->block = saveBlock23;
													}
													{
														self21->scope = (&scope22)->parent;
													}
													{
														self16->breakContext = old18;
													}
													return t31;
												}
											}
											e226 = Collection_nextElement1238(((Collection63 *)iterable225), e226);
										}
										e28 = e28->nextSibling;
									}
								}
							}
							if((!BuilderContext_evaluateInstructions804(cx6, sourceBlock2->instructions)))
							{
								MacroCallExpression85 *t32;
								t32 = ((MacroCallExpression85 *)0);
								{
									self19->block = saveBlock23;
								}
								{
									self21->scope = (&scope22)->parent;
								}
								{
									self16->breakContext = old18;
								}
								return t32;
							}
							if((char)((&bc7)->types == ((TypeSequence108 *)0)))
							{
								(&bc7)->types = (&S1675);
							}
							else
							{
								if((!((Block38 *)block5)->terminated))
								{
									if((!TypeSequence_merge605((&bc7)->types, (&S1677))))
									{
										MacroCallExpression85 *t33;
										BuilderContext_reportSourceError920(zself, zself->macroContext->location, S2031, (&bc7)->types);
										t33 = ((MacroCallExpression85 *)0);
										{
											self19->block = saveBlock23;
										}
										{
											self21->scope = (&scope22)->parent;
										}
										{
											self16->breakContext = old18;
										}
										return t33;
									}
								}
							}
						}
						{
							self19->block = saveBlock23;
						}
					}
					{
						self21->scope = (&scope22)->parent;
					}
				}
			}
		}
		{
			self16->breakContext = old18;
		}
	}
	t34 = Program_getMacroCall404(BuilderContext_program835(zself), (&bc7)->types, block5);
	return t34;
}

static Expression21 *BuilderContext_evaluateDefinition789(BuilderContext177 *zself, ASTFreeCall141 *zsrc, Definition32 *zdefinition, Expression21 *ze1)
{
	switch( zdefinition->code )
	{
	case 0:
	{
		GenericFunction37 *g1;
		ExpressionList61 *arguments2;
		Function33 *f3;
		Expression21 *t8;
		g1 = Definition_asGenericFunction684(zdefinition);
		if((!BuilderContext_defineGenericFunction740(zself, g1)))
		{
			Expression21 *t4;
			t4 = ((Expression21 *)0);
			return t4;
		}
		arguments2 = BuilderContext_evaluateArguments757(zself, ((Location45 *)zsrc), zsrc->arguments, (&g1->parameters), GenericFunction_isVariadic1330(g1), ze1);
		if((char)(arguments2 == ((ExpressionList61 *)0)))
		{
			Expression21 *t5;
			t5 = ((Expression21 *)0);
			return t5;
		}
		f3 = BuilderContext_getFunctionInstance827(zself, g1, arguments2);
		if((char)(((Prototype31 *)f3)->state == ((unsigned char)2U)))
		{
			Expression21 *t6;
			t6 = ((Expression21 *)0);
			return t6;
		}
		if((!BuilderContext_defineFunctionType739(zself, f3)))
		{
			Expression21 *t7;
			BuilderContext_reportSourceError1338(zself, ((Location45 *)zsrc), S2003, f3);
			t7 = ((Expression21 *)0);
			return t7;
		}
		t8 = ((Expression21 *)BuilderContext_evaluateCall793(zself, zsrc, f3, arguments2));
		return t8;
	}
	break;
	case 1:
	{
		GenericType94 *g9;
		ExpressionList61 *arguments10;
		Type98 *type11;
		Expression21 *t20;
		if((char)(zsrc->block != ((ASTBlockClosure154 *)0)))
		{
			Expression21 *t12;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
			t12 = ((Expression21 *)0);
			return t12;
		}
		g9 = Definition_asGenericType697(zdefinition);
		arguments10 = BuilderContext_evaluateArguments757(zself, ((Location45 *)zsrc), zsrc->arguments, (&g9->parameters), 0, ((Expression21 *)0));
		if((char)(arguments10 == ((ExpressionList61 *)0)))
		{
			Expression21 *t13;
			t13 = ((Expression21 *)0);
			return t13;
		}
		{
			CollectionPool62 *self14;
			self14 = ((CollectionPool62 *)arguments10);
			{
				Collection63 *self15;
				CollectionPoolElement205 *e16;
				self15 = ((Collection63 *)self14);
				e16 = self15->firstElement;
				while((char)(e16 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *a17;
							a17 = e16->object;
							if(((!Expression_isType505(a17)) && (!Expression_isConstant501(a17))))
							{
								Expression21 *t18;
								BuilderContext_reportSourceError1357(zself, ((Location45 *)zsrc), S2023, ((Definition32 *)g9)->name);
								t18 = ((Expression21 *)0);
								return t18;
							}
						}
					}
					e16 = e16->nextSibling;
				}
			}
		}
		type11 = GenericType_findInstance1353(g9, arguments10);
		if((char)(type11 == ((Type98 *)0)))
		{
			type11 = BuilderContext_instanciateType828(zself, g9, arguments10);
			if((char)(type11 == ((Type98 *)0)))
			{
				Expression21 *t19;
				t19 = ((Expression21 *)0);
				return t19;
			}
			GenericType_add1352(g9, type11);
		}
		t20 = Type_expression526(type11);
		return t20;
	}
	break;
	case 4:
	{
		Function33 *f21;
		ExpressionList61 *arguments22;
		Expression21 *t26;
		f21 = Definition_asFunction683(zdefinition);
		if((char)(((Prototype31 *)f21)->state == ((unsigned char)2U)))
		{
			Expression21 *t23;
			t23 = ((Expression21 *)0);
			return t23;
		}
		if((!BuilderContext_defineFunctionType739(zself, f21)))
		{
			Expression21 *t24;
			BuilderContext_reportSourceError1338(zself, ((Location45 *)zsrc), S2003, f21);
			t24 = ((Expression21 *)0);
			return t24;
		}
		arguments22 = BuilderContext_evaluateArguments757(zself, ((Location45 *)zsrc), zsrc->arguments, (&f21->parameters), 0, ze1);
		if((char)(arguments22 == ((ExpressionList61 *)0)))
		{
			Expression21 *t25;
			t25 = ((Expression21 *)0);
			return t25;
		}
		t26 = ((Expression21 *)BuilderContext_evaluateCall793(zself, zsrc, f21, arguments22));
		return t26;
	}
	break;
	case 11:
	{
		ExternFunction36 *f27;
		ExpressionList61 *arguments28;
		Expression21 *t32;
		if((char)(zsrc->block != ((ASTBlockClosure154 *)0)))
		{
			Expression21 *t29;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
			t29 = ((Expression21 *)0);
			return t29;
		}
		f27 = Definition_asExternFunction685(zdefinition);
		if((!BuilderContext_defineExternFunction743(zself, f27)))
		{
			Expression21 *t30;
			t30 = ((Expression21 *)0);
			return t30;
		}
		arguments28 = BuilderContext_evaluateTypedArguments758(zself, ((Location45 *)zsrc), zsrc->arguments, f27->parameterTypes, ze1);
		if((char)(arguments28 == ((ExpressionList61 *)0)))
		{
			Expression21 *t31;
			t31 = ((Expression21 *)0);
			return t31;
		}
		t32 = ((Expression21 *)Program_getExternFunctionCall402(BuilderContext_program835(zself), f27, arguments28));
		return t32;
	}
	break;
	case 3:
	{
		GlobalVariable97 *v33;
		Expression21 *t36;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t34;
			t34 = ((Expression21 *)0);
			return t34;
		}
		v33 = Definition_asGlobalVariable687(zdefinition);
		if((!BuilderContext_defineGlobalVariable744(zself, v33)))
		{
			Expression21 *t35;
			t35 = ((Expression21 *)0);
			return t35;
		}
		t36 = v33->expression;
		return t36;
	}
	break;
	case 2:
	{
		Alias89 *a37;
		Expression21 *t40;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t38;
			t38 = ((Expression21 *)0);
			return t38;
		}
		a37 = Definition_asAlias686(zdefinition);
		if((!BuilderContext_defineAlias738(zself, a37)))
		{
			Expression21 *t39;
			t39 = ((Expression21 *)0);
			return t39;
		}
		t40 = a37->expression;
		return t40;
	}
	break;
	case 9:
	{
		Expression21 *t42;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t41;
			t41 = ((Expression21 *)0);
			return t41;
		}
		t42 = Type_expression526(Definition_asType695(zdefinition)->type);
		return t42;
	}
	break;
	case 10:
	{
		SubTypeDefinition92 *s43;
		Type98 *type44;
		Expression21 *t47;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t45;
			t45 = ((Expression21 *)0);
			return t45;
		}
		s43 = Definition_asSubType696(zdefinition);
		type44 = s43->type;
		if((char)(type44 == ((Type98 *)0)))
		{
			type44 = BuilderContext_createSubType830(zself, ((Definition32 *)s43)->scope, s43->source, ((ExpressionList61 *)0));
			if((char)(type44 == ((Type98 *)0)))
			{
				Expression21 *t46;
				t46 = ((Expression21 *)0);
				return t46;
			}
			s43->type = type44;
		}
		t47 = Type_expression526(type44);
		return t47;
	}
	break;
	case 5:
	{
		Expression21 *t49;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t48;
			t48 = ((Expression21 *)0);
			return t48;
		}
		t49 = Definition_asParameter689(zdefinition)->expression;
		return t49;
	}
	break;
	case 12:
	{
		Expression21 *t51;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t50;
			t50 = ((Expression21 *)0);
			return t50;
		}
		t51 = Definition_asVargParameter690(zdefinition)->expression;
		return t51;
	}
	break;
	case 13:
	{
		Expression21 *t53;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t52;
			t52 = ((Expression21 *)0);
			return t52;
		}
		t53 = Definition_asLocalAlias691(zdefinition)->expression;
		return t53;
	}
	break;
	case 6:
	{
		Expression21 *t55;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t54;
			t54 = ((Expression21 *)0);
			return t54;
		}
		t55 = Definition_asVariable688(zdefinition)->expression;
		return t55;
	}
	break;
	case 8:
	{
		Expression21 *t57;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t56;
			t56 = ((Expression21 *)0);
			return t56;
		}
		t57 = Definition_asTypeArgument693(zdefinition)->value;
		return t57;
	}
	break;
	case 14:
	{
		Expression21 *t59;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t58;
			t58 = ((Expression21 *)0);
			return t58;
		}
		t59 = ((Expression21 *)Program_getTrue393(BuilderContext_program835(zself)));
		return t59;
	}
	break;
	case 15:
	{
		Expression21 *t61;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t60;
			t60 = ((Expression21 *)0);
			return t60;
		}
		t61 = ((Expression21 *)Program_getFalse394(BuilderContext_program835(zself)));
		return t61;
	}
	break;
	case 16:
	{
		Expression21 *t63;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t62;
			t62 = ((Expression21 *)0);
			return t62;
		}
		t63 = ((Expression21 *)Program_getNil395(BuilderContext_program835(zself)));
		return t63;
	}
	break;
	case 18:
	{
		ASTBlockClosure154 *srcBlock64;
		int n65;
		int expected66;
		char ok67;
		Block38 *block68;
		Expression21 *t83;
		if((!BuilderContext_checkVargs846(zself, ((Location45 *)zsrc))))
		{
			Expression21 *t69;
			t69 = ((Expression21 *)0);
			return t69;
		}
		srcBlock64 = zsrc->block;
		if((char)(srcBlock64 == ((ASTBlockClosure154 *)0)))
		{
			Expression21 *t70;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2001);
			t70 = ((Expression21 *)0);
			return t70;
		}
		n65 = srcBlock64->parameters->size;
		expected66 = 1;
		if((char)(n65 != expected66))
		{
			Expression21 *t71;
			BuilderContext_reportSourceError1302(zself, ((Location45 *)zsrc), S2020, expected66, n65);
			t71 = ((Expression21 *)0);
			return t71;
		}
		ok67 = 1;
		block68 = Program_getBlock412(BuilderContext_program835(zself));
		{
			Block38 *block72;
			block72 = block68;
			{
				Scope8 scope73;
				Scope_initialize442((&scope73), zself->scope, zself->scope->module, zself->pool, 64);
				zself->scope = (&scope73);
				{
					Block38 *saveBlock74;
					saveBlock74 = zself->block;
					zself->block = block72;
					{
						{
							{
								CollectionPool62 *self75;
								self75 = ((CollectionPool62 *)zself->extra);
								{
									Collection63 *self76;
									CollectionPoolElement205 *e77;
									self76 = ((Collection63 *)self75);
									e77 = self76->firstElement;
									while((char)(e77 != ((CollectionPoolElement205 *)0)))
									{
										{
											{
												Expression21 *e78;
												e78 = e77->object;
												{
													{
														Scope8 scope79;
														Scope_initialize442((&scope79), zself->scope, zself->scope->module, zself->pool, 64);
														zself->scope = (&scope79);
														{
															ASTId155 *id80;
															VargParameter42 *d81;
															id80 = srcBlock64->parameters->firstElement;
															d81 = Program_getVargParameter418(BuilderContext_program835(zself), BuilderContext_module836(zself), id80, e78);
															BuilderContext_addLocalDefinition838(zself, ((Definition32 *)d81));
															(ok67 &= BuilderContext_evaluateInstructions804(zself, srcBlock64->instructions));
														}
														{
															zself->scope = (&scope79)->parent;
														}
													}
												}
											}
										}
										e77 = e77->nextSibling;
									}
								}
							}
						}
					}
					{
						zself->block = saveBlock74;
					}
				}
				{
					zself->scope = (&scope73)->parent;
				}
			}
		}
		if((!ok67))
		{
			Expression21 *t82;
			t82 = ((Expression21 *)0);
			return t82;
		}
		t83 = ((Expression21 *)Program_getVargsEach409(BuilderContext_program835(zself), block68));
		return t83;
	}
	break;
	case 17:
	{
		unsigned long long n84;
		Expression21 *t91;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t85;
			t85 = ((Expression21 *)0);
			return t85;
		}
		if((!BuilderContext_checkVargs846(zself, ((Location45 *)zsrc))))
		{
			Expression21 *t86;
			t86 = ((Expression21 *)0);
			return t86;
		}
		n84 = 0UL;
		{
			{
				CollectionPool62 *self87;
				self87 = ((CollectionPool62 *)zself->extra);
				{
					Collection63 *self88;
					CollectionPoolElement205 *e89;
					self88 = ((Collection63 *)self87);
					e89 = self88->firstElement;
					while((char)(e89 != ((CollectionPoolElement205 *)0)))
					{
						{
							{
								Expression21 *e90;
								e90 = e89->object;
								{
									(++n84);
								}
							}
						}
						e89 = e89->nextSibling;
					}
				}
			}
		}
		t91 = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), n84, ((Type98 *)BuilderContext_program835(zself)->uint32Type)));
		return t91;
	}
	break;
	case 7:
	{
		Expression21 *t93;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t92;
			t92 = ((Expression21 *)0);
			return t92;
		}
		t93 = ((Expression21 *)Program_getAttribute410(BuilderContext_program835(zself), ze1, Definition_asAttribute692(zdefinition)));
		return t93;
	}
	break;
	case 20:
	{
		Type98 *t194;
		Type98 *parent95;
		Expression21 *t98;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t96;
			t96 = ((Expression21 *)0);
			return t96;
		}
		t194 = ze1->type;
		parent95 = t194->parent;
		if(((char)(parent95 == ((Type98 *)0)) || (!Type_hasSize556(parent95))))
		{
			Expression21 *t97;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsrc), S1999, t194);
			t97 = ((Expression21 *)0);
			return t97;
		}
		t98 = ((Expression21 *)Program_getUnary397(BuilderContext_program835(zself), 22, parent95, ze1));
		return t98;
	}
	break;
	case 21:
	{
		Type98 *type99;
		Expression21 *t102;
		type99 = BuilderContext_evaluateCastArgument790(zself, zsrc);
		if((char)(type99 == ((Type98 *)0)))
		{
			Expression21 *t100;
			t100 = ((Expression21 *)0);
			return t100;
		}
		if((!Type_match530(ze1->type, type99)))
		{
			Expression21 *t101;
			BuilderContext_reportSourceError1306(zself, ((Location45 *)zsrc), S2008, 1, ze1->type, type99);
			t101 = ((Expression21 *)0);
			return t101;
		}
		t102 = BuilderContext_getCast822(zself, ((Location45 *)zsrc), ze1, type99);
		return t102;
	}
	break;
	case 22:
	{
		Type98 *type103;
		Expression21 *t106;
		type103 = BuilderContext_evaluateCastArgument790(zself, zsrc);
		if((char)(type103 == ((Type98 *)0)))
		{
			Expression21 *t104;
			t104 = ((Expression21 *)0);
			return t104;
		}
		if((!Type_match530(type103, ze1->type)))
		{
			Expression21 *t105;
			BuilderContext_reportSourceError1306(zself, ((Location45 *)zsrc), S2008, 1, type103, ze1->type);
			t105 = ((Expression21 *)0);
			return t105;
		}
		t106 = BuilderContext_getCast822(zself, ((Location45 *)zsrc), ze1, type103);
		return t106;
	}
	break;
	case 23:
	{
		Type98 *type107;
		Expression21 *t109;
		type107 = BuilderContext_evaluateCastArgument790(zself, zsrc);
		if((char)(type107 == ((Type98 *)0)))
		{
			Expression21 *t108;
			t108 = ((Expression21 *)0);
			return t108;
		}
		t109 = BuilderContext_getCast822(zself, ((Location45 *)zsrc), ze1, type107);
		return t109;
	}
	break;
	case 27:
	{
		Type98 *type110;
		char ok111;
		Expression21 *t115;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t112;
			t112 = ((Expression21 *)0);
			return t112;
		}
		type110 = Expression_asType484(ze1)->type;
		ok111 = BuilderContext_defineTypeSize753(zself, type110);
		if((!ok111))
		{
			Expression21 *t113;
			t113 = ((Expression21 *)0);
			return t113;
		}
		if((!Type_hasSize556(type110)))
		{
			Expression21 *t114;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsrc), S1969, type110);
			t114 = ((Expression21 *)0);
			return t114;
		}
		t115 = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), ((unsigned long long )type110->size), ((Type98 *)BuilderContext_program835(zself)->sizeType)));
		return t115;
	}
	break;
	case 28:
	{
		Type98 *type116;
		Expression21 *t118;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t117;
			t117 = ((Expression21 *)0);
			return t117;
		}
		type116 = Expression_asType484(ze1)->type;
		t118 = ((Expression21 *)Program_getTypedNil396(BuilderContext_program835(zself), ((Type98 *)Type_pointer524(type116))));
		return t118;
	}
	break;
	case 24:
	{
		Type98 *type119;
		Type98 *parent120;
		Expression21 *t123;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t121;
			t121 = ((Expression21 *)0);
			return t121;
		}
		type119 = Expression_asType484(ze1)->type;
		parent120 = type119->parent;
		if((char)(parent120 == ((Type98 *)0)))
		{
			Expression21 *t122;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsrc), S1999, type119);
			t122 = ((Expression21 *)0);
			return t122;
		}
		t123 = Type_expression526(parent120);
		return t123;
	}
	break;
	case 25:
	{
		Type98 *type124;
		PointerType101 *pointerType125;
		Type98 *targetType126;
		Expression21 *t129;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t127;
			t127 = ((Expression21 *)0);
			return t127;
		}
		type124 = Expression_asType484(ze1)->type;
		if((!Type_isPointer548(type124)))
		{
			Expression21 *t128;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsrc), S1997, type124);
			t128 = ((Expression21 *)0);
			return t128;
		}
		pointerType125 = Type_asPointer533(type124);
		targetType126 = pointerType125->target;
		t129 = Type_expression526(targetType126);
		return t129;
	}
	break;
	case 26:
	{
		Type98 *type130;
		ArrayType102 *arrayType131;
		Type98 *cellType132;
		Expression21 *t135;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t133;
			t133 = ((Expression21 *)0);
			return t133;
		}
		type130 = Expression_asType484(ze1)->type;
		if((!Type_isArray550(type130)))
		{
			Expression21 *t134;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsrc), S1996, type130);
			t134 = ((Expression21 *)0);
			return t134;
		}
		arrayType131 = Type_asArray534(type130);
		cellType132 = arrayType131->cellType;
		t135 = Type_expression526(cellType132);
		return t135;
	}
	break;
	case 29:
	{
		Expression21 *vtableSource136;
		Type98 *vtableType137;
		Type98 *type138;
		StructureType104 *structure139;
		Program5 *program140;
		ExpressionList61 *arguments141;
		Expression21 *t148;
		vtableSource136 = BuilderContext_evaluateArgument792(zself, zsrc, ((Type98 *)0));
		if((char)(vtableSource136 == ((Expression21 *)0)))
		{
			Expression21 *t142;
			t142 = ((Expression21 *)0);
			return t142;
		}
		if((!Expression_isType505(vtableSource136)))
		{
			Expression21 *t143;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2027);
			t143 = ((Expression21 *)0);
			return t143;
		}
		vtableType137 = Expression_asType484(vtableSource136)->type;
		if((!BuilderContext_defineType745(zself, vtableType137)))
		{
			Expression21 *t144;
			t144 = ((Expression21 *)0);
			return t144;
		}
		type138 = Expression_asType484(ze1)->type;
		if((!BuilderContext_defineType745(zself, type138)))
		{
			Expression21 *t145;
			t145 = ((Expression21 *)0);
			return t145;
		}
		if((!Type_isStructure549(type138)))
		{
			Expression21 *t146;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsrc), S2026, type138);
			t146 = ((Expression21 *)0);
			return t146;
		}
		structure139 = Type_asStructure535(type138);
		program140 = BuilderContext_program835(zself);
		arguments141 = Program_getExpressionList413(program140);
		if((!BuilderContext_fillStructure796(zself, ((Location45 *)zsrc), arguments141, structure139, vtableType137)))
		{
			Expression21 *t147;
			t147 = ((Expression21 *)0);
			return t147;
		}
		t148 = ((Expression21 *)Program_getStructureInitializer407(program140, arguments141, ((Type98 *)Type_pointer524(((Type98 *)structure139))), structure139));
		return t148;
	}
	break;
	case 30:
	{
		Type98 *t1149;
		Expression21 *e2150;
		int code151;
		t1149 = ze1->type;
		e2150 = BuilderContext_evaluateCompatibleArgument791(zself, zsrc, t1149);
		if((char)(e2150 == ((Expression21 *)0)))
		{
			Expression21 *t152;
			t152 = ((Expression21 *)0);
			return t152;
		}
		code151 = Definition_asOperation694(zdefinition)->ecode;
		if((Expression_isConstantInteger502(ze1) && Expression_isConstantInteger502(e2150)))
		{
			unsigned long long n1153;
			unsigned long long n2154;
			unsigned long long result155;
			Expression21 *t156;
			n1153 = Expression_constantInteger476(ze1);
			n2154 = Expression_constantInteger476(e2150);
			result155 = Type_evaluateIntegerBinaryOperation540(t1149, n1153, n2154, code151);
			t156 = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), result155, t1149));
			return t156;
		}
		else
		{
			Expression21 *t157;
			t157 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), code151, t1149, ze1, e2150));
			return t157;
		}
	}
	break;
	case 32:
	{
		Expression21 *e2158;
		Type98 *t1159;
		int code160;
		e2158 = BuilderContext_evaluateCompatibleArgument791(zself, zsrc, ((Type98 *)BuilderContext_program835(zself)->uint8Type));
		if((char)(e2158 == ((Expression21 *)0)))
		{
			Expression21 *t161;
			t161 = ((Expression21 *)0);
			return t161;
		}
		t1159 = ze1->type;
		code160 = Definition_asOperation694(zdefinition)->ecode;
		if((Expression_isConstantInteger502(ze1) && Expression_isConstantInteger502(e2158)))
		{
			unsigned long long n1162;
			unsigned long long n2163;
			unsigned long long result164;
			Expression21 *t165;
			n1162 = Expression_constantInteger476(ze1);
			n2163 = Expression_constantInteger476(e2158);
			result164 = Type_evaluateIntegerBinaryOperation540(t1159, n1162, n2163, code160);
			t165 = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), result164, t1159));
			return t165;
		}
		else
		{
			Expression21 *t166;
			t166 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), code160, t1159, ze1, e2158));
			return t166;
		}
	}
	break;
	case 33:
	{
		Type98 *t1167;
		Expression21 *e2168;
		int code169;
		t1167 = ze1->type;
		e2168 = BuilderContext_evaluateCompatibleArgument791(zself, zsrc, t1167);
		if((char)(e2168 == ((Expression21 *)0)))
		{
			Expression21 *t170;
			t170 = ((Expression21 *)0);
			return t170;
		}
		code169 = Definition_asOperation694(zdefinition)->ecode;
		if((Expression_isConstantInteger502(ze1) && Expression_isConstantInteger502(e2168)))
		{
			unsigned long long n1171;
			unsigned long long n2172;
			char result173;
			Expression21 *t174;
			n1171 = Expression_constantInteger476(ze1);
			n2172 = Expression_constantInteger476(e2168);
			result173 = Type_evaluateIntegerBinaryComparison541(t1167, n1171, n2172, code169);
			t174 = ((Expression21 *)Program_getBoolean392(BuilderContext_program835(zself), result173));
			return t174;
		}
		else
		{
			Expression21 *t175;
			t175 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), code169, ((Type98 *)BuilderContext_program835(zself)->booleanType), ze1, e2168));
			return t175;
		}
	}
	break;
	case 31:
	{
		Type98 *t1176;
		int code177;
		if((char)(zsrc->block != ((ASTBlockClosure154 *)0)))
		{
			Expression21 *t178;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
			t178 = ((Expression21 *)0);
			return t178;
		}
		t1176 = ze1->type;
		code177 = Definition_asOperation694(zdefinition)->ecode;
		if(Expression_isConstantInteger502(ze1))
		{
			unsigned long long n179;
			unsigned long long result180;
			Expression21 *t181;
			n179 = Expression_constantInteger476(ze1);
			result180 = Type_evaluateIntegerUnaryOperation542(t1176, n179, code177);
			t181 = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), result180, t1176));
			return t181;
		}
		else
		{
			Expression21 *t182;
			t182 = ((Expression21 *)Program_getUnary397(BuilderContext_program835(zself), code177, t1176, ze1));
			return t182;
		}
	}
	break;
	case 34:
	{
		Expression21 *e2183;
		OperationDefinition93 *op184;
		Expression21 *t187;
		e2183 = BuilderContext_evaluateCompatibleArgument791(zself, zsrc, ze1->type);
		if((char)(e2183 == ((Expression21 *)0)))
		{
			Expression21 *t185;
			t185 = ((Expression21 *)0);
			return t185;
		}
		if((!BuilderContext_checkLvalue843(zself, ((Location45 *)zsrc), ze1)))
		{
			Expression21 *t186;
			t186 = ((Expression21 *)0);
			return t186;
		}
		op184 = Definition_asOperation694(zdefinition);
		t187 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), op184->ecode, ((Type98 *)BuilderContext_program835(zself)->voidType), ze1, e2183));
		return t187;
	}
	break;
	case 36:
	{
		OperationDefinition93 *op188;
		Expression21 *t191;
		if((char)(zsrc->block != ((ASTBlockClosure154 *)0)))
		{
			Expression21 *t189;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
			t189 = ((Expression21 *)0);
			return t189;
		}
		if((!BuilderContext_checkLvalue843(zself, ((Location45 *)zsrc), ze1)))
		{
			Expression21 *t190;
			t190 = ((Expression21 *)0);
			return t190;
		}
		op188 = Definition_asOperation694(zdefinition);
		t191 = ((Expression21 *)Program_getUnary397(BuilderContext_program835(zself), op188->ecode, ((Type98 *)BuilderContext_program835(zself)->voidType), ze1));
		return t191;
	}
	break;
	case 35:
	{
		Expression21 *e2192;
		OperationDefinition93 *op193;
		Expression21 *t196;
		e2192 = BuilderContext_evaluateCompatibleArgument791(zself, zsrc, ((Type98 *)BuilderContext_program835(zself)->uint8Type));
		if((char)(e2192 == ((Expression21 *)0)))
		{
			Expression21 *t194;
			t194 = ((Expression21 *)0);
			return t194;
		}
		if((!BuilderContext_checkLvalue843(zself, ((Location45 *)zsrc), ze1)))
		{
			Expression21 *t195;
			t195 = ((Expression21 *)0);
			return t195;
		}
		op193 = Definition_asOperation694(zdefinition);
		t196 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), op193->ecode, ((Type98 *)BuilderContext_program835(zself)->voidType), ze1, e2192));
		return t196;
	}
	break;
	case 37:
	{
		Type98 *t1197;
		if((char)(zsrc->block != ((ASTBlockClosure154 *)0)))
		{
			Expression21 *t198;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
			t198 = ((Expression21 *)0);
			return t198;
		}
		t1197 = ze1->type;
		if(Expression_isConstantInteger502(ze1))
		{
			unsigned long long n199;
			unsigned long long result200;
			Expression21 *t201;
			n199 = Expression_constantInteger476(ze1);
			result200 = (n199 ^ 1UL);
			t201 = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), result200, t1197));
			return t201;
		}
		else
		{
			Expression21 *t202;
			t202 = ((Expression21 *)Program_getUnary397(BuilderContext_program835(zself), 40, t1197, ze1));
			return t202;
		}
	}
	break;
	case 38:
	{
		Type98 *t1203;
		Expression21 *e2204;
		Type98 *t2205;
		OperationDefinition93 *op206;
		Expression21 *t211;
		t1203 = ze1->type;
		e2204 = BuilderContext_evaluateArgument792(zself, zsrc, t1203);
		if((char)(e2204 == ((Expression21 *)0)))
		{
			Expression21 *t207;
			t207 = ((Expression21 *)0);
			return t207;
		}
		t2205 = e2204->type;
		if((!BuilderContext_defineType745(zself, t1203)))
		{
			Expression21 *t208;
			t208 = ((Expression21 *)0);
			return t208;
		}
		if((!BuilderContext_defineType745(zself, t2205)))
		{
			Expression21 *t209;
			t209 = ((Expression21 *)0);
			return t209;
		}
		if((!(Type_match530(t1203, t2205) || Type_match530(t2205, t1203))))
		{
			Expression21 *t210;
			BuilderContext_reportSourceError1400(zself, ((Location45 *)zsrc), S2015, t1203, t2205);
			t210 = ((Expression21 *)0);
			return t210;
		}
		op206 = Definition_asOperation694(zdefinition);
		t211 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), op206->ecode, ((Type98 *)BuilderContext_program835(zself)->booleanType), ze1, e2204));
		return t211;
	}
	break;
	case 39:
	{
		PointerType101 *pointerType212;
		Type98 *type213;
		Expression21 *t216;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t214;
			t214 = ((Expression21 *)0);
			return t214;
		}
		pointerType212 = Type_asPointer533(ze1->type);
		type213 = pointerType212->target;
		if((!Type_isSimple553(type213)))
		{
			Expression21 *t215;
			BuilderContext_reportSourceError1295(zself, ((Location45 *)zsrc), S2006, type213);
			t215 = ((Expression21 *)0);
			return t215;
		}
		t216 = ((Expression21 *)Program_getUnary397(BuilderContext_program835(zself), 68, type213, ze1));
		return t216;
	}
	break;
	case 40:
	{
		PointerType101 *pointerType217;
		Type98 *targetType218;
		FunctionType103 *functionType219;
		TypeSequence108 *types220;
		ExpressionList61 *arguments221;
		TypeSequence108 *returnTypes222;
		Expression21 *t226;
		if((char)(zsrc->block != ((ASTBlockClosure154 *)0)))
		{
			Expression21 *t223;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
			t223 = ((Expression21 *)0);
			return t223;
		}
		pointerType217 = Type_asPointer533(ze1->type);
		targetType218 = pointerType217->target;
		if((!Type_isFunction555(targetType218)))
		{
			Expression21 *t224;
			BuilderContext_reportSourceError1408(zself, ((Location45 *)zsrc), S1998, pointerType217);
			t224 = ((Expression21 *)0);
			return t224;
		}
		functionType219 = Type_asFunction537(targetType218);
		types220 = functionType219->types;
		arguments221 = BuilderContext_evaluateTypedArguments758(zself, ((Location45 *)zsrc), zsrc->arguments, types220, ((Expression21 *)0));
		if((char)(arguments221 == ((ExpressionList61 *)0)))
		{
			Expression21 *t225;
			t225 = ((Expression21 *)0);
			return t225;
		}
		returnTypes222 = functionType219->returnTypes;
		t226 = ((Expression21 *)Program_getPointerCall399(BuilderContext_program835(zself), ze1, arguments221, returnTypes222));
		return t226;
	}
	break;
	case 41:
	{
		Program5 *program227;
		Expression21 *t229;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t228;
			t228 = ((Expression21 *)0);
			return t228;
		}
		program227 = BuilderContext_program835(zself);
		t229 = ((Expression21 *)Program_getBinary398(program227, 41, ((Type98 *)program227->booleanType), ze1, ((Expression21 *)Program_getNil395(program227))));
		return t229;
	}
	break;
	case 42:
	{
		Program5 *program230;
		Expression21 *t232;
		if((!BuilderContext_checkNoArgument798(zself, zsrc)))
		{
			Expression21 *t231;
			t231 = ((Expression21 *)0);
			return t231;
		}
		program230 = BuilderContext_program835(zself);
		t232 = ((Expression21 *)Program_getBinary398(program230, 42, ((Type98 *)program230->booleanType), ze1, ((Expression21 *)Program_getNil395(program230))));
		return t232;
	}
	break;
	case 43:
	{
		PointerType101 *pointerType233;
		ArrayType102 *arrayType234;
		Type98 *cellType235;
		Type98 *type236;
		Program5 *program237;
		Expression21 *index238;
		Expression21 *t242;
		pointerType233 = Type_asPointer533(ze1->type);
		arrayType234 = Type_asArray534(pointerType233->target);
		cellType235 = arrayType234->cellType;
		type236 = Type_effective525(cellType235);
		program237 = BuilderContext_program835(zself);
		if(Collection_isEmpty889(zsrc->arguments))
		{
			if((char)(zsrc->block != ((ASTBlockClosure154 *)0)))
			{
				Expression21 *t239;
				BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
				t239 = ((Expression21 *)0);
				return t239;
			}
			index238 = ((Expression21 *)Program_getInteger391(program237, 0UL, ((Type98 *)program237->sizeType)));
		}
		else
		{
			index238 = BuilderContext_evaluateArgument792(zself, zsrc, ((Type98 *)program237->sizeType));
			if((char)(index238 == ((Expression21 *)0)))
			{
				Expression21 *t240;
				t240 = ((Expression21 *)0);
				return t240;
			}
			if((!BuilderContext_checkInteger848(zself, ((Location45 *)zsrc), index238->type)))
			{
				Expression21 *t241;
				t241 = ((Expression21 *)0);
				return t241;
			}
		}
		t242 = ((Expression21 *)Program_getBinary398(program237, 69, type236, ze1, index238));
		return t242;
	}
	break;
	case 44:
	{
		Expression21 *index243;
		Expression21 *t246;
		index243 = BuilderContext_evaluateArgument792(zself, zsrc, ((Type98 *)BuilderContext_program835(zself)->sizeType));
		if((char)(index243 == ((Expression21 *)0)))
		{
			Expression21 *t244;
			t244 = ((Expression21 *)0);
			return t244;
		}
		if((!BuilderContext_checkInteger848(zself, ((Location45 *)zsrc), index243->type)))
		{
			Expression21 *t245;
			t245 = ((Expression21 *)0);
			return t245;
		}
		t246 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), 70, ze1->type, ze1, index243));
		return t246;
	}
	break;
	case 45:
	{
		Expression21 *index247;
		Expression21 *t250;
		index247 = BuilderContext_evaluateArgument792(zself, zsrc, ((Type98 *)BuilderContext_program835(zself)->sizeType));
		if((char)(index247 == ((Expression21 *)0)))
		{
			Expression21 *t248;
			t248 = ((Expression21 *)0);
			return t248;
		}
		if((!BuilderContext_checkInteger848(zself, ((Location45 *)zsrc), index247->type)))
		{
			Expression21 *t249;
			t249 = ((Expression21 *)0);
			return t249;
		}
		t250 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), 71, ze1->type, ze1, index247));
		return t250;
	}
	break;
	case 46:
	{
		Expression21 *index251;
		Type98 *indexType252;
		Expression21 *t255;
		index251 = BuilderContext_evaluateArgument792(zself, zsrc, ((Type98 *)0));
		if((char)(index251 == ((Expression21 *)0)))
		{
			Expression21 *t253;
			t253 = ((Expression21 *)0);
			return t253;
		}
		indexType252 = index251->type;
		if((char)(indexType252 != ze1->type))
		{
			Expression21 *t254;
			BuilderContext_reportSourceError1400(zself, ((Location45 *)zsrc), S2002, indexType252, ze1->type);
			t254 = ((Expression21 *)0);
			return t254;
		}
		t255 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), 72, ((Type98 *)BuilderContext_program835(zself)->sizeType), ze1, index251));
		return t255;
	}
	break;
	case 47:
	{
		Expression21 *index256;
		OperationDefinition93 *op257;
		Expression21 *t261;
		index256 = BuilderContext_evaluateArgument792(zself, zsrc, ((Type98 *)BuilderContext_program835(zself)->sizeType));
		if((char)(index256 == ((Expression21 *)0)))
		{
			Expression21 *t258;
			t258 = ((Expression21 *)0);
			return t258;
		}
		if((!BuilderContext_checkInteger848(zself, ((Location45 *)zsrc), index256->type)))
		{
			Expression21 *t259;
			t259 = ((Expression21 *)0);
			return t259;
		}
		if((!BuilderContext_checkLvalue843(zself, ((Location45 *)zsrc), ze1)))
		{
			Expression21 *t260;
			t260 = ((Expression21 *)0);
			return t260;
		}
		op257 = Definition_asOperation694(zdefinition);
		t261 = ((Expression21 *)Program_getBinary398(BuilderContext_program835(zself), op257->ecode, ((Type98 *)BuilderContext_program835(zself)->voidType), ze1, index256));
		return t261;
	}
	break;
	default:
	{
		Expression21 *t262;
		_assertFailure1193(S1762);
		t262 = ((Expression21 *)0);
		return t262;
	}
	}
}

static Type98 *BuilderContext_evaluateCastArgument790(BuilderContext177 *zself, ASTFreeCall141 *zsrc)
{
	Expression21 *e1;
	Type98 *type2;
	Type98 *t7;
	e1 = BuilderContext_evaluateArgument792(zself, zsrc, ((Type98 *)0));
	if((char)(e1 == ((Expression21 *)0)))
	{
		Type98 *t3;
		t3 = ((Type98 *)0);
		return t3;
	}
	if((!Expression_isType505(e1)))
	{
		Type98 *t4;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2027);
		t4 = ((Type98 *)0);
		return t4;
	}
	type2 = Expression_asType484(e1)->type;
	if((!Type_isSimple553(type2)))
	{
		Type98 *t5;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsrc), S2006, type2);
		t5 = ((Type98 *)0);
		return t5;
	}
	if((!BuilderContext_defineType745(zself, type2)))
	{
		Type98 *t6;
		t6 = ((Type98 *)0);
		return t6;
	}
	t7 = type2;
	return t7;
}

static Expression21 *BuilderContext_evaluateCompatibleArgument791(BuilderContext177 *zself, ASTFreeCall141 *zsource, Type98 *ztype)
{
	Expression21 *e1;
	Expression21 *t4;
	e1 = BuilderContext_evaluateArgument792(zself, zsource, ztype);
	if((char)(e1 == ((Expression21 *)0)))
	{
		Expression21 *t2;
		t2 = ((Expression21 *)0);
		return t2;
	}
	if((!BuilderContext_checkCompatible842(zself, ((Location45 *)zsource), 1, e1, ztype)))
	{
		Expression21 *t3;
		t3 = ((Expression21 *)0);
		return t3;
	}
	t4 = e1;
	return t4;
}

static Expression21 *BuilderContext_evaluateArgument792(BuilderContext177 *zself, ASTFreeCall141 *zsource, Type98 *ztype)
{
	ExpressionList61 arguments1;
	int got2;
	int expected3;
	Expression21 *t9;
	if((char)(zsource->block != ((ASTBlockClosure154 *)0)))
	{
		Expression21 *t4;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S2000);
		t4 = ((Expression21 *)0);
		return t4;
	}
	Collection_initialize900(((Collection63 *)(&arguments1)));
	{
		Collection203 *self5;
		ASTExpression140 *e6;
		self5 = zsource->arguments;
		e6 = self5->firstElement;
		while((char)(e6 != ((ASTExpression140 *)0)))
		{
			{
				if((char)(BuilderContext_evaluateAndExpandExpression759(zself, e6, ztype, (&arguments1)) == -1))
				{
					Expression21 *t7;
					t7 = ((Expression21 *)0);
					return t7;
				}
			}
			e6 = e6->nextSibling;
		}
	}
	got2 = ((Collection63 *)(&arguments1))->size;
	expected3 = 1;
	if((char)(got2 != expected3))
	{
		Expression21 *t8;
		BuilderContext_reportSourceError1302(zself, ((Location45 *)zsource), S2019, expected3, got2);
		t8 = ((Expression21 *)0);
		return t8;
	}
	t9 = ExpressionList_first905((&arguments1));
	return t9;
}

static CompositeExpression75 *BuilderContext_evaluateCall793(BuilderContext177 *zself, ASTFreeCall141 *zsrc, Function33 *zf, ExpressionList61 *zarguments)
{
	int i1;
	Program5 *program2;
	ASTBlockClosure154 *sourceBlock3;
	i1 = 0;
	{
		Collection34 *iterable24;
		Parameter35 *e25;
		iterable24 = (&zf->parameters);
		e25 = iterable24->firstElement;
		{
			CollectionPool62 *self6;
			self6 = ((CollectionPool62 *)zarguments);
			{
				Collection63 *self7;
				CollectionPoolElement205 *e8;
				self7 = ((Collection63 *)self6);
				e8 = self7->firstElement;
				while((char)(e8 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *v19;
							Parameter35 *v210;
							v19 = e8->object;
							v210 = Collection_elementValue1331(iterable24, e25);
							{
								if((!BuilderContext_checkCompatible842(zself, ((Location45 *)zsrc), i1, v19, v210->type)))
								{
									CompositeExpression75 *t11;
									t11 = ((CompositeExpression75 *)0);
									return t11;
								}
								(++i1);
							}
							e25 = Collection_nextElement1332(iterable24, e25);
						}
					}
					e8 = e8->nextSibling;
				}
			}
		}
	}
	program2 = BuilderContext_program835(zself);
	sourceBlock3 = zsrc->block;
	if((!zf->isMacro))
	{
		CompositeExpression75 *t13;
		if((char)(sourceBlock3 != ((ASTBlockClosure154 *)0)))
		{
			CompositeExpression75 *t12;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
			t12 = ((CompositeExpression75 *)0);
			return t12;
		}
		t13 = ((CompositeExpression75 *)Program_getFunctionCall403(program2, zf, zarguments));
		return t13;
	}
	else
	{
		CompositeExpression75 *t15;
		if((char)(sourceBlock3 == ((ASTBlockClosure154 *)0)))
		{
			CompositeExpression75 *t14;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2001);
			t14 = ((CompositeExpression75 *)0);
			return t14;
		}
		t15 = ((CompositeExpression75 *)BuilderContext_evaluateMacroCall794(zself, zsrc, zf, zarguments, sourceBlock3));
		return t15;
	}
}

static MacroCallExpression85 *BuilderContext_evaluateMacroCall794(BuilderContext177 *zself, ASTFreeCall141 *zsrc, Function33 *zf, ExpressionList61 *zarguments, ASTBlockClosure154 *zsourceBlock)
{
	MacroBlock86 *block1;
	MacroContext178 inline2;
	BuilderContext177 cx3;
	CompositeExpression75 **p4;
	MacroCallExpression85 *t14;
	if(BuilderContext_hasMacro837(zself, zf))
	{
		MacroCallExpression85 *t5;
		BuilderContext_reportDefinitionError855(zself, ((Definition32 *)zf), S1983, ((Definition32 *)zf)->name);
		t5 = ((MacroCallExpression85 *)0);
		return t5;
	}
	_assert876((char)(((Prototype31 *)zf)->state == ((unsigned char)1U)), S1774);
	block1 = Program_getMacroBlock405(BuilderContext_program835(zself));
	(&inline2)->location = ((Location45 *)zsrc);
	(&inline2)->macro = zf;
	(&inline2)->block = block1;
	(&inline2)->sourceBlock = zsourceBlock;
	BuilderContext_initialize731((&cx3), zself, zself->builder, ((Definition32 *)zf)->scope, Builder_getLocalPool623(zself->builder), (&inline2));
	(&cx3)->fixedReturnTypes = ((Prototype31 *)zf)->returnTypes;
	{
		BuilderContext177 *self6;
		Block38 *block7;
		self6 = (&cx3);
		block7 = ((Block38 *)block1);
		{
			BuilderContext177 *self8;
			Scope8 scope9;
			self8 = self6;
			Scope_initialize442((&scope9), self8->scope, self8->scope->module, self8->pool, 64);
			self8->scope = (&scope9);
			{
				Block38 *saveBlock10;
				saveBlock10 = self6->block;
				self6->block = block7;
				{
					if((!BuilderContext_defineInlineParameters795((&cx3), zf, zarguments)))
					{
						MacroCallExpression85 *t11;
						t11 = ((MacroCallExpression85 *)0);
						{
							self6->block = saveBlock10;
						}
						{
							self8->scope = (&scope9)->parent;
						}
						{
							Builder_releaseLocalPool624(zself->builder);
						}
						return t11;
					}
					if((!BuilderContext_evaluateInstructions804((&cx3), zf->source->body)))
					{
						MacroCallExpression85 *t12;
						t12 = ((MacroCallExpression85 *)0);
						{
							self6->block = saveBlock10;
						}
						{
							self8->scope = (&scope9)->parent;
						}
						{
							Builder_releaseLocalPool624(zself->builder);
						}
						return t12;
					}
					if(((!((Block38 *)block1)->terminated) || (char)((&cx3)->returnTypes == ((TypeSequence108 *)0))))
					{
						if((!BuilderContext_merge832((&cx3), (&S1677))))
						{
							MacroCallExpression85 *t13;
							BuilderContext_reportSourceError920(zself, ((Location45 *)zf->source), S2032, (&cx3)->returnTypes);
							t13 = ((MacroCallExpression85 *)0);
							{
								self6->block = saveBlock10;
							}
							{
								self8->scope = (&scope9)->parent;
							}
							{
								Builder_releaseLocalPool624(zself->builder);
							}
							return t13;
						}
					}
				}
				{
					self6->block = saveBlock10;
				}
			}
			{
				self8->scope = (&scope9)->parent;
			}
		}
	}
	p4 = ((CompositeExpression75 **)(((unsigned char *)zself) + ((size_t)0x0000000000000030U)));
	while((char)((*p4) != ((CompositeExpression75 *)0)))
	{
		p4 = ((CompositeExpression75 **)(((unsigned char *)(*p4)) + ((size_t)0x000000000000000CU)));
	}
	(*p4) = (&cx3)->composites;
	t14 = Program_getMacroCall404(BuilderContext_program835(zself), (&cx3)->returnTypes, block1);
	{
		Builder_releaseLocalPool624(zself->builder);
	}
	return t14;
}

static char BuilderContext_defineInlineParameters795(BuilderContext177 *zself, Function33 *zmacro, ExpressionList61 *zarguments)
{
	CollectionPoolElement205 *a1;
	char ok2;
	char t10;
	a1 = ((Collection63 *)zarguments)->firstElement;
	ok2 = 1;
	{
		{
			Collection34 *self3;
			Parameter35 *e4;
			self3 = (&zmacro->parameters);
			e4 = self3->firstElement;
			while((char)(e4 != ((Parameter35 *)0)))
			{
				{
					if((char)(((Definition32 *)e4)->name != ((void *)0)))
					{
						{
							Expression21 *e5;
							Definition32 *d6;
							e5 = a1->object;
							if(((char)(e5->type == e4->type) && ((Expression_isConstant501(e5) || Expression_isParameter504(e5)) || Expression_isType505(e5))))
							{
								d6 = ((Definition32 *)Program_getLocalAlias419(BuilderContext_program835(zself), BuilderContext_module836(zself), ((Definition32 *)e4)->line, ((Definition32 *)e4)->name, e5));
							}
							else
							{
								d6 = ((Definition32 *)BuilderContext_createVariable829(zself, ((Definition32 *)e4)->line, ((Definition32 *)e4)->name, e4->type, e5));
							}
							(ok2 &= BuilderContext_addLocalDefinition838(zself, d6));
							a1 = a1->nextSibling;
						}
					}
				}
				e4 = e4->nextSibling;
			}
		}
	}
	if(zmacro->isVariadic)
	{
		MemoryPool160 *pool7;
		pool7 = zself->pool;
		zself->extra = MemoryPool_new898(pool7);
		while((char)(a1 != ((CollectionPoolElement205 *)0)))
		{
			Expression21 *e8;
			Variable41 *variable9;
			e8 = a1->object;
			variable9 = BuilderContext_createVariable829(zself, ((Location45 *)zmacro->source)->line, ((void *)0), e8->type, e8);
			CollectionPool_add903(((CollectionPool62 *)zself->extra), pool7, variable9->expression);
			a1 = a1->nextSibling;
		}
	}
	t10 = ok2;
	return t10;
}

static char BuilderContext_fillStructure796(BuilderContext177 *zself, Location45 *zlocation, ExpressionList61 *zarguments, StructureType104 *zstructure, Type98 *zcontext)
{
	char ok1;
	char t8;
	ok1 = 1;
	if((char)(zstructure->parentStructure != ((StructureType104 *)0)))
	{
		(ok1 &= BuilderContext_fillStructure796(zself, zlocation, zarguments, zstructure->parentStructure, zcontext));
	}
	{
		{
			Collection105 *self2;
			Attribute107 *e3;
			self2 = (&zstructure->attributes);
			e3 = self2->firstElement;
			while((char)(e3 != ((Attribute107 *)0)))
			{
				{
					{
						void *name4;
						Definition32 *d5;
						Expression21 *e6;
						name4 = ((Definition32 *)e3)->name;
						d5 = BuilderContext_getContextualDefinition825(zself, zlocation, name4, zcontext);
						if((char)(d5 == ((Definition32 *)0)))
						{
							ok1 = 0;
							goto L7;
						}
						e6 = BuilderContext_evaluateDefinitionForInitializer797(zself, zlocation, d5);
						if((char)(e6 == ((Expression21 *)0)))
						{
							ok1 = 0;
							goto L7;
						}
						if((!Type_match530(e6->type, e3->type)))
						{
							BuilderContext_reportSourceError1460(zself, zlocation, S2008, name4, e6->type, e3->type);
							ok1 = 0;
							goto L7;
						}
						CollectionPool_add903(((CollectionPool62 *)zarguments), BuilderContext_program835(zself)->pool, e6);
					}
					L7: ;
				}
				e3 = e3->nextSibling;
			}
		}
	}
	t8 = ok1;
	return t8;
}

static Expression21 *BuilderContext_evaluateDefinitionForInitializer797(BuilderContext177 *zself, Location45 *zlocation, Definition32 *zdefinition)
{
	switch( zdefinition->code )
	{
	case 2:
	{
		Alias89 *a1;
		Expression21 *t3;
		a1 = Definition_asAlias686(zdefinition);
		if((!BuilderContext_defineAlias738(zself, a1)))
		{
			Expression21 *t2;
			t2 = ((Expression21 *)0);
			return t2;
		}
		t3 = a1->expression;
		return t3;
	}
	break;
	case 4:
	{
		Function33 *f4;
		TypeSequence108 *types5;
		Expression21 *t8;
		f4 = Definition_asFunction683(zdefinition);
		if(f4->isMacro)
		{
			Expression21 *t6;
			BuilderContext_reportSourceError1338(zself, zlocation, S1974, f4);
			t6 = ((Expression21 *)0);
			return t6;
		}
		if((!BuilderContext_defineFunctionType739(zself, f4)))
		{
			Expression21 *t7;
			t7 = ((Expression21 *)0);
			return t7;
		}
		types5 = _fromParameters600(BuilderContext_program835(zself)->pool, (&f4->parameters));
		t8 = ((Expression21 *)Program_getFunctionReference388(BuilderContext_program835(zself), ((Prototype31 *)f4), types5));
		return t8;
	}
	break;
	case 11:
	{
		ExternFunction36 *f9;
		Expression21 *t11;
		f9 = Definition_asExternFunction685(zdefinition);
		if((!BuilderContext_defineExternFunction743(zself, f9)))
		{
			Expression21 *t10;
			t10 = ((Expression21 *)0);
			return t10;
		}
		t11 = ((Expression21 *)Program_getFunctionReference388(BuilderContext_program835(zself), ((Prototype31 *)f9), f9->parameterTypes));
		return t11;
	}
	break;
	default:
	{
		Expression21 *t12;
		BuilderContext_reportSourceError1357(zself, zlocation, S1973, zdefinition->name);
		t12 = ((Expression21 *)0);
		return t12;
	}
	}
}

static char BuilderContext_checkNoArgument798(BuilderContext177 *zself, ASTFreeCall141 *zsrc)
{
	char t3;
	if(Collection_notEmpty1380(zsrc->arguments))
	{
		char t1;
		BuilderContext_reportSourceError1357(zself, ((Location45 *)zsrc), S2017, zsrc->name);
		t1 = 0;
		return t1;
	}
	if((char)(zsrc->block != ((ASTBlockClosure154 *)0)))
	{
		char t2;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsrc), S2000);
		t2 = 0;
		return t2;
	}
	t3 = 1;
	return t3;
}

static TypeSequence108 *BuilderContext_evaluateSimpleTypes799(BuilderContext177 *zself, Collection203 *zsource)
{
	MemoryPool160 *pool1;
	TypeSequence108 *types2;
	int i3;
	TypeSequence108 *t7;
	pool1 = BuilderContext_program835(zself)->pool;
	types2 = _new598(pool1, zsource->size);
	i3 = 0;
	{
		ASTExpression140 *e4;
		e4 = zsource->firstElement;
		while((char)(e4 != ((ASTExpression140 *)0)))
		{
			{
				Type98 *type5;
				type5 = BuilderContext_evaluateSimpleType801(zself, e4);
				if((char)(type5 == ((Type98 *)0)))
				{
					TypeSequence108 *t6;
					t6 = ((TypeSequence108 *)0);
					return t6;
				}
				TypeSequence_set602(types2, i3, type5);
				(++i3);
			}
			e4 = e4->nextSibling;
		}
	}
	t7 = types2;
	return t7;
}

static TypeSequence108 *BuilderContext_evaluateSimpleTypesWithContext800(BuilderContext177 *zself, Collection203 *zsource, Type98 *zcontext)
{
	int n1;
	MemoryPool160 *pool2;
	TypeSequence108 *types3;
	int i4;
	TypeSequence108 *t8;
	n1 = zsource->size;
	if((char)(zcontext != ((Type98 *)0)))
	{
		(++n1);
	}
	pool2 = BuilderContext_program835(zself)->pool;
	types3 = _new598(pool2, n1);
	i4 = 0;
	if((char)(zcontext != ((Type98 *)0)))
	{
		TypeSequence_set602(types3, i4, zcontext);
		(++i4);
	}
	{
		ASTExpression140 *e5;
		e5 = zsource->firstElement;
		while((char)(e5 != ((ASTExpression140 *)0)))
		{
			{
				Type98 *type6;
				type6 = BuilderContext_evaluateSimpleType801(zself, e5);
				if((char)(type6 == ((Type98 *)0)))
				{
					TypeSequence108 *t7;
					t7 = ((TypeSequence108 *)0);
					return t7;
				}
				TypeSequence_set602(types3, i4, type6);
				(++i4);
			}
			e5 = e5->nextSibling;
		}
	}
	t8 = types3;
	return t8;
}

static Type98 *BuilderContext_evaluateSimpleType801(BuilderContext177 *zself, ASTExpression140 *zsource)
{
	Type98 *type1;
	Type98 *t4;
	type1 = BuilderContext_evaluateType802(zself, zsource);
	if((char)(type1 == ((Type98 *)0)))
	{
		Type98 *t2;
		t2 = ((Type98 *)0);
		return t2;
	}
	if((!Type_isSimple553(type1)))
	{
		Type98 *t3;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S2006, type1);
		t3 = ((Type98 *)0);
		return t3;
	}
	t4 = type1;
	return t4;
}

static Type98 *BuilderContext_evaluateType802(BuilderContext177 *zself, ASTExpression140 *zsource)
{
	Expression21 *e1;
	Type98 *t4;
	e1 = BuilderContext_evaluateExpression761(zself, zsource, ((Type98 *)0));
	if((char)(e1 == ((Expression21 *)0)))
	{
		Type98 *t2;
		t2 = ((Type98 *)0);
		return t2;
	}
	if((!Expression_isType505(e1)))
	{
		Type98 *t3;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S2027);
		t3 = ((Type98 *)0);
		return t3;
	}
	t4 = Expression_asType484(e1)->type;
	return t4;
}

static Block38 *BuilderContext_evaluateBlock803(BuilderContext177 *zself, Collection204 *zsource)
{
	Program5 *program1;
	Block38 *block2;
	char ok3;
	Block38 *t8;
	program1 = BuilderContext_program835(zself);
	block2 = Program_getBlock412(program1);
	ok3 = 1;
	{
		Block38 *block4;
		block4 = block2;
		{
			Scope8 scope5;
			Scope_initialize442((&scope5), zself->scope, zself->scope->module, zself->pool, 64);
			zself->scope = (&scope5);
			{
				Block38 *saveBlock6;
				saveBlock6 = zself->block;
				zself->block = block4;
				{
					ok3 = BuilderContext_evaluateInstructions804(zself, zsource);
				}
				{
					zself->block = saveBlock6;
				}
			}
			{
				zself->scope = (&scope5)->parent;
			}
		}
	}
	if((!ok3))
	{
		Block38 *t7;
		t7 = ((Block38 *)0);
		return t7;
	}
	t8 = block2;
	return t8;
}

static char BuilderContext_evaluateInstructions804(BuilderContext177 *zself, Collection204 *zsource)
{
	char t4;
	{
		ASTInstruction123 *e1;
		e1 = zsource->firstElement;
		while((char)(e1 != ((ASTInstruction123 *)0)))
		{
			{
				if(BuilderContext_terminated833(zself))
				{
					char t2;
					BuilderContext_reportSourceError1294(zself, ((Location45 *)e1), S2035);
					t2 = 0;
					return t2;
				}
				if((!BuilderContext_evaluateInstruction805(zself, e1)))
				{
					char t3;
					t3 = 0;
					return t3;
				}
			}
			e1 = e1->nextSibling;
		}
	}
	t4 = 1;
	return t4;
}

static char BuilderContext_evaluateInstruction805(BuilderContext177 *zself, ASTInstruction123 *zsource)
{
	switch( zsource->code )
	{
	case 0:
	{
		char t1;
		t1 = BuilderContext_evaluateEvaluate806(zself, ((ASTEvaluate124 *)zsource));
		return t1;
	}
	break;
	case 1:
	{
		char t2;
		t2 = BuilderContext_evaluateAssign807(zself, ((ASTAssign125 *)zsource));
		return t2;
	}
	break;
	case 2:
	{
		char t3;
		t3 = BuilderContext_evaluateLocalVariables808(zself, ((ASTLocalVariables126 *)zsource));
		return t3;
	}
	break;
	case 3:
	{
		char t4;
		t4 = BuilderContext_evaluateLocalVariable809(zself, ((ASTLocalVariable127 *)zsource));
		return t4;
	}
	break;
	case 4:
	{
		char t5;
		t5 = BuilderContext_evaluateLocalAlias812(zself, ((ASTLocalAlias128 *)zsource));
		return t5;
	}
	break;
	case 5:
	{
		char t6;
		t6 = BuilderContext_evaluateReturn813(zself, ((ASTReturn129 *)zsource));
		return t6;
	}
	break;
	case 8:
	{
		char t7;
		t7 = BuilderContext_evaluateIf814(zself, ((ASTIf134 *)zsource));
		return t7;
	}
	break;
	case 6:
	{
		char t8;
		t8 = BuilderContext_evaluateWhile815(zself, ((ASTWhile131 *)zsource));
		return t8;
	}
	break;
	case 9:
	{
		char t9;
		t9 = BuilderContext_evaluateBreak816(zself, ((ASTBreak130 *)zsource));
		return t9;
	}
	break;
	case 10:
	{
		char t10;
		t10 = BuilderContext_evaluateContinue817(zself, ((ASTBreak130 *)zsource));
		return t10;
	}
	break;
	case 7:
	{
		char t11;
		t11 = BuilderContext_evaluateSwitch818(zself, ((ASTSwitch132 *)zsource));
		return t11;
	}
	break;
	case 11:
	{
		char t12;
		t12 = BuilderContext_evaluateBegin819(zself, ((ASTBegin138 *)zsource));
		return t12;
	}
	break;
	case 12:
	{
		char t13;
		t13 = BuilderContext_evaluateDefer820(zself, ((ASTDefer139 *)zsource));
		return t13;
	}
	break;
	default:
	{
		char t14;
		_assertFailure1193(S1761);
		t14 = 0;
		return t14;
	}
	}
}

static char BuilderContext_evaluateEvaluate806(BuilderContext177 *zself, ASTEvaluate124 *zsource)
{
	ExpressionList61 *list1;
	char t7;
	list1 = Program_getExpressionList413(BuilderContext_program835(zself));
	{
		Collection203 *self2;
		ASTExpression140 *e3;
		self2 = zsource->values;
		e3 = self2->firstElement;
		while((char)(e3 != ((ASTExpression140 *)0)))
		{
			{
				Expression21 *e4;
				e4 = BuilderContext_evaluateExpression761(zself, e3, ((Type98 *)0));
				if((char)(e4 == ((Expression21 *)0)))
				{
					char t5;
					t5 = 0;
					return t5;
				}
				BuilderContext_expandExpression831(zself, list1, e4);
			}
			e3 = e3->nextSibling;
		}
	}
	if((!BuilderContext_checkMustCheck845(zself, ((Location45 *)zsource), list1)))
	{
		char t6;
		t6 = 0;
		return t6;
	}
	Block_createInstruction1299(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line, list1);
	t7 = 1;
	return t7;
}

static char BuilderContext_evaluateAssign807(BuilderContext177 *zself, ASTAssign125 *zsource)
{
	ExpressionList61 *lvalues1;
	ExpressionList61 *rvalues2;
	CollectionPoolElement205 *d3;
	int leftNumber4;
	int rightNumber5;
	int pos6;
	CollectionPoolElement205 *riter7;
	char t21;
	lvalues1 = BuilderContext_evaluateExpressions756(zself, zsource->leftValues);
	if((char)(lvalues1 == ((ExpressionList61 *)0)))
	{
		char t8;
		t8 = 0;
		return t8;
	}
	rvalues2 = Program_getExpressionList413(BuilderContext_program835(zself));
	d3 = ((Collection63 *)lvalues1)->firstElement;
	{
		Collection203 *self9;
		ASTExpression140 *e10;
		self9 = zsource->rightValues;
		e10 = self9->firstElement;
		while((char)(e10 != ((ASTExpression140 *)0)))
		{
			{
				Type98 *t11;
				int n12;
				t11 = ((char)(d3 != ((CollectionPoolElement205 *)0))?d3->object->type:((Type98 *)0));
				n12 = BuilderContext_evaluateAndExpandExpression759(zself, e10, t11, rvalues2);
				if((char)(n12 == -1))
				{
					char t13;
					t13 = 0;
					return t13;
				}
				d3 = CollectionPoolElement_skip913(d3, n12);
			}
			e10 = e10->nextSibling;
		}
	}
	leftNumber4 = ((Collection63 *)lvalues1)->size;
	rightNumber5 = ((Collection63 *)rvalues2)->size;
	if((char)(leftNumber4 != rightNumber5))
	{
		char t14;
		BuilderContext_reportSourceError1302(zself, ((Location45 *)zsource), S2021, rightNumber5, leftNumber4);
		t14 = 0;
		return t14;
	}
	pos6 = 0;
	riter7 = ((Collection63 *)rvalues2)->firstElement;
	{
		CollectionPool62 *self15;
		self15 = ((CollectionPool62 *)lvalues1);
		{
			Collection63 *self16;
			CollectionPoolElement205 *e17;
			self16 = ((Collection63 *)self15);
			e17 = self16->firstElement;
			while((char)(e17 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *lvalue18;
						lvalue18 = e17->object;
						if((!BuilderContext_checkLvalue843(zself, ((Location45 *)zsource), lvalue18)))
						{
							char t19;
							t19 = 0;
							return t19;
						}
						else
						{
							if((!BuilderContext_checkCompatible842(zself, ((Location45 *)zsource), pos6, riter7->object, lvalue18->type)))
							{
								char t20;
								t20 = 0;
								return t20;
							}
						}
						riter7 = riter7->nextSibling;
						(++pos6);
					}
				}
				e17 = e17->nextSibling;
			}
		}
	}
	Block_createInstruction1310(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line, lvalues1, rvalues2);
	t21 = 1;
	return t21;
}

static char BuilderContext_evaluateLocalVariables808(BuilderContext177 *zself, ASTLocalVariables126 *zsource)
{
	ExpressionList61 *rvalues1;
	int valueNumber2;
	int variableNumber3;
	char ok4;
	char t15;
	rvalues1 = BuilderContext_evaluateExpressions756(zself, zsource->expressions);
	if((char)(rvalues1 == ((ExpressionList61 *)0)))
	{
		char t5;
		t5 = 0;
		return t5;
	}
	valueNumber2 = ((Collection63 *)rvalues1)->size;
	variableNumber3 = zsource->variables->size;
	if((char)(valueNumber2 != variableNumber3))
	{
		char t6;
		BuilderContext_reportSourceError1302(zself, ((Location45 *)zsource), S2022, valueNumber2, variableNumber3);
		t6 = 0;
		return t6;
	}
	ok4 = 1;
	{
		Collection244 *iterable17;
		ExpressionList61 *iterable28;
		CollectionPoolElement205 *e29;
		iterable17 = zsource->variables;
		iterable28 = rvalues1;
		e29 = ((Collection63 *)iterable28)->firstElement;
		{
			Collection244 *self10;
			ASTId155 *e11;
			self10 = iterable17;
			e11 = self10->firstElement;
			while((char)(e11 != ((ASTId155 *)0)))
			{
				{
					Expression21 *v212;
					v212 = CollectionPool_elementValue1237(((CollectionPool62 *)iterable28), e29);
					{
						Variable41 *v13;
						if((!BuilderContext_checkNoType844(zself, ((Location45 *)zsource), v212)))
						{
							ok4 = 0;
							goto L14;
						}
						v13 = BuilderContext_createVariable829(zself, ((Location45 *)e11)->line, e11->name, v212->type, v212);
						(ok4 &= BuilderContext_addLocalDefinition838(zself, ((Definition32 *)v13)));
					}
					L14: ;
					e29 = Collection_nextElement1238(((Collection63 *)iterable28), e29);
				}
				e11 = e11->nextSibling;
			}
		}
	}
	t15 = ok4;
	return t15;
}

static char BuilderContext_evaluateLocalVariable809(BuilderContext177 *zself, ASTLocalVariable127 *zsource)
{
	Type98 *type1;
	Module7 *module2;
	Block38 *block3;
	Variable41 *v4;
	char t13;
	type1 = BuilderContext_evaluateType802(zself, zsource->type);
	if((char)(type1 == ((Type98 *)0)))
	{
		char t5;
		t5 = 0;
		return t5;
	}
	if((!BuilderContext_defineTypeSize753(zself, type1)))
	{
		char t6;
		t6 = 0;
		return t6;
	}
	module2 = BuilderContext_module836(zself);
	block3 = zself->block;
	v4 = Block_createVariable915(block3, module2, ((Location45 *)zsource)->line, zsource->variable, type1);
	if((!BuilderContext_addLocalDefinition838(zself, ((Definition32 *)v4))))
	{
		char t7;
		t7 = 0;
		return t7;
	}
	if((char)(zsource->call != ((ASTFreeCall141 *)0)))
	{
		Expression21 *e18;
		e18 = v4->expression;
		if((!BuilderContext_evaluateFinit810(zself, zsource->call, e18, block3)))
		{
			char t9;
			t9 = 0;
			return t9;
		}
		if(BuilderContext_hasRelease811(zself, e18->type))
		{
			ASTFreeCall141 dest10;
			DeferInstruction58 *i11;
			((Location45 *)(&dest10))->line = ((Location45 *)zsource->call)->line;
			(&dest10)->name = (&identifiers1661)->release;
			(&dest10)->arguments = (&S1674);
			(&dest10)->block = ((ASTBlockClosure154 *)0);
			i11 = Block_createInstruction1415(zself->block, BuilderContext_module836(zself), ((Location45 *)(&dest10))->line);
			if((!BuilderContext_evaluateFinit810(zself, (&dest10), e18, (&i11->block))))
			{
				char t12;
				t12 = 0;
				return t12;
			}
		}
	}
	t13 = 1;
	return t13;
}

static char BuilderContext_evaluateFinit810(BuilderContext177 *zself, ASTFreeCall141 *zcall, Expression21 *ze1, Block38 *zblock)
{
	Definition32 *definition1;
	Expression21 *e2;
	ExpressionList61 *list3;
	char t7;
	definition1 = BuilderContext_getContextualDefinition825(zself, ((Location45 *)zcall), zcall->name, ze1->type);
	if((char)(definition1 == ((Definition32 *)0)))
	{
		char t4;
		t4 = 0;
		return t4;
	}
	e2 = BuilderContext_evaluateDefinition789(zself, zcall, definition1, ze1);
	if((char)(e2 == ((Expression21 *)0)))
	{
		char t5;
		t5 = 0;
		return t5;
	}
	list3 = Program_getExpressionList413(BuilderContext_program835(zself));
	BuilderContext_expandExpression831(zself, list3, e2);
	if((!BuilderContext_checkMustCheck845(zself, ((Location45 *)zcall), list3)))
	{
		char t6;
		t6 = 0;
		return t6;
	}
	Block_createInstruction1299(zblock, BuilderContext_module836(zself), ((Location45 *)zcall)->line, list3);
	t7 = 1;
	return t7;
}

static char BuilderContext_hasRelease811(BuilderContext177 *zself, Type98 *zcontext)
{
	Type98 *type1;
	char t3;
	type1 = zcontext;
	while((char)(type1 != ((Type98 *)0)))
	{
		if((char)(Type_findDefinition545(type1, (&identifiers1661)->release) != ((DefinitionItem189 *)0)))
		{
			char t2;
			t2 = 1;
			return t2;
		}
		type1 = type1->parent;
	}
	t3 = 0;
	return t3;
}

static char BuilderContext_evaluateLocalAlias812(BuilderContext177 *zself, ASTLocalAlias128 *zsource)
{
	Expression21 *e1;
	LocalAlias43 *d2;
	char t5;
	e1 = BuilderContext_evaluateExpression761(zself, zsource->expression, ((Type98 *)0));
	if((char)(e1 == ((Expression21 *)0)))
	{
		char t3;
		t3 = 0;
		return t3;
	}
	if(((!Expression_isType505(e1)) && (!Expression_isConstant501(e1))))
	{
		char t4;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S2004);
		t4 = 0;
		return t4;
	}
	d2 = Program_getLocalAlias419(BuilderContext_program835(zself), BuilderContext_module836(zself), ((Location45 *)zsource)->line, zsource->name, e1);
	t5 = BuilderContext_addLocalDefinition838(zself, ((Definition32 *)d2));
	return t5;
}

static char BuilderContext_evaluateReturn813(BuilderContext177 *zself, ASTReturn129 *zsource)
{
	char t1;
	t1 = BuilderContext_evaluateReturnOrBreak821(zself, ((Location45 *)zsource), zsource->expressions, zself);
	return t1;
}

static char BuilderContext_evaluateIf814(BuilderContext177 *zself, ASTIf134 *zsource)
{
	char terminator1;
	char ok2;
	IfInstruction51 *i3;
	char t11;
	terminator1 = 1;
	ok2 = 1;
	i3 = Block_createInstruction1433(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line);
	{
		Collection135 *self4;
		ASTRule136 *e5;
		self4 = (&zsource->rules);
		e5 = self4->firstElement;
		while((char)(e5 != ((ASTRule136 *)0)))
		{
			{
				Expression21 *condition6;
				Block38 *block7;
				condition6 = BuilderContext_evaluateCondition760(zself, e5->condition);
				block7 = BuilderContext_evaluateBlock803(zself, e5->block);
				if(((char)(condition6 == ((Expression21 *)0)) || (char)(block7 == ((Block38 *)0))))
				{
					ok2 = 0;
					goto L8;
				}
				IfInstruction_addRule1162(i3, BuilderContext_module836(zself), ((Location45 *)e5)->line, condition6, block7);
				(terminator1 &= block7->terminated);
			}
			L8: ;
			e5 = e5->nextSibling;
		}
	}
	if((char)(zsource->elseBlock != ((Collection204 *)0)))
	{
		Block38 *block9;
		block9 = BuilderContext_evaluateBlock803(zself, zsource->elseBlock);
		if((char)(block9 == ((Block38 *)0)))
		{
			ok2 = 0;
		}
		else
		{
			i3->elseBlock = block9;
			(terminator1 &= block9->terminated);
		}
	}
	else
	{
		terminator1 = 0;
	}
	if((!ok2))
	{
		char t10;
		t10 = 0;
		return t10;
	}
	if(terminator1)
	{
		BuilderContext_terminate834(zself);
	}
	t11 = 1;
	return t11;
}

static char BuilderContext_evaluateWhile815(BuilderContext177 *zself, ASTWhile131 *zsource)
{
	WhileInstruction53 *i1;
	ASTExpression140 *s2;
	BreakContext179 bc3;
	char t9;
	i1 = Block_createInstruction1437(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line);
	s2 = zsource->condition;
	if((char)(s2 != ((ASTExpression140 *)0)))
	{
		Expression21 *c4;
		c4 = BuilderContext_evaluateCondition760(zself, s2);
		if((char)(c4 == ((Expression21 *)0)))
		{
			char t5;
			t5 = 0;
			return t5;
		}
		i1->condition = c4;
	}
	BreakContext_initializeWhile1440((&bc3), i1);
	{
		BreakContext179 *bc6;
		BreakContext179 *old7;
		bc6 = (&bc3);
		old7 = zself->breakContext;
		zself->breakContext = bc6;
		{
			i1->block = BuilderContext_evaluateBlock803(zself, zsource->block);
		}
		{
			zself->breakContext = old7;
		}
	}
	if((char)(i1->block == ((Block38 *)0)))
	{
		char t8;
		t8 = 0;
		return t8;
	}
	if(((char)(i1->condition == ((Expression21 *)0)) && (!i1->hasBreak)))
	{
		BuilderContext_terminate834(zself);
	}
	t9 = 1;
	return t9;
}

static char BuilderContext_evaluateBreak816(BuilderContext177 *zself, ASTBreak130 *zsource)
{
	BreakContext179 *bc1;
	WhileInstruction53 *i2;
	bc1 = zself->breakContext;
	if((char)(bc1 == ((BreakContext179 *)0)))
	{
		char t3;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S2013);
		t3 = 0;
		return t3;
	}
	i2 = bc1->instruction;
	if((char)(i2 != ((WhileInstruction53 *)0)))
	{
		char t5;
		if(Collection_notEmpty1380(zsource->arguments))
		{
			char t4;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1972);
			t4 = 0;
			return t4;
		}
		i2->hasBreak = 1;
		Block_createInstruction1442(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line, 8, i2);
		BuilderContext_terminate834(zself);
		t5 = 1;
		return t5;
	}
	else
	{
		char t6;
		t6 = BuilderContext_evaluateReturnOrBreak821(zself, ((Location45 *)zsource), zsource->arguments, bc1->context);
		return t6;
	}
}

static char BuilderContext_evaluateContinue817(BuilderContext177 *zself, ASTBreak130 *zsource)
{
	BreakContext179 *bc1;
	WhileInstruction53 *i2;
	bc1 = zself->breakContext;
	if((char)(bc1 == ((BreakContext179 *)0)))
	{
		char t3;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S2012);
		t3 = 0;
		return t3;
	}
	i2 = bc1->instruction;
	if((char)(i2 != ((WhileInstruction53 *)0)))
	{
		char t5;
		if(Collection_notEmpty1380(zsource->arguments))
		{
			char t4;
			BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1971);
			t4 = 0;
			return t4;
		}
		i2->hasContinue = 1;
		Block_createInstruction1442(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line, 9, i2);
		BuilderContext_terminate834(zself);
		t5 = 1;
		return t5;
	}
	else
	{
		ExpressionList61 *expressions6;
		char t15;
		expressions6 = BuilderContext_evaluateExpressions756(zself, zsource->arguments);
		if((char)(expressions6 == ((ExpressionList61 *)0)))
		{
			char t7;
			t7 = 0;
			return t7;
		}
		{
			CollectionPool62 *self8;
			self8 = ((CollectionPool62 *)expressions6);
			{
				Collection63 *self9;
				CollectionPoolElement205 *e10;
				self9 = ((Collection63 *)self8);
				e10 = self9->firstElement;
				while((char)(e10 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *e11;
							e11 = e10->object;
							if((!BuilderContext_checkNoType844(zself, ((Location45 *)zsource), e11)))
							{
								char t12;
								t12 = 0;
								return t12;
							}
							if((!BuilderContext_defineType745(zself, e11->type)))
							{
								char t13;
								t13 = 0;
								return t13;
							}
						}
					}
					e10 = e10->nextSibling;
				}
			}
		}
		if((char)(bc1->types == ((TypeSequence108 *)0)))
		{
			bc1->types = _fromExpressions599(BuilderContext_module836(zself)->program->pool, expressions6);
		}
		else
		{
			if((!TypeSequence_merge605(bc1->types, expressions6)))
			{
				char t14;
				BuilderContext_reportSourceError1419(zself, ((Location45 *)zsource), S2034, ExpressionList_asTypes906(expressions6), bc1->types);
				t14 = 0;
				return t14;
			}
		}
		Block_createInstruction1428(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line, bc1->block, expressions6);
		BuilderContext_terminate834(zself);
		t15 = 1;
		return t15;
	}
}

static char BuilderContext_evaluateSwitch818(BuilderContext177 *zself, ASTSwitch132 *zsource)
{
	Expression21 *expression1;
	char terminator2;
	char hasElseBlock3;
	char ok4;
	SwitchInstruction55 *i5;
	char t31;
	expression1 = BuilderContext_evaluateExpression761(zself, zsource->value, ((Type98 *)0));
	if((char)(expression1 == ((Expression21 *)0)))
	{
		char t6;
		t6 = 0;
		return t6;
	}
	if((!Type_isInteger551(expression1->type)))
	{
		char t7;
		BuilderContext_reportSourceError1294(zself, ((Location45 *)zsource), S1976);
		t7 = 0;
		return t7;
	}
	terminator2 = 1;
	hasElseBlock3 = 0;
	ok4 = 1;
	i5 = Block_createInstruction1447(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line, expression1);
	{
		Collection133 *self8;
		ASTChoice137 *e9;
		self8 = (&zsource->choices);
		e9 = self8->firstElement;
		while((char)(e9 != ((ASTChoice137 *)0)))
		{
			{
				ExpressionList61 *values10;
				Type98 *type11;
				Block38 *block12;
				int position13;
				values10 = Program_getExpressionList413(BuilderContext_program835(zself));
				type11 = expression1->type;
				{
					Collection203 *self14;
					ASTExpression140 *e15;
					self14 = e9->values;
					e15 = self14->firstElement;
					while((char)(e15 != ((ASTExpression140 *)0)))
					{
						{
							if((char)(BuilderContext_evaluateAndExpandExpression759(zself, e15, type11, values10) == -1))
							{
								ok4 = 0;
							}
						}
						e15 = e15->nextSibling;
					}
				}
				if(Collection_isEmpty902(((Collection63 *)values10)))
				{
					BuilderContext_reportSourceError1294(zself, ((Location45 *)e9), S1990);
					ok4 = 0;
					goto L16;
				}
				block12 = BuilderContext_evaluateBlock803(zself, e9->block);
				if((char)(block12 == ((Block38 *)0)))
				{
					ok4 = 0;
					goto L16;
				}
				SwitchInstruction_addChoice1185(i5, BuilderContext_program835(zself), ((Location45 *)e9)->line, values10, block12);
				(terminator2 &= block12->terminated);
				position13 = 0;
				{
					CollectionPool62 *self17;
					self17 = ((CollectionPool62 *)values10);
					{
						Collection63 *self18;
						CollectionPoolElement205 *e19;
						self18 = ((Collection63 *)self17);
						e19 = self18->firstElement;
						while((char)(e19 != ((CollectionPoolElement205 *)0)))
						{
							{
								{
									Expression21 *value20;
									value20 = e19->object;
									(ok4 &= BuilderContext_checkConstant847(zself, ((Location45 *)e9), value20));
									if((!BuilderContext_checkCompatible842(zself, ((Location45 *)e9), position13, value20, expression1->type)))
									{
										ok4 = 0;
									}
									(++position13);
								}
							}
							e19 = e19->nextSibling;
						}
					}
				}
			}
			L16: ;
			e9 = e9->nextSibling;
		}
	}
	if((char)(zsource->elseBlock != ((Collection204 *)0)))
	{
		Block38 *block21;
		block21 = BuilderContext_evaluateBlock803(zself, zsource->elseBlock);
		if((char)(block21 == ((Block38 *)0)))
		{
			ok4 = 0;
		}
		else
		{
			i5->elseBlock = block21;
			(terminator2 &= block21->terminated);
		}
	}
	else
	{
		terminator2 = 0;
	}
	if(ok4)
	{
		Dictionary_removeAll642(((Dictionary175 *)(&zself->builder->integerConstants)));
		{
			SwitchInstruction55 *self22;
			self22 = i5;
			{
				Collection56 *self23;
				Choice60 *e24;
				self23 = (&self22->choices);
				e24 = self23->firstElement;
				while((char)(e24 != ((Choice60 *)0)))
				{
					{
						{
							{
								CollectionPool62 *self25;
								self25 = ((CollectionPool62 *)e24->values);
								{
									Collection63 *self26;
									CollectionPoolElement205 *e27;
									self26 = ((Collection63 *)self25);
									e27 = self26->firstElement;
									while((char)(e27 != ((CollectionPoolElement205 *)0)))
									{
										{
											{
												Expression21 *v28;
												IntegerExpression20 *constant29;
												v28 = e27->object;
												constant29 = ((IntegerExpression20 *)v28);
												if(IntegerConstantDictionary_has650((&zself->builder->integerConstants), constant29))
												{
													BuilderContext_reportSourceError1294(zself, ((Location45 *)e24), S1985);
													ok4 = 0;
													goto L30;
												}
												IntegerConstantDictionary_add649((&zself->builder->integerConstants), constant29);
											}
											L30: ;
										}
										e27 = e27->nextSibling;
									}
								}
							}
						}
					}
					e24 = e24->nextSibling;
				}
			}
		}
	}
	if(terminator2)
	{
		BuilderContext_terminate834(zself);
	}
	i5->terminated = terminator2;
	t31 = ok4;
	return t31;
}

static char BuilderContext_evaluateBegin819(BuilderContext177 *zself, ASTBegin138 *zsource)
{
	Block38 *block1;
	char t3;
	block1 = BuilderContext_evaluateBlock803(zself, zsource->mainBlock);
	if((char)(block1 == ((Block38 *)0)))
	{
		char t2;
		t2 = 0;
		return t2;
	}
	if(block1->terminated)
	{
		BuilderContext_terminate834(zself);
	}
	Block_createInstruction1452(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line, block1);
	t3 = 1;
	return t3;
}

static char BuilderContext_evaluateDefer820(BuilderContext177 *zself, ASTDefer139 *zsource)
{
	DeferInstruction58 *i1;
	char ok2;
	char t6;
	i1 = Block_createInstruction1415(zself->block, BuilderContext_module836(zself), ((Location45 *)zsource)->line);
	ok2 = 1;
	{
		Block38 *block3;
		block3 = (&i1->block);
		{
			Scope8 scope4;
			Scope_initialize442((&scope4), zself->scope, zself->scope->module, zself->pool, 64);
			zself->scope = (&scope4);
			{
				Block38 *saveBlock5;
				saveBlock5 = zself->block;
				zself->block = block3;
				{
					ok2 = BuilderContext_evaluateInstruction805(zself, zsource->instruction);
				}
				{
					zself->block = saveBlock5;
				}
			}
			{
				zself->scope = (&scope4)->parent;
			}
		}
	}
	t6 = ok2;
	return t6;
}

static char BuilderContext_evaluateReturnOrBreak821(BuilderContext177 *zself, Location45 *zlocation, Collection203 *zsource, BuilderContext177 *zreturnContext)
{
	ExpressionList61 *expressions1;
	char ok2;
	MacroContext178 *inline3;
	char t12;
	expressions1 = ((char)(zreturnContext->fixedReturnTypes != ((TypeSequence108 *)0))?BuilderContext_evaluateTypedArguments758(zself, zlocation, zsource, zreturnContext->fixedReturnTypes, ((Expression21 *)0)):BuilderContext_evaluateExpressions756(zself, zsource));
	if((char)(expressions1 == ((ExpressionList61 *)0)))
	{
		char t4;
		t4 = 0;
		return t4;
	}
	{
		CollectionPool62 *self5;
		self5 = ((CollectionPool62 *)expressions1);
		{
			Collection63 *self6;
			CollectionPoolElement205 *e7;
			self6 = ((Collection63 *)self5);
			e7 = self6->firstElement;
			while((char)(e7 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *e8;
						e8 = e7->object;
						if((!BuilderContext_checkNoType844(zself, zlocation, e8)))
						{
							char t9;
							t9 = 0;
							return t9;
						}
						if((!BuilderContext_defineType745(zself, e8->type)))
						{
							char t10;
							t10 = 0;
							return t10;
						}
					}
				}
				e7 = e7->nextSibling;
			}
		}
	}
	ok2 = BuilderContext_merge832(zreturnContext, expressions1);
	if((!ok2))
	{
		char t11;
		BuilderContext_reportSourceError1419(zself, zlocation, S2034, ExpressionList_asTypes906(expressions1), zself->returnTypes);
		t11 = 0;
		return t11;
	}
	BuilderContext_terminate834(zself);
	inline3 = zreturnContext->macroContext;
	if((char)(inline3 == ((MacroContext178 *)0)))
	{
		Block_createInstruction1425(zself->block, BuilderContext_module836(zself), zlocation->line, expressions1);
	}
	else
	{
		Block_createInstruction1428(zself->block, BuilderContext_module836(zself), zlocation->line, inline3->block, expressions1);
	}
	t12 = 1;
	return t12;
}

static Expression21 *BuilderContext_getCast822(BuilderContext177 *zself, Location45 *zlocation, Expression21 *zvalue, Type98 *ztargetType)
{
	Type98 *type1;
	int *map2;
	int org3;
	int dst4;
	type1 = zvalue->type;
	if((char)(ztargetType == type1))
	{
		Expression21 *t5;
		t5 = zvalue;
		return t5;
	}
	if(Expression_isConstantInteger502(zvalue))
	{
		unsigned long long n6;
		Expression21 *t7;
		n6 = Expression_asConstantInteger477(zvalue)->value;
		t7 = ((Expression21 *)Program_getInteger391(BuilderContext_program835(zself), n6, ztargetType));
		return t7;
	}
	map2 = A1682;
	org3 = map2[type1->code];
	dst4 = map2[ztargetType->code];
	switch( ((org3 * 4) + dst4) )
	{
	case 0:
	case 1:
	case 4:
	case 5:
	case 7:
	case 10:
	case 13:
	case 15:
	{
		Program5 *program8;
		Expression21 *t9;
		program8 = BuilderContext_program835(zself);
		t9 = ((Expression21 *)Program_getUnary397(program8, 9, ztargetType, zvalue));
		return t9;
	}
	break;
	default:
	{
		Expression21 *t10;
		BuilderContext_reportSourceError1400(zself, zlocation, S2005, type1, ztargetType);
		t10 = ((Expression21 *)0);
		return t10;
	}
	}
}

static Attribute107 *BuilderContext_getAttribute823(BuilderContext177 *zself, ASTOffset152 *zsource, Type98 *ztype)
{
	StructureType104 *structure1;
	char ok2;
	void *name3;
	Attribute107 *attribute4;
	Attribute107 *t8;
	if((!Type_isStructure549(ztype)))
	{
		Attribute107 *t5;
		BuilderContext_reportSourceError1295(zself, ((Location45 *)zsource), S2026, ztype);
		t5 = ((Attribute107 *)0);
		return t5;
	}
	structure1 = Type_asStructure535(ztype);
	ok2 = BuilderContext_defineTypeSize753(zself, ((Type98 *)structure1));
	if((!ok2))
	{
		Attribute107 *t6;
		t6 = ((Attribute107 *)0);
		return t6;
	}
	name3 = zsource->name;
	attribute4 = StructureType_findAttribute1031(structure1, name3);
	if((char)(attribute4 == ((Attribute107 *)0)))
	{
		Attribute107 *t7;
		BuilderContext_reportSourceError1357(zself, ((Location45 *)zsource), S2025, name3);
		t7 = ((Attribute107 *)0);
		return t7;
	}
	t8 = attribute4;
	return t8;
}

static Definition32 *BuilderContext_getDefinition824(BuilderContext177 *zself, Location45 *zsource, void *zname)
{
	Definition32 *definition1;
	Definition32 *t3;
	definition1 = Scope_lookupDefinition445(zself->scope, zname);
	if((char)(definition1 == ((Definition32 *)0)))
	{
		Definition32 *t2;
		BuilderContext_reportSourceError1357(zself, zsource, S2030, zname);
		t2 = ((Definition32 *)0);
		return t2;
	}
	t3 = definition1;
	return t3;
}

static Definition32 *BuilderContext_getContextualDefinition825(BuilderContext177 *zself, Location45 *zsource, void *zname, Type98 *zcontext)
{
	Type98 *type1;
	Definition32 *t9;
	if((char)(zcontext->state != ((unsigned char)1U)))
	{
		char ok2;
		ok2 = BuilderContext_defineType745(zself, zcontext);
		if((!ok2))
		{
			Definition32 *t3;
			t3 = ((Definition32 *)0);
			return t3;
		}
	}
	type1 = zcontext;
	while((char)(type1 != ((Type98 *)0)))
	{
		DefinitionItem189 *item4;
		item4 = Type_findDefinition545(type1, zname);
		if((char)(item4 != ((DefinitionItem189 *)0)))
		{
			Definition32 *definition5;
			Definition32 *t8;
			definition5 = item4->definition;
			if((char)(item4->visibility == ((unsigned char)1U)))
			{
				Scope8 *s6;
				s6 = zself->base;
				while((char)(s6 != definition5->scope))
				{
					s6 = s6->parent;
					if((char)(s6 == ((Scope8 *)0)))
					{
						Definition32 *t7;
						BuilderContext_reportSourceError1322(zself, zsource, S2028, zname, zcontext);
						t7 = ((Definition32 *)0);
						return t7;
					}
				}
			}
			t8 = definition5;
			return t8;
		}
		type1 = type1->parent;
	}
	BuilderContext_reportSourceError1322(zself, zsource, S2029, zname, zcontext);
	t9 = ((Definition32 *)0);
	return t9;
}

static Function33 *BuilderContext_getFunctionInstanceFromTypes826(BuilderContext177 *zself, GenericFunction37 *zgeneric, TypeSequence108 *ztypes)
{
	Program5 *program1;
	MemoryPool160 *pool2;
	ExpressionList61 *arguments3;
	Function33 *t8;
	program1 = BuilderContext_program835(zself);
	pool2 = zself->pool;
	arguments3 = Program_getExpressionList413(program1);
	{
		{
			int self4;
			int i5;
			self4 = ztypes->size;
			i5 = 0;
			while((char)(i5 < self4))
			{
				{
					{
						Type98 *type6;
						Expression21 *e7;
						type6 = TypeSequence__at603(ztypes, i5);
						e7 = MemoryPool_allocate1522(pool2);
						Expression_initialize475(e7, 0, type6);
						CollectionPool_add903(((CollectionPool62 *)arguments3), pool2, e7);
					}
				}
				(++i5);
			}
		}
	}
	t8 = BuilderContext_getFunctionInstance827(zself, zgeneric, arguments3);
	return t8;
}

static Function33 *BuilderContext_getFunctionInstance827(BuilderContext177 *zself, GenericFunction37 *zgeneric, ExpressionList61 *zarguments)
{
	Function33 *f1;
	ASTFunction115 *source2;
	CollectionPoolElement205 *i3;
	Parameter35 *j4;
	Function33 *t10;
	f1 = GenericFunction_findInstance1329(zgeneric, zarguments);
	if((char)(f1 != ((Function33 *)0)))
	{
		Function33 *t5;
		t5 = f1;
		return t5;
	}
	f1 = Program_createFunction423(BuilderContext_program835(zself), ((Definition32 *)zgeneric)->scope, zgeneric->source, zgeneric->context);
	GenericFunction_addInstance1327(zgeneric, f1);
	source2 = zgeneric->source;
	i3 = ((Collection63 *)zarguments)->firstElement;
	j4 = (&zgeneric->parameters)->firstElement;
	if((char)(zgeneric->context != ((Type98 *)0)))
	{
		char generalizable6;
		Type98 *type7;
		generalizable6 = 1;
		type7 = zgeneric->context;
		if(source2->selfGeneric)
		{
			generalizable6 = 0;
			type7 = i3->object->type;
		}
		Function_createParameter722(f1, ((Location45 *)source2)->line, (&identifiers1661)->self, type7, generalizable6);
		i3 = i3->nextSibling;
		j4 = j4->nextSibling;
	}
	{
		Collection202 *self8;
		ASTParameter120 *e9;
		self8 = source2->parameters;
		e9 = self8->firstElement;
		while((char)(e9 != ((ASTParameter120 *)0)))
		{
			{
				if((char)(e9->type == ((ASTExpression140 *)0)))
				{
					Function_createParameter722(f1, ((Location45 *)e9)->line, e9->name, i3->object->type, 0);
				}
				else
				{
					Function_createParameter722(f1, ((Location45 *)e9)->line, e9->name, j4->type, 1);
				}
				i3 = i3->nextSibling;
				j4 = j4->nextSibling;
			}
			e9 = e9->nextSibling;
		}
	}
	while((char)(i3 != ((CollectionPoolElement205 *)0)))
	{
		Function_createParameter722(f1, ((Location45 *)source2)->line, ((void *)0), i3->object->type, 0);
		i3 = i3->nextSibling;
	}
	t10 = f1;
	return t10;
}

static Type98 *BuilderContext_instanciateType828(BuilderContext177 *zself, GenericType94 *zgeneric, ExpressionList61 *zarguments)
{
	Program5 *program1;
	Module7 *module2;
	Scope8 *scope3;
	ASTType118 *source4;
	Type98 *type5;
	Type98 *t16;
	program1 = BuilderContext_program835(zself);
	module2 = Definition_module682(((Definition32 *)zgeneric));
	scope3 = ((Definition32 *)zgeneric)->scope;
	source4 = zgeneric->source;
	if((char)(((ASTElement109 *)source4)->code == 4))
	{
		type5 = ((Type98 *)Program_createStructure422(program1, scope3, source4, zarguments));
	}
	else
	{
		type5 = BuilderContext_createSubType830(zself, scope3, source4, zarguments);
	}
	{
		Collection202 *iterable26;
		ASTParameter120 *e27;
		iterable26 = zgeneric->source->parameters;
		e27 = iterable26->firstElement;
		{
			CollectionPool62 *self8;
			self8 = ((CollectionPool62 *)zarguments);
			{
				Collection63 *self9;
				CollectionPoolElement205 *e10;
				self9 = ((Collection63 *)self8);
				e10 = self9->firstElement;
				while((char)(e10 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *v111;
							ASTParameter120 *v212;
							v111 = e10->object;
							v212 = Collection_elementValue1370(iterable26, e27);
							{
								TypeArgument106 *definition13;
								Definition32 *conflictingDefinition14;
								definition13 = Program_getTypeArgument414(program1, module2, v212, v111);
								conflictingDefinition14 = Scope_addDefinition443((&type5->scope), ((Definition32 *)definition13));
								if((char)(conflictingDefinition14 != ((Definition32 *)0)))
								{
									Type98 *t15;
									BuilderContext_reportDefinitionError855(zself, ((Definition32 *)definition13), S2037, ((Definition32 *)definition13)->name);
									if(Definition_hasLocation698(conflictingDefinition14))
									{
										BuilderContext_reportDefinitionError890(zself, conflictingDefinition14, S2036);
									}
									t15 = ((Type98 *)0);
									return t15;
								}
							}
							e27 = Collection_nextElement1374(iterable26, e27);
						}
					}
					e10 = e10->nextSibling;
				}
			}
		}
	}
	t16 = type5;
	return t16;
}

static Variable41 *BuilderContext_createVariable829(BuilderContext177 *zself, int zline, void *zname, Type98 *ztype, Expression21 *zvalue)
{
	Block38 *block1;
	Variable41 *variable2;
	Variable41 *t3;
	block1 = zself->block;
	variable2 = Block_createVariable915(block1, BuilderContext_module836(zself), zline, zname, ztype);
	Block_createInstruction1319(block1, BuilderContext_module836(zself), zline, variable2, zvalue);
	t3 = variable2;
	return t3;
}

static Type98 *BuilderContext_createSubType830(BuilderContext177 *zself, Scope8 *zscope, ASTType118 *zsource, ExpressionList61 *zarguments)
{
	Program5 *program1;
	Type98 *parent2;
	ASTExpression140 *sourceParent3;
	Type98 *type4;
	Type98 *t8;
	program1 = BuilderContext_program835(zself);
	sourceParent3 = zsource->parent;
	if((char)(sourceParent3 == ((ASTExpression140 *)0)))
	{
		parent2 = ((Type98 *)program1->int32Type);
	}
	else
	{
		{
			BuilderContext177 cx5;
			BuilderContext_initialize731((&cx5), zself, zself->builder, zscope, Builder_getLocalPool623(zself->builder), ((MacroContext178 *)0));
			{
				parent2 = BuilderContext_evaluateSimpleType801((&cx5), sourceParent3);
			}
			Builder_releaseLocalPool624(zself->builder);
		}
		if((char)(parent2 == ((Type98 *)0)))
		{
			Type98 *t6;
			t6 = ((Type98 *)0);
			return t6;
		}
	}
	switch( parent2->code )
	{
	case 5:
	case 6:
	case 7:
	case 8:
	{
		type4 = ((Type98 *)Program_getBuiltinType386(program1, zscope, parent2, parent2->code, parent2->size, zsource->name));
	}
	break;
	case 9:
	{
		type4 = ((Type98 *)Program_getPointerType387(program1, zscope, Type_asPointer533(parent2)->target, parent2, zsource->name));
	}
	break;
	default:
	{
		Type98 *t7;
		BuilderContext_reportError1296(zself, zscope->module->filename, ((Location45 *)zsource)->line, S1960, parent2);
		t7 = ((Type98 *)0);
		return t7;
	}
	}
	type4->source = ((ASTNode110 *)zsource);
	type4->arguments = zarguments;
	t8 = type4;
	return t8;
}

static int BuilderContext_expandExpression831(BuilderContext177 *zself, ExpressionList61 *zlist, Expression21 *ze)
{
	if(Expression_isVargs510(ze))
	{
		int size1;
		int t6;
		size1 = 0;
		{
			CollectionPool62 *self2;
			self2 = ((CollectionPool62 *)Expression_asVargs498(ze)->expressions);
			{
				Collection63 *self3;
				CollectionPoolElement205 *e4;
				self3 = ((Collection63 *)self2);
				e4 = self3->firstElement;
				while((char)(e4 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *x5;
							x5 = e4->object;
							CollectionPool_add903(((CollectionPool62 *)zlist), BuilderContext_program835(zself)->pool, x5);
							(++size1);
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
		t6 = size1;
		return t6;
	}
	else
	{
		if(Expression_isComposite509(ze))
		{
			int size7;
			CompositeExpression75 *c8;
			int n9;
			Program5 *program10;
			int t13;
			size7 = 0;
			c8 = Expression_asComposite499(ze);
			c8->nextComposite = zself->composites;
			zself->composites = c8;
			n9 = c8->types->size;
			program10 = BuilderContext_program835(zself);
			{
				int self11;
				int i12;
				self11 = n9;
				i12 = 0;
				while((char)(i12 < self11))
				{
					{
						CollectionPool_add903(((CollectionPool62 *)zlist), program10->pool, ((Expression21 *)Program_getSelect406(program10, ((Expression21 *)c8), i12, TypeSequence__at603(c8->types, i12))));
						(++size7);
					}
					(++i12);
				}
			}
			t13 = size7;
			return t13;
		}
		else
		{
			int t14;
			CollectionPool_add903(((CollectionPool62 *)zlist), BuilderContext_program835(zself)->pool, ze);
			t14 = 1;
			return t14;
		}
	}
}

static char BuilderContext_merge832(BuilderContext177 *zself, ExpressionList61 *zarguments)
{
	(++zself->returnCount);
	if((char)(zself->returnTypes == ((TypeSequence108 *)0)))
	{
		char t1;
		zself->returnTypes = _fromExpressions599(BuilderContext_module836(zself)->program->pool, zarguments);
		t1 = 1;
		return t1;
	}
	else
	{
		char t2;
		t2 = TypeSequence_merge605(zself->returnTypes, zarguments);
		return t2;
	}
}

static char BuilderContext_terminated833(BuilderContext177 *zself)
{
	char t1;
	t1 = zself->block->terminated;
	return t1;
}

static void BuilderContext_terminate834(BuilderContext177 *zself)
{
	zself->block->terminated = 1;
}

static Program5 *BuilderContext_program835(BuilderContext177 *zself)
{
	Program5 *t1;
	t1 = BuilderContext_module836(zself)->program;
	return t1;
}

static Module7 *BuilderContext_module836(BuilderContext177 *zself)
{
	Module7 *t1;
	t1 = zself->base->module;
	return t1;
}

static char BuilderContext_hasMacro837(BuilderContext177 *zself, Function33 *zf)
{
	BuilderContext177 *p1;
	char t3;
	p1 = zself;
	while(((char)(p1 != ((BuilderContext177 *)0)) && (char)(p1->macroContext != ((MacroContext178 *)0))))
	{
		if((char)(p1->macroContext->macro == zf))
		{
			char t2;
			t2 = 1;
			return t2;
		}
		p1 = p1->parent;
	}
	t3 = 0;
	return t3;
}

static char BuilderContext_addLocalDefinition838(BuilderContext177 *zself, Definition32 *zdefinition)
{
	Definition32 *conflictingDefinition1;
	char t3;
	conflictingDefinition1 = Scope_addDefinition443(zself->scope, zdefinition);
	if((char)(conflictingDefinition1 == ((Definition32 *)0)))
	{
		char t2;
		t2 = 1;
		return t2;
	}
	BuilderContext_reportDefinitionError855(zself, zdefinition, S2037, zdefinition->name);
	if(Definition_hasLocation698(conflictingDefinition1))
	{
		BuilderContext_reportDefinitionError890(zself, conflictingDefinition1, S2036);
	}
	t3 = 0;
	return t3;
}

static char BuilderContext_addGlobalDefinition839(BuilderContext177 *zself, Scope8 *zscope, Definition32 *zdefinition, unsigned char zvisibility)
{
	Definition32 *conflictingDefinition1;
	char t3;
	conflictingDefinition1 = Scope_addDefinitionWithVisibility444(zscope, zdefinition, zvisibility);
	if((char)(conflictingDefinition1 == ((Definition32 *)0)))
	{
		char t2;
		t2 = 1;
		return t2;
	}
	BuilderContext_reportDefinitionError855(zself, zdefinition, S2037, zdefinition->name);
	if(Definition_hasLocation698(conflictingDefinition1))
	{
		BuilderContext_reportDefinitionError890(zself, conflictingDefinition1, S2036);
	}
	t3 = 0;
	return t3;
}

static char BuilderContext_addContextualDefinition840(BuilderContext177 *zself, Type98 *ztype, Definition32 *zdefinition, unsigned char zvisibility)
{
	Definition32 *conflictingDefinition1;
	char t3;
	conflictingDefinition1 = Type_addDefinition528(ztype, zdefinition, zvisibility);
	if((char)(conflictingDefinition1 != ((Definition32 *)0)))
	{
		char t2;
		BuilderContext_reportConflict849(zself, zdefinition, conflictingDefinition1);
		t2 = 0;
		return t2;
	}
	t3 = 1;
	return t3;
}

static char BuilderContext_addContextualSymbol841(BuilderContext177 *zself, Type98 *ztype, Symbol29 *zsymbol)
{
	Symbol29 *conflictingSymbol1;
	char t3;
	conflictingSymbol1 = Type_addSymbol529(ztype, zsymbol);
	if((char)(conflictingSymbol1 != ((Symbol29 *)0)))
	{
		char t2;
		BuilderContext_reportSourceError1357(zself, ((Location45 *)zsymbol->source), S1962, Symbol_name1485(zsymbol));
		t2 = 0;
		return t2;
	}
	t3 = 1;
	return t3;
}

static char BuilderContext_checkCompatible842(BuilderContext177 *zself, Location45 *zlocation, int zposition, Expression21 *zexpression, Type98 *zexpected)
{
	Type98 *type1;
	char ok2;
	char t6;
	type1 = zexpression->type;
	if((char)(type1 == zexpected))
	{
		char t3;
		t3 = 1;
		return t3;
	}
	ok2 = BuilderContext_defineType745(zself, type1);
	if((!ok2))
	{
		char t4;
		t4 = 0;
		return t4;
	}
	if(Type_match530(type1, zexpected))
	{
		char t5;
		t5 = 1;
		return t5;
	}
	BuilderContext_reportSourceError1306(zself, zlocation, S2008, (zposition + 1), type1, zexpected);
	t6 = 0;
	return t6;
}

static char BuilderContext_checkLvalue843(BuilderContext177 *zself, Location45 *zlocation, Expression21 *zexpression)
{
	char t2;
	if((!Expression_isLvalue507(zexpression)))
	{
		char t1;
		BuilderContext_reportSourceError1294(zself, zlocation, S2016);
		t1 = 0;
		return t1;
	}
	t2 = 1;
	return t2;
}

static char BuilderContext_checkNoType844(BuilderContext177 *zself, Location45 *zlocation, Expression21 *zexpression)
{
	char t2;
	if(Expression_isType505(zexpression))
	{
		char t1;
		BuilderContext_reportSourceError1294(zself, zlocation, S1989);
		t1 = 0;
		return t1;
	}
	t2 = 1;
	return t2;
}

static char BuilderContext_checkMustCheck845(BuilderContext177 *zself, Location45 *zlocation, ExpressionList61 *zlist)
{
	char t6;
	{
		CollectionPool62 *self1;
		self1 = ((CollectionPool62 *)zlist);
		{
			Collection63 *self2;
			CollectionPoolElement205 *e3;
			self2 = ((Collection63 *)self1);
			e3 = self2->firstElement;
			while((char)(e3 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *v4;
						v4 = e3->object;
						if(Type_mustCheck559(v4->type))
						{
							char t5;
							BuilderContext_reportSourceError1295(zself, zlocation, S1959, v4->type);
							t5 = 0;
							return t5;
						}
					}
				}
				e3 = e3->nextSibling;
			}
		}
	}
	t6 = 1;
	return t6;
}

static char BuilderContext_checkVargs846(BuilderContext177 *zself, Location45 *zlocation)
{
	char t2;
	if((char)(zself->extra == ((ExpressionList61 *)0)))
	{
		char t1;
		BuilderContext_reportSourceError1294(zself, zlocation, S1977);
		t1 = 0;
		return t1;
	}
	t2 = 1;
	return t2;
}

static char BuilderContext_checkConstant847(BuilderContext177 *zself, Location45 *zlocation, Expression21 *zexpression)
{
	char t2;
	if((!Expression_isConstant501(zexpression)))
	{
		char t1;
		BuilderContext_reportSourceError1294(zself, zlocation, S2010);
		t1 = 0;
		return t1;
	}
	t2 = 1;
	return t2;
}

static char BuilderContext_checkInteger848(BuilderContext177 *zself, Location45 *zlocation, Type98 *ztype)
{
	char t2;
	if((!Type_isInteger551(ztype)))
	{
		char t1;
		BuilderContext_reportSourceError1294(zself, zlocation, S2011);
		t1 = 0;
		return t1;
	}
	t2 = 1;
	return t2;
}

static void BuilderContext_reportConflict849(BuilderContext177 *zself, Definition32 *zdefinition, Definition32 *zconflictingDefinition)
{
	BuilderContext_reportDefinitionError855(zself, zdefinition, S2037, zdefinition->name);
	if(Definition_hasLocation698(zconflictingDefinition))
	{
		BuilderContext_reportDefinitionError890(zself, zconflictingDefinition, S2036);
	}
}

static void LocalPool_initialize850(LocalPool180 *zself)
{
	MemoryPool_initializeWithSize294((&zself->pool), ((size_t)0x0000000000004000U));
}

static void LocalPool_release851(LocalPool180 *zself)
{
	MemoryPool_release295((&zself->pool));
}

static void LocalPool_reset852(LocalPool180 *zself)
{
	MemoryPool_reset298((&zself->pool));
}

static LocalPool180 *_new853()
{
	LocalPool180 *obj1;
	LocalPool180 *t2;
	obj1 = _allocate854();
	LocalPool_initialize850(obj1);
	t2 = obj1;
	return t2;
}

static LocalPool180 *_allocate854()
{
	LocalPool180 *t1;
	t1 = ((LocalPool180 *)_allocateBytes257(((size_t)0x0000000000000018U)));
	return t1;
}

static void BuilderContext_reportDefinitionError855(BuilderContext177 *zself, Definition32 *zdefinition, unsigned char *zfmt, void *v3x)
{
	BuilderContext_reportError856(zself, Definition_module682(zdefinition)->filename, zdefinition->line, zfmt, v3x);
}

static void BuilderContext_reportError856(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x)
{
	ErrorReporter_reportError857(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x);
}

static void ErrorReporter_reportError857(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat860((&s1), zfmt, v4x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static StringBuffer2 *StringBuffer__shl858(StringBuffer2 *zself, int zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer859(((int )zobj), zself);
	t1 = zself;
	return t1;
}

static void _addToStringBuffer859(int zself, StringBuffer2 *zx)
{
	StringBuffer_addInteger282(zx, zself);
}

static void StringBuffer_addFormat860(StringBuffer2 *zself, unsigned char *zs, void *v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl861(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static StringBuffer2 *StringBuffer__shl861(StringBuffer2 *zself, void *zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer669(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl862(StringBuffer2 *zself, unsigned char *zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer329(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl863(StringBuffer2 *zself, unsigned int zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer373(zobj, zself);
	t1 = zself;
	return t1;
}

static ASTType118 *ASTElement_asType864(ASTElement109 *zself)
{
	ASTType118 *t1;
	t1 = ((ASTType118 *)zself);
	return t1;
}

static ASTGlobalVariable114 *ASTElement_asGlobalVariable865(ASTElement109 *zself)
{
	ASTGlobalVariable114 *t1;
	t1 = ((ASTGlobalVariable114 *)zself);
	return t1;
}

static ASTFunction115 *ASTElement_asFunction866(ASTElement109 *zself)
{
	ASTFunction115 *t1;
	t1 = ((ASTFunction115 *)zself);
	return t1;
}

static ASTExternFunction116 *ASTElement_asExternFunction867(ASTElement109 *zself)
{
	ASTExternFunction116 *t1;
	t1 = ((ASTExternFunction116 *)zself);
	return t1;
}

static ASTAttribute122 *ASTElement_asAttribute868(ASTElement109 *zself)
{
	ASTAttribute122 *t1;
	t1 = ((ASTAttribute122 *)zself);
	return t1;
}

static ASTAlias117 *ASTElement_asAlias869(ASTElement109 *zself)
{
	ASTAlias117 *t1;
	t1 = ((ASTAlias117 *)zself);
	return t1;
}

static ASTSymbol121 *ASTElement_asSymbol870(ASTElement109 *zself)
{
	ASTSymbol121 *t1;
	t1 = ((ASTSymbol121 *)zself);
	return t1;
}

static ASTImport113 *ASTElement_asImport871(ASTElement109 *zself)
{
	ASTImport113 *t1;
	t1 = ((ASTImport113 *)zself);
	return t1;
}

static ASTExtension119 *ASTElement_asExtension872(ASTElement109 *zself)
{
	ASTExtension119 *t1;
	t1 = ((ASTExtension119 *)zself);
	return t1;
}

static Parameter35 *MemoryPool_new873(MemoryPool160 *zself, Scope8 *v1x, int v2x, void *v3x, Type98 *v4x, char v5x)
{
	Parameter35 *obj1;
	Parameter35 *t2;
	obj1 = MemoryPool_allocate874(zself);
	Parameter_initialize875(obj1, v1x, v2x, v3x, v4x, v5x);
	t2 = obj1;
	return t2;
}

static Parameter35 *MemoryPool_allocate874(MemoryPool160 *zself)
{
	Parameter35 *t1;
	t1 = ((Parameter35 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000024U)));
	return t1;
}

static void Parameter_initialize875(Parameter35 *zself, Scope8 *zscope, int zline, void *zname, Type98 *ztype, char zgeneralizable)
{
	Definition_initialize681(((Definition32 *)zself), zscope, zline, zname, 5);
	zself->type = ztype;
	zself->generalizable = zgeneralizable;
	zself->generator = ((void *)0);
	if((char)(ztype != ((Type98 *)0)))
	{
		MemoryPool160 *pool1;
		pool1 = zscope->module->program->pool;
		if(Type_isMeta554(ztype))
		{
			Type98 *type2;
			type2 = Type_asMeta536(ztype)->type;
			zself->expression = ((Expression21 *)MemoryPool_new877(pool1, type2));
		}
		else
		{
			zself->expression = ((Expression21 *)MemoryPool_new881(pool1, zself));
		}
	}
	else
	{
		zself->expression = ((Expression21 *)0);
	}
}

static void _assert876(char zcondition, unsigned char *zs)
{
}

static TypeExpression74 *MemoryPool_new877(MemoryPool160 *zself, Type98 *v1x)
{
	TypeExpression74 *obj1;
	TypeExpression74 *t2;
	obj1 = MemoryPool_allocate878(zself);
	TypeExpression_initialize879(obj1, v1x);
	t2 = obj1;
	return t2;
}

static TypeExpression74 *MemoryPool_allocate878(MemoryPool160 *zself)
{
	TypeExpression74 *t1;
	t1 = ((TypeExpression74 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void TypeExpression_initialize879(TypeExpression74 *zself, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 7, ((Type98 *)Type_metaType523(ztype)));
	zself->type = ztype;
}

static void TypeExpression_addToStringBuffer880(TypeExpression74 *zself, StringBuffer2 *zsb)
{
	StringBuffer__shl925(zsb, zself->type);
}

static ParameterExpression79 *MemoryPool_new881(MemoryPool160 *zself, Parameter35 *v1x)
{
	ParameterExpression79 *obj1;
	ParameterExpression79 *t2;
	obj1 = MemoryPool_allocate882(zself);
	ParameterExpression_initialize883(obj1, v1x);
	t2 = obj1;
	return t2;
}

static ParameterExpression79 *MemoryPool_allocate882(MemoryPool160 *zself)
{
	ParameterExpression79 *t1;
	t1 = ((ParameterExpression79 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void ParameterExpression_initialize883(ParameterExpression79 *zself, Parameter35 *zp)
{
	Expression_initialize475(((Expression21 *)zself), 10, zp->type);
	zself->parameter = zp;
}

static void Collection_initialize884(Collection202 *zself)
{
	zself->size = 0;
	zself->firstElement = ((ASTParameter120 *)0);
	zself->lastElement = ((ASTParameter120 *)0);
}

static void Collection_add885(Collection202 *zself, ASTParameter120 *ze)
{
	if((char)(zself->lastElement != ((ASTParameter120 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((ASTParameter120 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((ASTParameter120 *)0);
}

static char Collection_isEmpty886(Collection202 *zself)
{
	char t1;
	t1 = (char)(zself->firstElement == ((ASTParameter120 *)0));
	return t1;
}

static void Collection_initialize887(Collection203 *zself)
{
	zself->size = 0;
	zself->firstElement = ((ASTExpression140 *)0);
	zself->lastElement = ((ASTExpression140 *)0);
}

static void Collection_add888(Collection203 *zself, ASTExpression140 *ze)
{
	if((char)(zself->lastElement != ((ASTExpression140 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((ASTExpression140 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((ASTExpression140 *)0);
}

static char Collection_isEmpty889(Collection203 *zself)
{
	char t1;
	t1 = (char)(zself->firstElement == ((ASTExpression140 *)0));
	return t1;
}

static void BuilderContext_reportDefinitionError890(BuilderContext177 *zself, Definition32 *zdefinition, unsigned char *zfmt)
{
	BuilderContext_reportError891(zself, Definition_module682(zdefinition)->filename, zdefinition->line, zfmt);
}

static void BuilderContext_reportError891(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt)
{
	ErrorReporter_reportError892(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt));
}

static void ErrorReporter_reportError892(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat381((&s1), zfmt);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static TypeSequence108 *MemoryPool_allocateWithArray893(MemoryPool160 *zself, int zn)
{
	size_t bytes1;
	TypeSequence108 *t2;
	bytes1 = ((((size_t )zn) * ((size_t)0x0000000000000004U)) + ((size_t)0x0000000000000004U));
	t2 = ((TypeSequence108 *)MemoryPool_allocateBytes297(zself, bytes1));
	return t2;
}

static ASTInteger149 *ASTExpression_asInteger894(ASTExpression140 *zself)
{
	ASTInteger149 *t1;
	t1 = ((ASTInteger149 *)zself);
	return t1;
}

static ASTArray145 *ASTExpression_asArray895(ASTExpression140 *zself)
{
	ASTArray145 *t1;
	t1 = ((ASTArray145 *)zself);
	return t1;
}

static ASTString150 *ASTExpression_asString896(ASTExpression140 *zself)
{
	ASTString150 *t1;
	t1 = ((ASTString150 *)zself);
	return t1;
}

static ASTSymbolName151 *ASTExpression_asSymbol897(ASTExpression140 *zself)
{
	ASTSymbolName151 *t1;
	t1 = ((ASTSymbolName151 *)zself);
	return t1;
}

static ExpressionList61 *MemoryPool_new898(MemoryPool160 *zself)
{
	ExpressionList61 *obj1;
	ExpressionList61 *t2;
	obj1 = MemoryPool_allocate899(zself);
	Collection_initialize900(((Collection63 *)obj1));
	t2 = obj1;
	return t2;
}

static ExpressionList61 *MemoryPool_allocate899(MemoryPool160 *zself)
{
	ExpressionList61 *t1;
	t1 = ((ExpressionList61 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void Collection_initialize900(Collection63 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CollectionPoolElement205 *)0);
	zself->lastElement = ((CollectionPoolElement205 *)0);
}

static void Collection_add901(Collection63 *zself, CollectionPoolElement205 *ze)
{
	if((char)(zself->lastElement != ((CollectionPoolElement205 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CollectionPoolElement205 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CollectionPoolElement205 *)0);
}

static char Collection_isEmpty902(Collection63 *zself)
{
	char t1;
	t1 = (char)(zself->firstElement == ((CollectionPoolElement205 *)0));
	return t1;
}

static void CollectionPool_add903(CollectionPool62 *zself, MemoryPool160 *zpool, Expression21 *zobject)
{
	CollectionPoolElement205 *element1;
	element1 = MemoryPool_new910(zpool, zobject);
	Collection_add901(((Collection63 *)zself), element1);
}

static Expression21 *CollectionPool_last904(CollectionPool62 *zself)
{
	CollectionPoolElement205 *last1;
	Expression21 *t3;
	last1 = ((Collection63 *)zself)->lastElement;
	if((char)(last1 == ((CollectionPoolElement205 *)0)))
	{
		Expression21 *t2;
		t2 = ((Expression21 *)0);
		return t2;
	}
	t3 = last1->object;
	return t3;
}

static Expression21 *ExpressionList_first905(ExpressionList61 *zself)
{
	Expression21 *t1;
	t1 = ((Collection63 *)zself)->firstElement->object;
	return t1;
}

static ExpressionTypeList64 *ExpressionList_asTypes906(ExpressionList61 *zself)
{
	ExpressionTypeList64 *t1;
	t1 = ((ExpressionTypeList64 *)zself);
	return t1;
}

static void ExpressionList_addToStringBuffer907(ExpressionList61 *zself, StringBuffer2 *zsb)
{
	if(ExpressionList_notEmpty1289(zself))
	{
		char comma1;
		StringBuffer__shl365(zsb, ((unsigned char)40U));
		comma1 = 0;
		{
			CollectionPool62 *self2;
			self2 = ((CollectionPool62 *)zself);
			{
				Collection63 *self3;
				CollectionPoolElement205 *e4;
				self3 = ((Collection63 *)self2);
				e4 = self3->firstElement;
				while((char)(e4 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *e5;
							e5 = e4->object;
							if(comma1)
							{
								StringBuffer__shl365(zsb, ((unsigned char)44U));
								StringBuffer__shl365(zsb, ((unsigned char)32U));
							}
							comma1 = 1;
							StringBuffer__shl1275(zsb, e5);
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
		StringBuffer__shl365(zsb, ((unsigned char)41U));
	}
}

static char ExpressionList_matchInstance908(ExpressionList61 *zself, Collection34 *zparameters)
{
	char t9;
	if((char)(((Collection63 *)zself)->size != zparameters->size))
	{
		char t1;
		t1 = 0;
		return t1;
	}
	{
		Parameter35 *e22;
		e22 = zparameters->firstElement;
		{
			CollectionPool62 *self3;
			self3 = ((CollectionPool62 *)zself);
			{
				Collection63 *self4;
				CollectionPoolElement205 *e5;
				self4 = ((Collection63 *)self3);
				e5 = self4->firstElement;
				while((char)(e5 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *v16;
							Parameter35 *v27;
							v16 = e5->object;
							v27 = Collection_elementValue1331(zparameters, e22);
							{
								if(v27->generalizable)
								{
								}
								else
								{
									if((char)(v16->type != v27->type))
									{
										char t8;
										t8 = 0;
										return t8;
									}
								}
							}
							e22 = Collection_nextElement1332(zparameters, e22);
						}
					}
					e5 = e5->nextSibling;
				}
			}
		}
	}
	t9 = 1;
	return t9;
}

static char ExpressionList_areConstantEquals909(ExpressionList61 *zself, ExpressionList61 *zother)
{
	int n1;
	char t10;
	n1 = ((Collection63 *)zself)->size;
	if((char)(n1 != ((Collection63 *)zother)->size))
	{
		char t2;
		t2 = 0;
		return t2;
	}
	{
		CollectionPoolElement205 *e23;
		e23 = ((Collection63 *)zother)->firstElement;
		{
			CollectionPool62 *self4;
			self4 = ((CollectionPool62 *)zself);
			{
				Collection63 *self5;
				CollectionPoolElement205 *e6;
				self5 = ((Collection63 *)self4);
				e6 = self5->firstElement;
				while((char)(e6 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *v17;
							Expression21 *v28;
							v17 = e6->object;
							v28 = CollectionPool_elementValue1237(((CollectionPool62 *)zother), e23);
							{
								if((!Expression_isConstantEqual506(v17, v28)))
								{
									char t9;
									t9 = 0;
									return t9;
								}
							}
							e23 = Collection_nextElement1238(((Collection63 *)zother), e23);
						}
					}
					e6 = e6->nextSibling;
				}
			}
		}
	}
	t10 = 1;
	return t10;
}

static CollectionPoolElement205 *MemoryPool_new910(MemoryPool160 *zself, Expression21 *v1x)
{
	CollectionPoolElement205 *obj1;
	CollectionPoolElement205 *t2;
	obj1 = MemoryPool_allocate911(zself);
	CollectionPoolElement_initialize912(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CollectionPoolElement205 *MemoryPool_allocate911(MemoryPool160 *zself)
{
	CollectionPoolElement205 *t1;
	t1 = ((CollectionPoolElement205 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static void CollectionPoolElement_initialize912(CollectionPoolElement205 *zself, Expression21 *zobject)
{
	zself->object = zobject;
}

static CollectionPoolElement205 *CollectionPoolElement_skip913(CollectionPoolElement205 *zself, int zn)
{
	CollectionPoolElement205 *p1;
	int i2;
	CollectionPoolElement205 *t3;
	p1 = zself;
	i2 = zn;
	while(((char)(i2 != 0) && (char)(p1 != ((CollectionPoolElement205 *)0))))
	{
		p1 = p1->nextSibling;
		(--i2);
	}
	t3 = p1;
	return t3;
}

static void Block_initialize914(Block38 *zself)
{
	zself->terminated = 0;
	Collection_initialize916((&zself->variables));
	Collection_initialize918((&zself->instructions));
}

static Variable41 *Block_createVariable915(Block38 *zself, Module7 *zmodule, int zline, void *zname, Type98 *ztype)
{
	MemoryPool160 *pool1;
	Variable41 *v2;
	Variable41 *t3;
	pool1 = zmodule->program->pool;
	v2 = MemoryPool_new1315(pool1, zmodule, zline, zname, ztype);
	Collection_add917((&zself->variables), v2);
	t3 = v2;
	return t3;
}

static void Collection_initialize916(Collection39 *zself)
{
	zself->size = 0;
	zself->firstElement = ((Variable41 *)0);
	zself->lastElement = ((Variable41 *)0);
}

static void Collection_add917(Collection39 *zself, Variable41 *ze)
{
	if((char)(zself->lastElement != ((Variable41 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((Variable41 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((Variable41 *)0);
}

static void Collection_initialize918(Collection40 *zself)
{
	zself->size = 0;
	zself->firstElement = ((Instruction44 *)0);
	zself->lastElement = ((Instruction44 *)0);
}

static void Collection_add919(Collection40 *zself, Instruction44 *ze)
{
	if((char)(zself->lastElement != ((Instruction44 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((Instruction44 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((Instruction44 *)0);
}

static void BuilderContext_reportSourceError920(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, TypeSequence108 *v3x)
{
	BuilderContext_reportError921(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x);
}

static void BuilderContext_reportError921(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, TypeSequence108 *v4x)
{
	ErrorReporter_reportError922(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x);
}

static void ErrorReporter_reportError922(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, TypeSequence108 *v4x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat923((&s1), zfmt, v4x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat923(StringBuffer2 *zself, unsigned char *zs, TypeSequence108 *v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl924(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static StringBuffer2 *StringBuffer__shl924(StringBuffer2 *zself, TypeSequence108 *zobj)
{
	StringBuffer2 *t1;
	TypeSequence_addToStringBuffer606(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl925(StringBuffer2 *zself, Type98 *zobj)
{
	StringBuffer2 *t1;
	Type_addToStringBuffer543(zobj, zself);
	t1 = zself;
	return t1;
}

static void BuilderContext_reportSourceError926(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, TypeSequence108 *v3x, TypeSequence108 *v4x)
{
	BuilderContext_reportError927(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x, v4x);
}

static void BuilderContext_reportError927(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, TypeSequence108 *v4x, TypeSequence108 *v5x)
{
	ErrorReporter_reportError928(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x, v5x);
}

static void ErrorReporter_reportError928(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, TypeSequence108 *v4x, TypeSequence108 *v5x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat929((&s1), zfmt, v4x, v5x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat929(StringBuffer2 *zself, unsigned char *zs, TypeSequence108 *v2x, TypeSequence108 *v3x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl924(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl924(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static unsigned char *Builder_getPublicName930(Builder171 *zself, Function33 *zf)
{
	if((char)(((Prototype31 *)zf)->namingConvention == ((unsigned char)1U)))
	{
		unsigned char *t1;
		t1 = _string666(((Definition32 *)zf)->name);
		return t1;
	}
	else
	{
		MemoryBuffer159 *buffer2;
		unsigned char *name3;
		size_t size4;
		unsigned char *publicName5;
		unsigned char *t6;
		buffer2 = (&zself->nameBuffer);
		MemoryBuffer_removeAll634(buffer2);
		MemoryBuffer_addByte632(buffer2, ((unsigned char)95U));
		name3 = _string666(((Definition32 *)zf)->name);
		MemoryBuffer_addBlock633(buffer2, ((void *)name3), _toByteSize670(_size325(name3)));
		MemoryBuffer_addUnsignedToBuffer256(buffer2, zself->nameIndex);
		MemoryBuffer_addByte632(buffer2, ((unsigned char)0U));
		(++zself->nameIndex);
		size4 = MemoryBuffer_size630(buffer2);
		publicName5 = ((unsigned char *)MemoryPool_allocateBytes297(zself->program->pool, size4));
		_copyBytes259(((void *)publicName5), ((void *)MemoryBuffer_base629(buffer2)), size4);
		t6 = publicName5;
		return t6;
	}
}

static void MemoryBuffer_add931(MemoryBuffer159 *zself, unsigned char zx)
{
	size_t size1;
	size1 = ((size_t)0x0000000000000001U);
	(*((unsigned char *)MemoryBuffer_reserve635(zself, size1))) = zx;
	(zself->used += size1);
}

static void _copyArray932(void *zdst, void *zsrc, int zn)
{
	_copyBytes259(zdst, zsrc, (((size_t)0x0000000000000004U) * ((size_t )zn)));
}

static void _freeArray933(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000004U));
	_freeBytes258(zp, bytes1);
}

static char Vector_notEmpty934(Vector176 *zself)
{
	char t1;
	t1 = (!Vector_isEmpty658(zself));
	return t1;
}

static void CodeGenerator_initialize935(CodeGenerator1 *zself, Program5 *zprogram, char zdebug, char zdump)
{
	unsigned char **p1;
	zself->program = zprogram;
	zself->pool = zprogram->pool;
	StringBuffer_initializeWithSize271((&zself->cBuffer), 1048576);
	StringBuffer_initialize270((&zself->nameBuffer));
	zself->cblock = ((CBlock208 *)0);
	StringBuffer_initialize270((&zself->indentBuffer));
	zself->globalIndex = 1;
	Vector_initialize1012((&zself->structures));
	IdentitySet_initialize1019((&zself->reservedIds));
	p1 = A1683;
	while((char)(p1[((size_t)0x0000000000000000U)] != ((unsigned char *)0)))
	{
		IdentitySet_add1020((&zself->reservedIds), IdentifierDictionary__at468((&zprogram->identifiers), p1[((size_t)0x0000000000000000U)]));
		(++p1);
	}
}

static void CodeGenerator_release936(CodeGenerator1 *zself)
{
	Vector_release1014((&zself->structures));
	StringBuffer_release272((&zself->indentBuffer));
	StringBuffer_release272((&zself->nameBuffer));
	StringBuffer_release272((&zself->cBuffer));
}

static Error162 *CodeGenerator_generate937(CodeGenerator1 *zself, unsigned char *zoutFilename)
{
	Program5 *program1;
	Collection6 *modules2;
	int n3;
	unsigned char *buf4;
	unsigned char *q5;
	unsigned char *p6;
	unsigned char *limit7;
	File166 *f8;
	Error162 *err9;
	size_t written10;
	Error162 *err211;
	File166 *t12;
	Error162 *t13;
	size_t t15;
	Error162 *t16;
	Error162 *t17;
	program1 = zself->program;
	modules2 = (&program1->modules);
	zself->out = (&zself->cBuffer);
	StringBuffer__shl367(zself->out, S1930);
	StringBuffer__shl367(zself->out, S1929);
	StringBuffer__shl367(zself->out, S1928);
	StringBuffer__shl367(zself->out, S1927);
	CodeGenerator_preDeclareStructures938(zself);
	CodeGenerator_defineStructures946(zself);
	CodeGenerator_declareFunctions940(zself);
	CodeGenerator_declareExternFunctions942(zself);
	CodeGenerator_declareGlobalVariables943(zself);
	CodeGenerator_declareStructureConstants944(zself);
	CodeGenerator_declareArrayConstants945(zself);
	CodeGenerator_defineString8Constants948(zself);
	CodeGenerator_defineString16Constants949(zself);
	CodeGenerator_defineStructureConstants950(zself);
	CodeGenerator_defineArrayConstants951(zself);
	CodeGenerator_defineGlobalVariables952(zself);
	CodeGenerator_defineFunctions953(zself);
	n3 = StringBuffer_size274((&zself->cBuffer));
	buf4 = _allocateArray1075(((int )n3));
	q5 = buf4;
	p6 = StringBuffer_base273((&zself->cBuffer));
	limit7 = (p6 + n3);
	while((char)(p6 != limit7))
	{
		q5[((size_t)0x0000000000000000U)] = ((unsigned char )p6[((size_t)0x0000000000000000U)]);
		(++p6);
		(++q5);
	}
	t12 = _openWrite357(zoutFilename, (&t13));
	f8 = t12;
	err9 = t13;
	if((char)(err9 != ((Error162 *)0)))
	{
		Error162 *t14;
		t14 = err9;
		return t14;
	}
	t15 = File_write361(f8, ((unsigned char *)buf4), ((size_t )n3), (&t16));
	written10 = t15;
	err211 = t16;
	err9 = Error__or1079(err9, err211);
	err9 = Error__or1079(err9, ((Error162 *)File_close359(f8)));
	_freeArray1087(((void *)buf4), ((int )n3));
	t17 = err9;
	return t17;
}

static void CodeGenerator_preDeclareStructures938(CodeGenerator1 *zself)
{
	{
		CollectionPool11 *self1;
		self1 = (&zself->program->structures);
		{
			Collection12 *self2;
			CollectionPoolElement190 *e3;
			self2 = ((Collection12 *)self1);
			e3 = self2->firstElement;
			while((char)(e3 != ((CollectionPoolElement190 *)0)))
			{
				{
					{
						StructureType104 *s4;
						s4 = e3->object;
						CodeGenerator_scanStructure939(zself, s4);
					}
				}
				e3 = e3->nextSibling;
			}
		}
	}
	{
		CollectionPool11 *self5;
		self5 = (&zself->program->structures);
		{
			Collection12 *self6;
			CollectionPoolElement190 *e7;
			self6 = ((Collection12 *)self5);
			e7 = self6->firstElement;
			while((char)(e7 != ((CollectionPoolElement190 *)0)))
			{
				{
					{
						StructureType104 *s8;
						unsigned char *name9;
						s8 = e7->object;
						name9 = Type_cname999(((Type98 *)s8));
						StringBuffer__shl367(StringBuffer__shl367(StringBuffer__shl365(StringBuffer__shl367(StringBuffer__shl367(zself->out, S1926), name9), ((unsigned char)32U)), name9), S1925);
					}
				}
				e7 = e7->nextSibling;
			}
		}
	}
}

static void CodeGenerator_scanStructure939(CodeGenerator1 *zself, StructureType104 *zs)
{
	unsigned char *name1;
	if((char)(((Type98 *)zs)->generator != ((void *)0)))
	{
		return;
	}
	name1 = CodeGenerator_getGlobal984(zself, _string666(zs->name));
	((Type98 *)zs)->generator = ((void *)name1);
	if((!zs->used))
	{
		return;
	}
	if((char)(zs->parentStructure != ((StructureType104 *)0)))
	{
		CodeGenerator_scanStructure939(zself, zs->parentStructure);
	}
	{
		{
			Collection105 *self2;
			Attribute107 *e3;
			self2 = (&zs->attributes);
			e3 = self2->firstElement;
			while((char)(e3 != ((Attribute107 *)0)))
			{
				{
					{
						Type98 *type4;
						e3->generator = ((void *)CodeGenerator_getIdentifier986(zself, ((Definition32 *)e3)->name));
						type4 = e3->storageType;
						while(Type_isArray550(type4))
						{
							type4 = Type_asArray534(type4)->cellType;
						}
						if(Type_isStructure549(type4))
						{
							CodeGenerator_scanStructure939(zself, Type_asStructure535(type4));
						}
					}
				}
				e3 = e3->nextSibling;
			}
		}
	}
	Vector_add1016((&zself->structures), zs);
}

static void CodeGenerator_declareFunctions940(CodeGenerator1 *zself)
{
	{
		Program5 *self1;
		self1 = zself->program;
		{
			CollectionPool13 *self2;
			self2 = (&self1->functions);
			{
				Collection14 *self3;
				CollectionPoolElement191 *e4;
				self3 = ((Collection14 *)self2);
				e4 = self3->firstElement;
				while((char)(e4 != ((CollectionPoolElement191 *)0)))
				{
					{
						{
							Function33 *f5;
							f5 = e4->object;
							if(((Prototype31 *)f5)->used)
							{
								{
									if(f5->isMacro)
									{
										((Prototype31 *)f5)->generator = ((void *)0);
									}
									else
									{
										int index6;
										((Prototype31 *)f5)->generator = ((void *)CodeGenerator_getFunctionName987(zself, f5));
										index6 = 0;
										{
											Function33 *self7;
											self7 = f5;
											{
												Collection34 *self8;
												Parameter35 *e9;
												self8 = (&self7->parameters);
												e9 = self8->firstElement;
												while((char)(e9 != ((Parameter35 *)0)))
												{
													{
														{
															if((!Type_isMeta554(e9->type)))
															{
																e9->generator = ((void *)CodeGenerator_getFunctionParameterName941(zself, ((Definition32 *)e9)->name, index6));
																(++index6);
															}
														}
													}
													e9 = e9->nextSibling;
												}
											}
										}
										StringBuffer__shl367(zself->out, (f5->entry?S1915:S1914));
										StringBuffer_flushFunctionDeclaration991(zself->out, f5);
										StringBuffer__shl367(zself->out, S1925);
									}
								}
							}
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
	}
}

static unsigned char *CodeGenerator_getFunctionParameterName941(CodeGenerator1 *zself, void *zid, int zindex)
{
	StringBuffer2 *out1;
	unsigned char *t2;
	out1 = (&zself->nameBuffer);
	StringBuffer_removeAll286(out1);
	if((char)(zid != ((void *)0)))
	{
		StringBuffer__shl365(out1, ((unsigned char)122U));
		StringBuffer__shl862(out1, _string666(zid));
	}
	else
	{
		StringBuffer__shl365(out1, ((unsigned char)118U));
		StringBuffer__shl1039(out1, zindex);
		StringBuffer__shl365(out1, ((unsigned char)120U));
	}
	t2 = MemoryPool_newString251(zself->pool, StringBuffer_string289(out1));
	return t2;
}

static void CodeGenerator_declareExternFunctions942(CodeGenerator1 *zself)
{
	{
		Program5 *self1;
		self1 = zself->program;
		{
			CollectionPool15 *self2;
			self2 = (&self1->externFunctions);
			{
				Collection16 *self3;
				CollectionPoolElement192 *e4;
				self3 = ((Collection16 *)self2);
				e4 = self3->firstElement;
				while((char)(e4 != ((CollectionPoolElement192 *)0)))
				{
					{
						{
							ExternFunction36 *f5;
							f5 = e4->object;
							if(((Prototype31 *)f5)->used)
							{
								{
									CExternFunctionExpression239 e6;
									((Prototype31 *)f5)->generator = ((void *)CodeGenerator_getExternFunctionName988(zself, f5));
									StringBuffer__shl367(zself->out, S1915);
									CExternFunctionExpression_initialize1050((&e6), f5);
									StringBuffer_flushDeclaration993(zself->out, Prototype_functionType995(((Prototype31 *)f5)), ((CExpression221 *)(&e6)));
									StringBuffer__shl367(zself->out, S1925);
								}
							}
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
	}
}

static void CodeGenerator_declareGlobalVariables943(CodeGenerator1 *zself)
{
	{
		Program5 *self1;
		self1 = zself->program;
		{
			CollectionPool17 *self2;
			self2 = (&self1->globalVariables);
			{
				Collection18 *self3;
				CollectionPoolElement193 *e4;
				self3 = ((Collection18 *)self2);
				e4 = self3->firstElement;
				while((char)(e4 != ((CollectionPoolElement193 *)0)))
				{
					{
						{
							GlobalVariable97 *v5;
							v5 = e4->object;
							if(v5->used)
							{
								{
									unsigned char *name6;
									name6 = CodeGenerator_getGlobal984(zself, _string666(((Definition32 *)v5)->name));
									v5->generator = ((void *)name6);
									StringBuffer__shl367(zself->out, S1915);
									StringBuffer_flushStringDeclaration992(zself->out, v5->storageType, name6);
									StringBuffer__shl367(zself->out, S1925);
								}
							}
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
	}
}

static void CodeGenerator_declareStructureConstants944(CodeGenerator1 *zself)
{
	{
		Program5 *self1;
		StructureExpression68 *c2;
		self1 = zself->program;
		c2 = self1->structureConstants;
		while((char)(c2 != ((StructureExpression68 *)0)))
		{
			{
				unsigned char *name3;
				name3 = CodeGenerator_getGlobal984(zself, S1910);
				((Expression21 *)c2)->generator = ((void *)name3);
				StringBuffer__shl367(zself->out, S1915);
				StringBuffer_flushStringDeclaration992(zself->out, ((Type98 *)c2->structure), name3);
				StringBuffer__shl367(zself->out, S1925);
			}
			c2 = c2->next;
		}
	}
}

static void CodeGenerator_declareArrayConstants945(CodeGenerator1 *zself)
{
	{
		Program5 *self1;
		ArrayExpression69 *c2;
		self1 = zself->program;
		c2 = self1->arrayConstants;
		while((char)(c2 != ((ArrayExpression69 *)0)))
		{
			{
				unsigned char *name3;
				name3 = CodeGenerator_getGlobal984(zself, S1909);
				((Expression21 *)c2)->generator = ((void *)name3);
				StringBuffer__shl367(zself->out, S1915);
				StringBuffer_flushStringDeclaration992(zself->out, ((Type98 *)c2->arrayType), name3);
				StringBuffer__shl367(zself->out, S1925);
			}
			c2 = c2->next;
		}
	}
}

static void CodeGenerator_defineStructures946(CodeGenerator1 *zself)
{
	StringBuffer__shl367(zself->out, S1924);
	{
		Vector3 *self1;
		int i2;
		int n3;
		self1 = (&zself->structures);
		i2 = 0;
		n3 = self1->size;
		while((char)(i2 < n3))
		{
			{
				StructureType104 *s4;
				s4 = Vector__at1015(self1, i2);
				StringBuffer__shl367(zself->out, S1923);
				StringBuffer__shl367(zself->out, Type_cname999(((Type98 *)s4)));
				StringBuffer__shl367(zself->out, S1922);
				if(StructureType_isFlexible1032(s4->parentStructure))
				{
					CodeGenerator_generateAttributes947(zself, s4, 1);
				}
				else
				{
					if((char)(s4->parentStructure != ((StructureType104 *)0)))
					{
						StringBuffer__shl367(zself->out, S1921);
						StringBuffer_flushStringDeclaration992(zself->out, ((Type98 *)s4->parentStructure), S1920);
						StringBuffer__shl367(zself->out, S1925);
					}
					{
						StructureType104 *self5;
						self5 = s4;
						{
							Collection105 *self6;
							Attribute107 *e7;
							self6 = (&self5->attributes);
							e7 = self6->firstElement;
							while((char)(e7 != ((Attribute107 *)0)))
							{
								{
									{
										StringBuffer__shl367(zself->out, S1921);
										StringBuffer_flushStringDeclaration992(zself->out, e7->storageType, Attribute_cname1005(e7));
										StringBuffer__shl367(zself->out, S1925);
									}
								}
								e7 = e7->nextSibling;
							}
						}
					}
				}
				if((char)(((Type98 *)s4)->size == ((size_t)0x0000000000000000U)))
				{
					StringBuffer__shl367(zself->out, S1919);
				}
				StringBuffer__shl367(zself->out, S1918);
			}
			(++i2);
		}
	}
}

static void CodeGenerator_generateAttributes947(CodeGenerator1 *zself, StructureType104 *zs, char zincludeEmpty)
{
	if((char)(zs->parentStructure != ((StructureType104 *)0)))
	{
		StringBuffer__shl367(zself->out, S1792);
		CodeGenerator_generateAttributes947(zself, zs->parentStructure, 0);
		StringBuffer__shl367(zself->out, S1791);
	}
	{
		{
			Collection105 *self1;
			Attribute107 *e2;
			self1 = (&zs->attributes);
			e2 = self1->firstElement;
			while((char)(e2 != ((Attribute107 *)0)))
			{
				{
					{
						if((zincludeEmpty || (char)(e2->storageType->size != ((size_t)0x0000000000000000U))))
						{
							StringBuffer__shl367(zself->out, S1921);
							StringBuffer_flushStringDeclaration992(zself->out, e2->storageType, Attribute_cname1005(e2));
							StringBuffer__shl367(zself->out, S1925);
						}
					}
				}
				e2 = e2->nextSibling;
			}
		}
	}
}

static void CodeGenerator_defineString8Constants948(CodeGenerator1 *zself)
{
	StringBuffer__shl367(zself->out, S1908);
	{
		Program5 *self1;
		String8Expression66 *c2;
		self1 = zself->program;
		c2 = self1->string8Constants;
		while((char)(c2 != ((String8Expression66 *)0)))
		{
			{
				unsigned char *name3;
				unsigned char *p4;
				name3 = CodeGenerator_getGlobal984(zself, S1910);
				((Expression21 *)c2)->generator = ((void *)name3);
				StringBuffer__shl367(StringBuffer__shl367(StringBuffer__shl367(zself->out, S1907), name3), S1906);
				p4 = c2->value;
				for(;;)
				{
					unsigned char c7;
					c7 = p4[((size_t)0x0000000000000000U)];
					(++p4);
					if(_isNul332(c7))
					{
						goto L5;
					}
					StringBuffer_flushChar998(zself->out, ((unsigned int )c7));
				}
				L5: ;
				StringBuffer__shl367(zself->out, S1894);
			}
			c2 = c2->next;
		}
	}
}

static void CodeGenerator_defineString16Constants949(CodeGenerator1 *zself)
{
	StringBuffer__shl367(zself->out, S1893);
	{
		Program5 *self1;
		String16Expression67 *c2;
		self1 = zself->program;
		c2 = self1->string16Constants;
		while((char)(c2 != ((String16Expression67 *)0)))
		{
			{
				unsigned char *name3;
				unsigned short *p4;
				name3 = CodeGenerator_getGlobal984(zself, S1910);
				((Expression21 *)c2)->generator = ((void *)name3);
				StringBuffer__shl367(StringBuffer__shl367(StringBuffer__shl367(zself->out, S1892), name3), S1891);
				p4 = c2->value;
				for(;;)
				{
					unsigned short c7;
					c7 = p4[((size_t)0x0000000000000000U)];
					(++p4);
					if(_isNul1060(c7))
					{
						goto L5;
					}
					StringBuffer_flushChar998(zself->out, ((unsigned int )c7));
				}
				L5: ;
				StringBuffer__shl367(zself->out, S1894);
			}
			c2 = c2->next;
		}
	}
}

static void CodeGenerator_defineStructureConstants950(CodeGenerator1 *zself)
{
	StringBuffer__shl367(zself->out, S1890);
	{
		Program5 *self1;
		StructureExpression68 *c2;
		self1 = zself->program;
		c2 = self1->structureConstants;
		while((char)(c2 != ((StructureExpression68 *)0)))
		{
			{
				ConstantWriter240 iter3;
				StringBuffer_flushStringDeclaration992(zself->out, ((Type98 *)c2->structure), Expression_cname1011(((Expression21 *)c2)));
				StringBuffer__shl365(StringBuffer__shl365(zself->out, ((unsigned char)61U)), ((unsigned char)123U));
				ConstantWriter_initialize1066((&iter3), c2->values);
				CodeGenerator_readConstantStructure954(zself, c2->structure, (&iter3));
				StringBuffer__shl367(zself->out, S1918);
			}
			c2 = c2->next;
		}
	}
}

static void CodeGenerator_defineArrayConstants951(CodeGenerator1 *zself)
{
	StringBuffer__shl367(zself->out, S1889);
	{
		Program5 *self1;
		ArrayExpression69 *c2;
		self1 = zself->program;
		c2 = self1->arrayConstants;
		while((char)(c2 != ((ArrayExpression69 *)0)))
		{
			{
				if((char)(((Collection63 *)c2->values)->size == 0))
				{
					c2->arrayType->arraySize = ((size_t)0x0000000000000001U);
					StringBuffer_flushStringDeclaration992(zself->out, ((Type98 *)c2->arrayType), Expression_cname1011(((Expression21 *)c2)));
					c2->arrayType->arraySize = ((size_t)0x0000000000000000U);
				}
				else
				{
					ConstantWriter240 iter3;
					StringBuffer_flushStringDeclaration992(zself->out, ((Type98 *)c2->arrayType), Expression_cname1011(((Expression21 *)c2)));
					StringBuffer__shl365(zself->out, ((unsigned char)61U));
					ConstantWriter_initialize1066((&iter3), c2->values);
					CodeGenerator_readConstantArray955(zself, c2->arrayType, (&iter3));
				}
				StringBuffer__shl367(zself->out, S1925);
			}
			c2 = c2->next;
		}
	}
}

static void CodeGenerator_defineGlobalVariables952(CodeGenerator1 *zself)
{
	StringBuffer__shl367(zself->out, S1888);
	{
		Program5 *self1;
		self1 = zself->program;
		{
			CollectionPool17 *self2;
			self2 = (&self1->globalVariables);
			{
				Collection18 *self3;
				CollectionPoolElement193 *e4;
				self3 = ((Collection18 *)self2);
				e4 = self3->firstElement;
				while((char)(e4 != ((CollectionPoolElement193 *)0)))
				{
					{
						{
							GlobalVariable97 *v5;
							v5 = e4->object;
							if(v5->used)
							{
								{
									Expression21 *initialValue6;
									initialValue6 = v5->initialValue;
									StringBuffer_flushStringDeclaration992(zself->out, v5->storageType, GlobalVariable_cname1010(v5));
									if((char)(initialValue6 != ((Expression21 *)0)))
									{
										StringBuffer__shl367(zself->out, S1887);
										StringBuffer__shl1047(zself->out, CodeGenerator_generateExpression974(zself, initialValue6));
									}
									StringBuffer__shl367(zself->out, S1925);
								}
							}
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
	}
}

static void CodeGenerator_defineFunctions953(CodeGenerator1 *zself)
{
	StringBuffer__shl367(zself->out, S1886);
	{
		Program5 *self1;
		self1 = zself->program;
		{
			CollectionPool13 *self2;
			self2 = (&self1->functions);
			{
				Collection14 *self3;
				CollectionPoolElement191 *e4;
				self3 = ((Collection14 *)self2);
				e4 = self3->firstElement;
				while((char)(e4 != ((CollectionPoolElement191 *)0)))
				{
					{
						{
							Function33 *f5;
							f5 = e4->object;
							if(((Prototype31 *)f5)->used)
							{
								{
									if((!f5->isMacro))
									{
										CBlock208 *cblock6;
										zself->localIndex = 1;
										zself->currentFunction = f5;
										zself->unwindItem = ((UnwindItem243 *)0);
										Function_prepareLocals723(f5);
										cblock6 = CodeGenerator_generateBlock957(zself, f5->body);
										if((!f5->entry))
										{
											StringBuffer__shl367(zself->out, S1914);
										}
										StringBuffer_flushFunctionDeclaration991(zself->out, f5);
										StringBuffer__shl367(zself->out, S1911);
										CBlock_write1070(cblock6, zself->out, (&zself->indentBuffer));
										StringBuffer__shl367(zself->out, S1911);
									}
								}
							}
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
	}
}

static void CodeGenerator_readConstantStructure954(CodeGenerator1 *zself, StructureType104 *zstructure, ConstantWriter240 *ziter)
{
	if((char)(zstructure->parentStructure != ((StructureType104 *)0)))
	{
		CodeGenerator_readConstantStructure954(zself, zstructure->parentStructure, ziter);
	}
	{
		{
			Collection105 *self1;
			Attribute107 *e2;
			self1 = (&zstructure->attributes);
			e2 = self1->firstElement;
			while((char)(e2 != ((Attribute107 *)0)))
			{
				{
					{
						CodeGenerator_readConstantValue956(zself, e2->storageType, ziter);
					}
				}
				e2 = e2->nextSibling;
			}
		}
	}
	if((char)(((Type98 *)zstructure)->size == ((size_t)0x0000000000000000U)))
	{
		if(ziter->comma)
		{
			StringBuffer__shl367(zself->out, S1954);
		}
		ziter->comma = 1;
		StringBuffer__shl365(zself->out, ((unsigned char)48U));
	}
}

static void CodeGenerator_readConstantArray955(CodeGenerator1 *zself, ArrayType102 *zarrayType, ConstantWriter240 *ziter)
{
	if(ziter->comma)
	{
		StringBuffer__shl367(zself->out, S1954);
	}
	ziter->comma = 0;
	StringBuffer__shl365(zself->out, ((unsigned char)123U));
	if(ExpressionIterator_isEOF1063(((ExpressionIterator65 *)ziter)))
	{
	}
	else
	{
		Type98 *cellType1;
		size_t n2;
		size_t i3;
		cellType1 = zarrayType->cellType;
		n2 = zarrayType->arraySize;
		i3 = ((size_t)0x0000000000000000U);
		for(;;)
		{
			if((char)(n2 == ((size_t)0x0000000000000000U)))
			{
				if(ExpressionIterator_isEOF1063(((ExpressionIterator65 *)ziter)))
				{
					goto L4;
				}
			}
			else
			{
				if((char)(i3 == n2))
				{
					goto L4;
				}
			}
			CodeGenerator_readConstantValue956(zself, cellType1, ziter);
			(++i3);
		}
		L4: ;
	}
	StringBuffer__shl365(zself->out, ((unsigned char)125U));
}

static void CodeGenerator_readConstantValue956(CodeGenerator1 *zself, Type98 *ztype, ConstantWriter240 *ziter)
{
	if(Type_isStructure549(ztype))
	{
		CodeGenerator_readConstantStructure954(zself, Type_asStructure535(ztype), ziter);
	}
	else
	{
		if(Type_isArray550(ztype))
		{
			CodeGenerator_readConstantArray955(zself, Type_asArray534(ztype), ziter);
		}
		else
		{
			if(ziter->comma)
			{
				StringBuffer__shl367(zself->out, S1954);
			}
			ziter->comma = 1;
			StringBuffer__shl1047(zself->out, CodeGenerator_generateExpressionWithType973(zself, ExpressionIterator_value1064(((ExpressionIterator65 *)ziter)), ztype));
			ExpressionIterator_next1065(((ExpressionIterator65 *)ziter));
		}
	}
}

static CBlock208 *CodeGenerator_generateBlock957(CodeGenerator1 *zself, Block38 *zblock)
{
	CBlock208 *cblock1;
	CBlock208 *t2;
	CBlock208 *t12;
	{
		CBlock208 *cblock3;
		CBlock208 *saveBlock4;
		cblock3 = MemoryPool_new1108(zself->pool);
		saveBlock4 = zself->cblock;
		zself->cblock = cblock3;
		{
			UnwindItem243 *startUnwind5;
			startUnwind5 = zself->unwindItem;
			{
				Collection39 *self6;
				Variable41 *e7;
				self6 = (&zblock->variables);
				e7 = self6->firstElement;
				while((char)(e7 != ((Variable41 *)0)))
				{
					{
						unsigned char *name8;
						name8 = CodeGenerator_getLocal985(zself, _string666(((Definition32 *)e7)->name));
						CodeGenerator_declareLocal989(zself, e7->storageType, name8);
						e7->generator = ((void *)name8);
					}
					e7 = e7->nextSibling;
				}
			}
			{
				Collection40 *self9;
				Instruction44 *e10;
				self9 = (&zblock->instructions);
				e10 = self9->firstElement;
				while((char)(e10 != ((Instruction44 *)0)))
				{
					{
						CodeGenerator_generateInstruction958(zself, e10);
					}
					e10 = e10->nextSibling;
				}
			}
			if((!zblock->terminated))
			{
				CodeGenerator_generateUnwindTo971(zself, startUnwind5);
			}
			zself->unwindItem = startUnwind5;
		}
		zself->cblock = saveBlock4;
		t2 = cblock3;
		goto L11;
	}
	L11: ;
	cblock1 = t2;
	t12 = cblock1;
	return t12;
}

static void CodeGenerator_generateInstruction958(CodeGenerator1 *zself, Instruction44 *zi)
{
	switch( zi->code )
	{
	case 0:
	{
		CodeGenerator_generateEvaluate959(zself, Instruction_asEvaluate1115(zi));
	}
	break;
	case 2:
	{
		CodeGenerator_generateVariable960(zself, Instruction_asVariable1117(zi));
	}
	break;
	case 1:
	{
		CodeGenerator_generateAssign961(zself, Instruction_asAssign1116(zi));
	}
	break;
	case 3:
	{
		CodeGenerator_generateReturn968(zself, Instruction_asReturn1118(zi));
	}
	break;
	case 4:
	{
		CodeGenerator_generateLeave969(zself, Instruction_asLeave1119(zi));
	}
	break;
	case 7:
	{
		CodeGenerator_generateIf962(zself, Instruction_asIf1121(zi));
	}
	break;
	case 5:
	{
		CodeGenerator_generateWhile964(zself, Instruction_asWhile1122(zi));
	}
	break;
	case 8:
	{
		CodeGenerator_generateBreak965(zself, Instruction_asBreak1123(zi));
	}
	break;
	case 9:
	{
		CodeGenerator_generateContinue966(zself, Instruction_asBreak1123(zi));
	}
	break;
	case 6:
	{
		CodeGenerator_generateSwitch967(zself, Instruction_asSwitch1120(zi));
	}
	break;
	case 10:
	{
		Collection_add1072((&zself->cblock->body), ((CStatement206 *)CodeGenerator_generateBlock957(zself, Instruction_asBlock1124(zi)->block)));
	}
	break;
	case 11:
	{
		CodeGenerator_generateDefer970(zself, Instruction_asDefer1125(zi));
	}
	break;
	default:
	{
		_assertFailure1193(S1859);
	}
	}
}

static void CodeGenerator_generateEvaluate959(CodeGenerator1 *zself, EvaluateInstruction46 *zi)
{
	{
		CollectionPool62 *self1;
		self1 = ((CollectionPool62 *)zi->values);
		{
			Collection63 *self2;
			CollectionPoolElement205 *e3;
			self2 = ((Collection63 *)self1);
			e3 = self2->firstElement;
			while((char)(e3 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *e4;
						CExpression221 *ce5;
						e4 = e3->object;
						ce5 = CodeGenerator_generateExpression974(zself, e4);
						if((char)(ce5 != ((CExpression221 *)0)))
						{
							Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1127(zself->pool, ce5)));
						}
					}
				}
				e3 = e3->nextSibling;
			}
		}
	}
}

static void CodeGenerator_generateVariable960(CodeGenerator1 *zself, VariableInstruction48 *zi)
{
	CodeGenerator_generateLoad981(zself, Variable_cname1003(zi->variable), zi->value, zi->variable->storageType);
}

static void CodeGenerator_generateAssign961(CodeGenerator1 *zself, AssignInstruction47 *zinstruction)
{
	ExpressionList61 *lvalues1;
	ExpressionList61 *rvalues2;
	CStringExpression234 **tvalues3;
	int n4;
	int i5;
	CollectionPoolElement205 *iterLeft6;
	CollectionPoolElement205 *iterRight7;
	Expression21 *left8;
	Type98 *type9;
	CExpression221 *cleft10;
	CExpression221 *cright11;
	CollectionPoolElement205 *iter12;
	lvalues1 = zinstruction->left;
	rvalues2 = zinstruction->right;
	tvalues3 = MemoryPool_allocateArray1141(zself->pool, (((Collection63 *)rvalues2)->size - 1));
	n4 = (((Collection63 *)rvalues2)->size - 1);
	i5 = 0;
	iterLeft6 = ((Collection63 *)lvalues1)->firstElement;
	iterRight7 = ((Collection63 *)rvalues2)->firstElement;
	while((char)(i5 < n4))
	{
		Expression21 *left13;
		Expression21 *right14;
		left13 = iterLeft6->object;
		right14 = iterRight7->object;
		tvalues3[i5] = CodeGenerator_generateAutoLoad980(zself, right14, left13->type);
		iterLeft6 = iterLeft6->nextSibling;
		iterRight7 = iterRight7->nextSibling;
		(++i5);
	}
	left8 = CollectionPool_last904(((CollectionPool62 *)lvalues1));
	type9 = left8->type;
	cleft10 = CodeGenerator_generateExpression974(zself, left8);
	cright11 = CodeGenerator_generateExpressionWithType973(zself, CollectionPool_last904(((CollectionPool62 *)rvalues2)), type9);
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1142(zself->pool, cleft10, cright11)));
	i5 = 0;
	iter12 = ((Collection63 *)lvalues1)->firstElement;
	while((char)(i5 < n4))
	{
		CExpression221 *left15;
		left15 = CodeGenerator_generateExpression974(zself, iter12->object);
		Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1143(zself->pool, left15, tvalues3[i5])));
		iter12 = iter12->nextSibling;
		(++i5);
	}
}

static void CodeGenerator_generateIf962(CodeGenerator1 *zself, IfInstruction51 *zi)
{
	CodeGenerator_generateCondition963(zself, (&zi->rules)->firstElement, zi->elseBlock);
}

static void CodeGenerator_generateCondition963(CodeGenerator1 *zself, Rule59 *zrule, Block38 *zelseBlock)
{
	CIf214 *c1;
	Rule59 *next2;
	c1 = MemoryPool_new1194(zself->pool);
	c1->condition = CodeGenerator_generateExpression974(zself, zrule->condition);
	c1->thenBlock = CodeGenerator_generateBlock957(zself, zrule->block);
	next2 = zrule->nextSibling;
	if((char)(next2 != ((Rule59 *)0)))
	{
		CBlock208 *t3;
		{
			CBlock208 *cblock4;
			CBlock208 *saveBlock5;
			cblock4 = MemoryPool_new1108(zself->pool);
			saveBlock5 = zself->cblock;
			zself->cblock = cblock4;
			{
				CodeGenerator_generateCondition963(zself, next2, zelseBlock);
			}
			zself->cblock = saveBlock5;
			t3 = cblock4;
			goto L6;
		}
		L6: ;
		c1->elseBlock = t3;
	}
	else
	{
		if((char)(zelseBlock != ((Block38 *)0)))
		{
			c1->elseBlock = CodeGenerator_generateBlock957(zself, zelseBlock);
		}
	}
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)c1));
}

static void CodeGenerator_generateWhile964(CodeGenerator1 *zself, WhileInstruction53 *zi)
{
	PWhile242 info1;
	CWhile215 *w2;
	if((zi->hasBreak || zi->hasContinue))
	{
		(&info1)->exitLabel = CodeGenerator_getLocal985(zself, S1871);
		(&info1)->continueLabel = CodeGenerator_getLocal985(zself, S1871);
		(&info1)->startUnwind = zself->unwindItem;
		((Instruction44 *)zi)->generator = ((void *)(&info1));
	}
	w2 = MemoryPool_new1166(zself->pool);
	w2->condition = ((char)(zi->condition != ((Expression21 *)0))?CodeGenerator_generateExpression974(zself, zi->condition):((CExpression221 *)0));
	w2->block = CodeGenerator_generateBlock957(zself, zi->block);
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)w2));
	if(zi->hasContinue)
	{
		Collection_add1072((&w2->block->body), ((CStatement206 *)MemoryPool_new1170(zself->pool, (&info1)->continueLabel)));
	}
	if(zi->hasBreak)
	{
		CodeGenerator_generateLabel982(zself, (&info1)->exitLabel);
	}
}

static void CodeGenerator_generateBreak965(CodeGenerator1 *zself, BreakInstruction54 *zi)
{
	PWhile242 *info1;
	info1 = ((PWhile242 *)((Instruction44 *)zi->instruction)->generator);
	CodeGenerator_generateUnwindTo971(zself, info1->startUnwind);
	CodeGenerator_generateGoto983(zself, info1->exitLabel);
}

static void CodeGenerator_generateContinue966(CodeGenerator1 *zself, BreakInstruction54 *zi)
{
	PWhile242 *info1;
	info1 = ((PWhile242 *)((Instruction44 *)zi->instruction)->generator);
	CodeGenerator_generateUnwindTo971(zself, info1->startUnwind);
	CodeGenerator_generateGoto983(zself, info1->continueLabel);
}

static void CodeGenerator_generateSwitch967(CodeGenerator1 *zself, SwitchInstruction55 *zi)
{
	CSwitch216 *sw1;
	sw1 = MemoryPool_new1175(zself->pool);
	sw1->value = CodeGenerator_generateExpression974(zself, zi->value);
	{
		Collection56 *self2;
		Choice60 *e3;
		self2 = (&zi->choices);
		e3 = self2->firstElement;
		while((char)(e3 != ((Choice60 *)0)))
		{
			{
				CChoice218 *cc4;
				cc4 = MemoryPool_new1188(zself->pool);
				Collection_add1180((&sw1->choices), cc4);
				{
					CollectionPool62 *self5;
					self5 = ((CollectionPool62 *)e3->values);
					{
						Collection63 *self6;
						CollectionPoolElement205 *e7;
						self6 = ((Collection63 *)self5);
						e7 = self6->firstElement;
						while((char)(e7 != ((CollectionPoolElement205 *)0)))
						{
							{
								{
									Expression21 *v8;
									v8 = e7->object;
									Collection_add1183((&cc4->values), CodeGenerator_generateExpression974(zself, v8));
								}
							}
							e7 = e7->nextSibling;
						}
					}
				}
				cc4->block = CodeGenerator_generateBlock957(zself, e3->block);
			}
			e3 = e3->nextSibling;
		}
	}
	if((char)(zi->elseBlock != ((Block38 *)0)))
	{
		sw1->elseBlock = CodeGenerator_generateBlock957(zself, zi->elseBlock);
	}
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)sw1));
}

static void CodeGenerator_generateReturn968(CodeGenerator1 *zself, ReturnInstruction49 *zinstruction)
{
	ExpressionList61 *values1;
	TypeSequence108 *returnTypes2;
	CReturn220 *statement3;
	int n4;
	int index5;
	values1 = zinstruction->expressions;
	returnTypes2 = ((Prototype31 *)zself->currentFunction)->returnTypes;
	statement3 = MemoryPool_new1145(zself->pool);
	n4 = ((Collection63 *)zinstruction->expressions)->size;
	index5 = 0;
	{
		CollectionPool62 *self6;
		self6 = ((CollectionPool62 *)zinstruction->expressions);
		{
			Collection63 *self7;
			CollectionPoolElement205 *e8;
			self7 = ((Collection63 *)self6);
			e8 = self7->firstElement;
			while((char)(e8 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *e9;
						e9 = e8->object;
						if((char)(index5 == 0))
						{
							statement3->value = ((CExpression221 *)CodeGenerator_generateAutoLoad980(zself, e9, TypeSequence__at603(returnTypes2, index5)));
						}
						else
						{
							CDereferenceExpression227 *left10;
							CExpression221 *ce11;
							left10 = MemoryPool_new1151(zself->pool, MemoryPool_new1149(zself->pool, index5));
							ce11 = CodeGenerator_generateExpressionWithType973(zself, e9, TypeSequence__at603(returnTypes2, index5));
							Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1155(zself->pool, left10, ce11)));
						}
						(++index5);
					}
				}
				e8 = e8->nextSibling;
			}
		}
	}
	CodeGenerator_generateUnwindTo971(zself, ((UnwindItem243 *)0));
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)statement3));
}

static void CodeGenerator_generateLeave969(CodeGenerator1 *zself, LeaveInstruction50 *zinstruction)
{
	MacroBlock86 *block1;
	LeaveContext241 *info2;
	int i3;
	unsigned char *exitLabel4;
	block1 = zinstruction->block;
	info2 = ((LeaveContext241 *)block1->generator);
	i3 = 0;
	{
		CollectionPool62 *self5;
		self5 = ((CollectionPool62 *)zinstruction->arguments);
		{
			Collection63 *self6;
			CollectionPoolElement205 *e7;
			self6 = ((Collection63 *)self5);
			e7 = self6->firstElement;
			while((char)(e7 != ((CollectionPoolElement205 *)0)))
			{
				{
					{
						Expression21 *e8;
						e8 = e7->object;
						CodeGenerator_generateLoad981(zself, info2->returnValues[i3], e8, TypeSequence__at603(info2->returnTypes, i3));
						(++i3);
					}
				}
				e7 = e7->nextSibling;
			}
		}
	}
	CodeGenerator_generateUnwindTo971(zself, info2->startUnwind);
	exitLabel4 = info2->exitLabel;
	if((char)(exitLabel4 == ((unsigned char *)0)))
	{
		exitLabel4 = CodeGenerator_getLocal985(zself, S1871);
		info2->exitLabel = exitLabel4;
	}
	CodeGenerator_generateGoto983(zself, exitLabel4);
}

static void CodeGenerator_generateDefer970(CodeGenerator1 *zself, DeferInstruction58 *zi)
{
	UnwindItem243 *item1;
	item1 = MemoryPool_allocate1191(zself->pool);
	item1->next = zself->unwindItem;
	item1->block = (&zi->block);
	zself->unwindItem = item1;
}

static void CodeGenerator_generateUnwindTo971(CodeGenerator1 *zself, UnwindItem243 *zlimit)
{
	UnwindItem243 *u1;
	u1 = zself->unwindItem;
	while((char)(u1 != zlimit))
	{
		CodeGenerator_generateUnwind972(zself, u1);
		u1 = u1->next;
	}
}

static void CodeGenerator_generateUnwind972(CodeGenerator1 *zself, UnwindItem243 *zitem)
{
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)CodeGenerator_generateBlock957(zself, zitem->block)));
}

static CExpression221 *CodeGenerator_generateExpressionWithType973(CodeGenerator1 *zself, Expression21 *ze, Type98 *ztype)
{
	CExpression221 *ce1;
	CExpression221 *t2;
	ce1 = CodeGenerator_generateExpression974(zself, ze);
	if((char)(ztype != ze->type))
	{
		ce1 = ((CExpression221 *)MemoryPool_new1198(zself->pool, ce1, ztype));
	}
	t2 = ce1;
	return t2;
}

static CExpression221 *CodeGenerator_generateExpression974(CodeGenerator1 *zself, Expression21 *ze)
{
	switch( ze->code )
	{
	case 8:
	{
		SelectExpression87 *select1;
		Expression21 *composite2;
		unsigned char **array3;
		CExpression221 *t4;
		select1 = Expression_asSelect494(ze);
		composite2 = select1->argument;
		if((char)(composite2->generator == ((void *)0)))
		{
			CodeGenerator_generateExpression974(zself, composite2);
		}
		array3 = ((unsigned char **)composite2->generator);
		t4 = ((CExpression221 *)MemoryPool_new1131(zself->pool, array3[select1->index]));
		return t4;
	}
	break;
	case 0:
	{
		CExpression221 *t5;
		t5 = ((CExpression221 *)MemoryPool_new1203(zself->pool, Expression_asConstantInteger477(ze)));
		return t5;
	}
	break;
	case 3:
	{
		CExpression221 *t6;
		t6 = ((CExpression221 *)MemoryPool_new1213(zself->pool, MemoryPool_new1131(zself->pool, Expression_cname1011(ze))));
		return t6;
	}
	break;
	case 4:
	{
		CExpression221 *t7;
		t7 = ((CExpression221 *)MemoryPool_new1131(zself->pool, Expression_cname1011(ze)));
		return t7;
	}
	break;
	case 5:
	{
		CExpression221 *t8;
		t8 = ((CExpression221 *)MemoryPool_new1131(zself->pool, Prototype_cname1000(Expression_asConstantFunction482(ze)->value)));
		return t8;
	}
	break;
	case 1:
	{
		CExpression221 *t9;
		t9 = ((CExpression221 *)MemoryPool_new1131(zself->pool, Expression_cname1011(ze)));
		return t9;
	}
	break;
	case 2:
	{
		CExpression221 *t10;
		t10 = ((CExpression221 *)MemoryPool_new1131(zself->pool, Expression_cname1011(ze)));
		return t10;
	}
	break;
	case 6:
	{
		GlobalVariable97 *v11;
		v11 = Expression_asConstantGlobal483(ze)->variable;
		if(Type_isArray550(v11->storageType))
		{
			CExpression221 *t12;
			t12 = ((CExpression221 *)MemoryPool_new1131(zself->pool, GlobalVariable_cname1010(v11)));
			return t12;
		}
		else
		{
			CExpression221 *t13;
			t13 = ((CExpression221 *)MemoryPool_new1213(zself->pool, MemoryPool_new1131(zself->pool, GlobalVariable_cname1010(v11))));
			return t13;
		}
	}
	break;
	case 20:
	{
		CExpression221 *t14;
		t14 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1843));
		return t14;
	}
	break;
	case 21:
	{
		CExpression221 *t15;
		t15 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1842));
		return t15;
	}
	break;
	case 17:
	{
		CondExpression82 *c16;
		TypeSequence108 *returnTypes17;
		CExpression221 *condition18;
		int numReturns19;
		c16 = Expression_asCond488(ze);
		returnTypes17 = ((CompositeExpression75 *)c16)->types;
		condition18 = CodeGenerator_generateExpression974(zself, c16->condition);
		numReturns19 = returnTypes17->size;
		if((char)(numReturns19 > 1))
		{
			CIf214 *s20;
			unsigned char **array21;
			CollectionPoolElement205 *a122;
			CollectionPoolElement205 *a223;
			CBlock208 *t27;
			CBlock208 *t33;
			CExpression221 *t39;
			s20 = MemoryPool_new1194(zself->pool);
			s20->condition = condition18;
			array21 = MemoryPool_allocateArray1226(zself->pool, numReturns19);
			ze->generator = ((void *)array21);
			{
				int self24;
				int i25;
				self24 = numReturns19;
				i25 = 0;
				while((char)(i25 < self24))
				{
					{
						unsigned char *name26;
						name26 = CodeGenerator_getLocal985(zself, S1876);
						array21[i25] = name26;
						CodeGenerator_declareLocal989(zself, TypeSequence__at603(returnTypes17, i25), name26);
					}
					(++i25);
				}
			}
			a122 = ((Collection63 *)c16->argument1)->firstElement;
			{
				CBlock208 *cblock28;
				CBlock208 *saveBlock29;
				cblock28 = MemoryPool_new1108(zself->pool);
				saveBlock29 = zself->cblock;
				zself->cblock = cblock28;
				{
					{
						int self30;
						int i31;
						self30 = numReturns19;
						i31 = 0;
						while((char)(i31 < self30))
						{
							{
								Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1135(zself->pool, MemoryPool_new1131(zself->pool, array21[i31]), CodeGenerator_generateExpressionWithType973(zself, a122->object, TypeSequence__at603(returnTypes17, i31)))));
								a122 = a122->nextSibling;
							}
							(++i31);
						}
					}
				}
				zself->cblock = saveBlock29;
				t27 = cblock28;
				goto L32;
			}
			L32: ;
			s20->thenBlock = t27;
			a223 = ((Collection63 *)c16->argument2)->firstElement;
			{
				CBlock208 *cblock34;
				CBlock208 *saveBlock35;
				cblock34 = MemoryPool_new1108(zself->pool);
				saveBlock35 = zself->cblock;
				zself->cblock = cblock34;
				{
					{
						int self36;
						int i37;
						self36 = numReturns19;
						i37 = 0;
						while((char)(i37 < self36))
						{
							{
								Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1135(zself->pool, MemoryPool_new1131(zself->pool, array21[i37]), CodeGenerator_generateExpressionWithType973(zself, a223->object, TypeSequence__at603(returnTypes17, i37)))));
								a223 = a223->nextSibling;
							}
							(++i37);
						}
					}
				}
				zself->cblock = saveBlock35;
				t33 = cblock34;
				goto L38;
			}
			L38: ;
			s20->elseBlock = t33;
			Collection_add1072((&zself->cblock->body), ((CStatement206 *)s20));
			t39 = ((CExpression221 *)0);
			return t39;
		}
		else
		{
			CExpression221 *left40;
			CExpression221 *right41;
			CExpression221 *t42;
			left40 = CodeGenerator_generateExpressionWithType973(zself, ((Collection63 *)c16->argument1)->firstElement->object, TypeSequence__at603(returnTypes17, 0));
			right41 = CodeGenerator_generateExpressionWithType973(zself, ((Collection63 *)c16->argument2)->firstElement->object, TypeSequence__at603(returnTypes17, 0));
			t42 = ((CExpression221 *)MemoryPool_new1227(zself->pool, condition18, left40, right41));
			return t42;
		}
	}
	break;
	case 13:
	{
		FunctionCallExpression76 *call43;
		CExpression221 *t44;
		call43 = Expression_asFunctionCall489(ze);
		t44 = ((CExpression221 *)CodeGenerator_generateCall979(zself, ze, call43->arguments, ((Prototype31 *)call43->func)->returnTypes));
		return t44;
	}
	break;
	case 14:
	{
		ExternFunctionCallExpression77 *call45;
		CExpression221 *t46;
		call45 = Expression_asExternFunctionCall490(ze);
		t46 = ((CExpression221 *)CodeGenerator_generateCall979(zself, ze, call45->arguments, ((Prototype31 *)call45->func)->returnTypes));
		return t46;
	}
	break;
	case 67:
	{
		PointerCallExpression78 *call47;
		TypeSequence108 *returnTypes48;
		CExpression221 *t49;
		call47 = Expression_asPointerCall497(ze);
		returnTypes48 = Type_asFunction537(Type_asPointer533(call47->func->type)->target)->returnTypes;
		t49 = ((CExpression221 *)CodeGenerator_generateCall979(zself, ze, call47->arguments, returnTypes48));
		return t49;
	}
	break;
	case 10:
	{
		Parameter35 *parameter50;
		CExpression221 *t51;
		parameter50 = Expression_asParameter491(ze)->parameter;
		t51 = ((CExpression221 *)MemoryPool_new1131(zself->pool, Parameter_cname1001(parameter50)));
		return t51;
	}
	break;
	case 11:
	{
		Variable41 *variable52;
		CExpression221 *ce53;
		CExpression221 *t54;
		variable52 = Expression_asLocalVariable492(ze)->variable;
		ce53 = ((CExpression221 *)MemoryPool_new1131(zself->pool, Variable_cname1003(variable52)));
		if(Type_isStructure549(variable52->storageType))
		{
			ce53 = ((CExpression221 *)MemoryPool_new1243(zself->pool, ce53));
		}
		t54 = ce53;
		return t54;
	}
	break;
	case 12:
	{
		GlobalVariable97 *variable55;
		CExpression221 *t56;
		variable55 = Expression_asGlobalVariable493(ze)->variable;
		t56 = ((CExpression221 *)MemoryPool_new1131(zself->pool, GlobalVariable_cname1010(variable55)));
		return t56;
	}
	break;
	case 16:
	{
		AttributeExpression84 *ae57;
		Attribute107 *attribute58;
		CExpression221 *s59;
		CExpression221 *ce60;
		CExpression221 *t61;
		ae57 = Expression_asAttribute485(ze);
		attribute58 = ae57->attribute;
		s59 = CodeGenerator_generateExpressionWithType973(zself, ae57->argument, ((Type98 *)Type_pointer524(((Type98 *)attribute58->structure))));
		ce60 = ((CExpression221 *)MemoryPool_new1246(zself->pool, s59, Attribute_cname1005(attribute58)));
		if(Type_isStructure549(attribute58->storageType))
		{
			ce60 = ((CExpression221 *)MemoryPool_new1243(zself->pool, ce60));
		}
		t61 = ce60;
		return t61;
	}
	break;
	case 18:
	{
		CExpression221 *t62;
		Collection_add1072((&zself->cblock->body), ((CStatement206 *)CodeGenerator_generateBlock957(zself, Expression_asVargsEach496(ze)->block)));
		t62 = ((CExpression221 *)0);
		return t62;
	}
	break;
	case 9:
	{
		UnaryExpression73 *c63;
		CExpression221 *t64;
		c63 = Expression_asUnary486(ze);
		t64 = CodeGenerator_generateExpressionWithType973(zself, c63->argument, ((Expression21 *)c63)->type);
		return t64;
	}
	break;
	case 15:
	{
		MacroCallExpression85 *call65;
		TypeSequence108 *returnTypes66;
		unsigned char *(returnValues67)[256];
		int i68;
		LeaveContext241 info69;
		int size70;
		call65 = Expression_asMacroCall495(ze);
		returnTypes66 = ((CompositeExpression75 *)call65)->types;
		i68 = 0;
		{
			TypeSequence108 *self71;
			self71 = returnTypes66;
			{
				int self72;
				int i73;
				self72 = self71->size;
				i73 = 0;
				while((char)(i73 < self72))
				{
					{
						{
							Type98 *type74;
							unsigned char *name75;
							type74 = TypeSequence__at603(self71, i73);
							name75 = CodeGenerator_getLocal985(zself, S1876);
							CodeGenerator_declareLocal989(zself, type74, name75);
							returnValues67[i68] = name75;
							(++i68);
						}
					}
					(++i73);
				}
			}
		}
		(&info69)->exitLabel = ((unsigned char *)0);
		(&info69)->returnTypes = returnTypes66;
		(&info69)->returnValues = ((unsigned char **)returnValues67);
		(&info69)->startUnwind = zself->unwindItem;
		call65->block->generator = ((void *)(&info69));
		Collection_add1072((&zself->cblock->body), ((CStatement206 *)CodeGenerator_generateBlock957(zself, ((Block38 *)call65->block))));
		if((char)((&info69)->exitLabel != ((unsigned char *)0)))
		{
			CodeGenerator_generateLabel982(zself, (&info69)->exitLabel);
		}
		size70 = returnTypes66->size;
		if((char)(size70 == 0))
		{
			CExpression221 *t76;
			t76 = ((CExpression221 *)0);
			return t76;
		}
		else
		{
			if((char)(size70 == 1))
			{
				CExpression221 *t77;
				t77 = ((CExpression221 *)MemoryPool_new1131(zself->pool, returnValues67[((size_t)0x0000000000000000U)]));
				return t77;
			}
			else
			{
				CExpression221 *t78;
				((Expression21 *)call65)->generator = ((void *)returnValues67);
				t78 = ((CExpression221 *)0);
				return t78;
			}
		}
	}
	break;
	case 22:
	{
		CExpression221 *t79;
		t79 = CodeGenerator_generateExpressionWithType973(zself, Expression_asUnary486(ze)->argument, ze->type);
		return t79;
	}
	break;
	case 23:
	{
		CExpression221 *t80;
		t80 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1839));
		return t80;
	}
	break;
	case 24:
	{
		CExpression221 *t81;
		t81 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1838));
		return t81;
	}
	break;
	case 25:
	case 26:
	{
		CExpression221 *t82;
		t82 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1837));
		return t82;
	}
	break;
	case 27:
	case 28:
	{
		CExpression221 *t83;
		t83 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1836));
		return t83;
	}
	break;
	case 29:
	case 30:
	{
		CExpression221 *t84;
		t84 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1835));
		return t84;
	}
	break;
	case 33:
	{
		CExpression221 *t85;
		t85 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1834));
		return t85;
	}
	break;
	case 34:
	case 35:
	{
		CExpression221 *t86;
		t86 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1833));
		return t86;
	}
	break;
	case 36:
	{
		CExpression221 *t87;
		t87 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1832));
		return t87;
	}
	break;
	case 37:
	{
		CExpression221 *t88;
		t88 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1831));
		return t88;
	}
	break;
	case 38:
	{
		CExpression221 *t89;
		t89 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1830));
		return t89;
	}
	break;
	case 39:
	{
		CExpression221 *t90;
		t90 = ((CExpression221 *)MemoryPool_new1253(zself->pool, S1829, CodeGenerator_generateExpression974(zself, Expression_asUnary486(ze)->argument)));
		return t90;
	}
	break;
	case 32:
	{
		CExpression221 *t91;
		t91 = CodeGenerator_generateExpression974(zself, Expression_asUnary486(ze)->argument);
		return t91;
	}
	break;
	case 31:
	{
		CExpression221 *t92;
		t92 = ((CExpression221 *)MemoryPool_new1253(zself->pool, S1828, CodeGenerator_generateExpression974(zself, Expression_asUnary486(ze)->argument)));
		return t92;
	}
	break;
	case 51:
	{
		CExpression221 *t93;
		t93 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1827));
		return t93;
	}
	break;
	case 52:
	{
		CExpression221 *t94;
		t94 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1826));
		return t94;
	}
	break;
	case 53:
	case 54:
	{
		CExpression221 *t95;
		t95 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1825));
		return t95;
	}
	break;
	case 55:
	case 56:
	{
		CExpression221 *t96;
		t96 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1824));
		return t96;
	}
	break;
	case 57:
	case 58:
	{
		CExpression221 *t97;
		t97 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1823));
		return t97;
	}
	break;
	case 59:
	{
		CExpression221 *t98;
		t98 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1822));
		return t98;
	}
	break;
	case 60:
	case 61:
	{
		CExpression221 *t99;
		t99 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1821));
		return t99;
	}
	break;
	case 62:
	{
		CExpression221 *t100;
		t100 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1820));
		return t100;
	}
	break;
	case 63:
	{
		CExpression221 *t101;
		t101 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1819));
		return t101;
	}
	break;
	case 64:
	{
		CExpression221 *t102;
		t102 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1818));
		return t102;
	}
	break;
	case 65:
	{
		CExpression221 *t103;
		t103 = ((CExpression221 *)MemoryPool_new1253(zself->pool, S1817, CodeGenerator_generateExpression974(zself, Expression_asUnary486(ze)->argument)));
		return t103;
	}
	break;
	case 66:
	{
		CExpression221 *t104;
		t104 = ((CExpression221 *)MemoryPool_new1253(zself->pool, S1816, CodeGenerator_generateExpression974(zself, Expression_asUnary486(ze)->argument)));
		return t104;
	}
	break;
	case 41:
	{
		CExpression221 *t105;
		t105 = ((CExpression221 *)CodeGenerator_generateCompare976(zself, ze, S1814));
		return t105;
	}
	break;
	case 42:
	{
		CExpression221 *t106;
		t106 = ((CExpression221 *)CodeGenerator_generateCompare976(zself, ze, S1813));
		return t106;
	}
	break;
	case 43:
	{
		CExpression221 *t107;
		t107 = ((CExpression221 *)CodeGenerator_generateCompare976(zself, ze, S1812));
		return t107;
	}
	break;
	case 45:
	{
		CExpression221 *t108;
		t108 = ((CExpression221 *)CodeGenerator_generateCompare976(zself, ze, S1811));
		return t108;
	}
	break;
	case 47:
	{
		CExpression221 *t109;
		t109 = ((CExpression221 *)CodeGenerator_generateCompare976(zself, ze, S1810));
		return t109;
	}
	break;
	case 49:
	{
		CExpression221 *t110;
		t110 = ((CExpression221 *)CodeGenerator_generateCompare976(zself, ze, S1809));
		return t110;
	}
	break;
	case 44:
	{
		CExpression221 *t111;
		t111 = ((CExpression221 *)CodeGenerator_generateUnsignedCompare977(zself, ze, S1812));
		return t111;
	}
	break;
	case 46:
	{
		CExpression221 *t112;
		t112 = ((CExpression221 *)CodeGenerator_generateUnsignedCompare977(zself, ze, S1811));
		return t112;
	}
	break;
	case 48:
	{
		CExpression221 *t113;
		t113 = ((CExpression221 *)CodeGenerator_generateUnsignedCompare977(zself, ze, S1810));
		return t113;
	}
	break;
	case 50:
	{
		CExpression221 *t114;
		t114 = ((CExpression221 *)CodeGenerator_generateUnsignedCompare977(zself, ze, S1809));
		return t114;
	}
	break;
	case 40:
	{
		CExpression221 *t115;
		t115 = ((CExpression221 *)MemoryPool_new1253(zself->pool, S1808, CodeGenerator_generateExpression974(zself, Expression_asUnary486(ze)->argument)));
		return t115;
	}
	break;
	case 68:
	{
		Expression21 *a116;
		CExpression221 *ce117;
		CExpression221 *t118;
		a116 = Expression_asUnary486(ze)->argument;
		ce117 = CodeGenerator_generateExpression974(zself, a116);
		t118 = ((CExpression221 *)MemoryPool_new1262(zself->pool, ce117));
		return t118;
	}
	break;
	case 69:
	{
		BinaryExpression72 *b119;
		CExpression221 *ce1120;
		CExpression221 *ce2121;
		CExpression221 *ce122;
		CExpression221 *t123;
		b119 = Expression_asBinary487(ze);
		ce1120 = CodeGenerator_generateExpression974(zself, b119->argument1);
		ce2121 = CodeGenerator_generateExpression974(zself, b119->argument2);
		ce122 = ((CExpression221 *)MemoryPool_new1263(zself->pool, ce1120, ce2121));
		if((!Type_isSimple553(CodeGenerator_cellType990(zself, b119))))
		{
			ce122 = ((CExpression221 *)MemoryPool_new1243(zself->pool, ce122));
		}
		t123 = ce122;
		return t123;
	}
	break;
	case 70:
	{
		CExpression221 *t124;
		t124 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1839));
		return t124;
	}
	break;
	case 71:
	case 72:
	{
		CExpression221 *t125;
		t125 = ((CExpression221 *)CodeGenerator_generateBinary975(zself, ze, S1838));
		return t125;
	}
	break;
	case 73:
	{
		CExpression221 *t126;
		t126 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1827));
		return t126;
	}
	break;
	case 74:
	{
		CExpression221 *t127;
		t127 = ((CExpression221 *)CodeGenerator_generateCompound978(zself, ze, S1826));
		return t127;
	}
	break;
	case 75:
	{
		CExpression221 *t128;
		t128 = ((CExpression221 *)MemoryPool_new1253(zself->pool, S1817, CodeGenerator_generateExpression974(zself, Expression_asUnary486(ze)->argument)));
		return t128;
	}
	break;
	case 76:
	{
		CExpression221 *t129;
		t129 = ((CExpression221 *)MemoryPool_new1253(zself->pool, S1816, CodeGenerator_generateExpression974(zself, Expression_asUnary486(ze)->argument)));
		return t129;
	}
	break;
	default:
	{
		CExpression221 *t130;
		_assertFailure1267(S1806, ze->code);
		t130 = ((CExpression221 *)0);
		return t130;
	}
	}
}

static CInfixExpression229 *CodeGenerator_generateBinary975(CodeGenerator1 *zself, Expression21 *ze, unsigned char *zop)
{
	CExpression221 *e11;
	CExpression221 *e22;
	CInfixExpression229 *t3;
	e11 = CodeGenerator_generateExpression974(zself, Expression_asBinary487(ze)->argument1);
	e22 = CodeGenerator_generateExpression974(zself, Expression_asBinary487(ze)->argument2);
	t3 = MemoryPool_new1221(zself->pool, e11, zop, e22);
	return t3;
}

static CCompareExpression225 *CodeGenerator_generateCompare976(CodeGenerator1 *zself, Expression21 *ze, unsigned char *zop)
{
	BinaryExpression72 *b1;
	Expression21 *e12;
	CExpression221 *ce13;
	CExpression221 *ce24;
	CCompareExpression225 *t5;
	b1 = Expression_asBinary487(ze);
	e12 = b1->argument1;
	ce13 = CodeGenerator_generateExpression974(zself, e12);
	ce24 = CodeGenerator_generateExpressionWithType973(zself, b1->argument2, e12->type);
	t5 = MemoryPool_new1257(zself->pool, ce13, zop, ce24);
	return t5;
}

static CCompareExpression225 *CodeGenerator_generateUnsignedCompare977(CodeGenerator1 *zself, Expression21 *ze, unsigned char *zop)
{
	BinaryExpression72 *b1;
	Expression21 *e12;
	Expression21 *e23;
	CCastExpression224 *ce14;
	CCastExpression224 *ce25;
	CCompareExpression225 *t6;
	b1 = Expression_asBinary487(ze);
	e12 = b1->argument1;
	e23 = b1->argument2;
	ce14 = MemoryPool_new1198(zself->pool, CodeGenerator_generateExpression974(zself, e12), e12->type);
	ce25 = MemoryPool_new1198(zself->pool, CodeGenerator_generateExpression974(zself, e23), e23->type);
	t6 = MemoryPool_new1261(zself->pool, ce14, zop, ce25);
	return t6;
}

static CInfixExpression229 *CodeGenerator_generateCompound978(CodeGenerator1 *zself, Expression21 *ze, unsigned char *zop)
{
	CInfixExpression229 *t1;
	t1 = CodeGenerator_generateBinary975(zself, ze, zop);
	return t1;
}

static CCallExpression223 *CodeGenerator_generateCall979(CodeGenerator1 *zself, Expression21 *ze, ExpressionList61 *zarguments, TypeSequence108 *zreturnTypes)
{
	int numReturns1;
	char multiReturn2;
	CCallExpression223 *call3;
	unsigned char **array4;
	CCallExpression223 *t33;
	numReturns1 = zreturnTypes->size;
	multiReturn2 = (char)(numReturns1 > 1);
	call3 = MemoryPool_new1232(zself->pool);
	if(multiReturn2)
	{
		array4 = MemoryPool_allocateArray1226(zself->pool, numReturns1);
		{
			int self5;
			int i6;
			self5 = numReturns1;
			i6 = 0;
			while((char)(i6 < self5))
			{
				{
					unsigned char *name7;
					name7 = CodeGenerator_getLocal985(zself, S1876);
					CodeGenerator_declareLocal989(zself, TypeSequence__at603(zreturnTypes, i6), name7);
					array4[i6] = name7;
				}
				(++i6);
			}
		}
		ze->generator = ((void *)array4);
	}
	switch( ze->code )
	{
	case 13:
	{
		Function33 *f8;
		f8 = Expression_asFunctionCall489(ze)->func;
		call3->f = ((CExpression221 *)MemoryPool_new1131(zself->pool, Prototype_cname1000(((Prototype31 *)f8))));
		{
			Collection34 *iterable19;
			CollectionPoolElement205 *e210;
			iterable19 = (&f8->parameters);
			e210 = ((Collection63 *)zarguments)->firstElement;
			{
				Collection34 *self11;
				Parameter35 *e12;
				self11 = iterable19;
				e12 = self11->firstElement;
				while((char)(e12 != ((Parameter35 *)0)))
				{
					{
						Expression21 *v213;
						v213 = CollectionPool_elementValue1237(((CollectionPool62 *)zarguments), e210);
						{
							if((!Expression_isType505(v213)))
							{
								Collection_add1183((&call3->arguments), CodeGenerator_generateExpressionWithType973(zself, v213, e12->type));
							}
						}
						e210 = Collection_nextElement1238(((Collection63 *)zarguments), e210);
					}
					e12 = e12->nextSibling;
				}
			}
		}
	}
	break;
	case 14:
	{
		ExternFunction36 *f14;
		f14 = Expression_asExternFunctionCall490(ze)->func;
		call3->f = ((CExpression221 *)MemoryPool_new1131(zself->pool, Prototype_cname1000(((Prototype31 *)f14))));
		{
			TypeSequence108 *iterable115;
			CollectionPoolElement205 *e216;
			iterable115 = f14->parameterTypes;
			e216 = ((Collection63 *)zarguments)->firstElement;
			{
				TypeSequence108 *self17;
				self17 = iterable115;
				{
					int self18;
					int i19;
					self18 = self17->size;
					i19 = 0;
					while((char)(i19 < self18))
					{
						{
							{
								Type98 *v120;
								Expression21 *v221;
								v120 = TypeSequence__at603(self17, i19);
								v221 = CollectionPool_elementValue1237(((CollectionPool62 *)zarguments), e216);
								{
									if((!Expression_isType505(v221)))
									{
										Collection_add1183((&call3->arguments), CodeGenerator_generateExpressionWithType973(zself, v221, v120));
									}
								}
								e216 = Collection_nextElement1238(((Collection63 *)zarguments), e216);
							}
						}
						(++i19);
					}
				}
			}
		}
	}
	break;
	default:
	{
		Expression21 *f22;
		PointerType101 *pointerType23;
		FunctionType103 *functionType24;
		f22 = Expression_asPointerCall497(ze)->func;
		pointerType23 = Type_asPointer533(f22->type);
		functionType24 = Type_asFunction537(pointerType23->target);
		call3->f = CodeGenerator_generateExpression974(zself, f22);
		{
			TypeSequence108 *iterable125;
			CollectionPoolElement205 *e226;
			iterable125 = functionType24->types;
			e226 = ((Collection63 *)zarguments)->firstElement;
			{
				TypeSequence108 *self27;
				self27 = iterable125;
				{
					int self28;
					int i29;
					self28 = self27->size;
					i29 = 0;
					while((char)(i29 < self28))
					{
						{
							{
								Type98 *v130;
								Expression21 *v231;
								v130 = TypeSequence__at603(self27, i29);
								v231 = CollectionPool_elementValue1237(((CollectionPool62 *)zarguments), e226);
								{
									if((!Expression_isType505(v231)))
									{
										Collection_add1183((&call3->arguments), CodeGenerator_generateExpressionWithType973(zself, v231, v130));
									}
								}
								e226 = Collection_nextElement1238(((Collection63 *)zarguments), e226);
							}
						}
						(++i29);
					}
				}
			}
		}
	}
	}
	if(multiReturn2)
	{
		int i32;
		i32 = 1;
		while((char)(i32 < numReturns1))
		{
			Collection_add1183((&call3->arguments), ((CExpression221 *)MemoryPool_new1213(zself->pool, MemoryPool_new1131(zself->pool, array4[i32]))));
			(++i32);
		}
		Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1241(zself->pool, MemoryPool_new1131(zself->pool, array4[((size_t)0x0000000000000000U)]), call3)));
	}
	t33 = call3;
	return t33;
}

static CStringExpression234 *CodeGenerator_generateAutoLoad980(CodeGenerator1 *zself, Expression21 *ze, Type98 *ztype)
{
	unsigned char *name1;
	CStringExpression234 *t2;
	name1 = CodeGenerator_getLocal985(zself, S1876);
	CodeGenerator_declareLocal989(zself, ztype, name1);
	CodeGenerator_generateLoad981(zself, name1, ze, ztype);
	t2 = MemoryPool_new1131(zself->pool, name1);
	return t2;
}

static void CodeGenerator_generateLoad981(CodeGenerator1 *zself, unsigned char *zname, Expression21 *ze, Type98 *ztype)
{
	CStringExpression234 *left1;
	CExpression221 *right2;
	left1 = MemoryPool_new1131(zself->pool, zname);
	right2 = CodeGenerator_generateExpressionWithType973(zself, ze, ztype);
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1135(zself->pool, left1, right2)));
}

static void CodeGenerator_generateLabel982(CodeGenerator1 *zself, unsigned char *zname)
{
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1170(zself->pool, zname)));
}

static void CodeGenerator_generateGoto983(CodeGenerator1 *zself, unsigned char *zlabel)
{
	Collection_add1072((&zself->cblock->body), ((CStatement206 *)MemoryPool_new1157(zself->pool, zlabel)));
}

static unsigned char *CodeGenerator_getGlobal984(CodeGenerator1 *zself, unsigned char *zname)
{
	StringBuffer2 *out1;
	unsigned char *t2;
	out1 = (&zself->nameBuffer);
	StringBuffer_removeAll286(out1);
	StringBuffer__shl862(out1, zname);
	StringBuffer__shl1039(out1, zself->globalIndex);
	(++zself->globalIndex);
	t2 = MemoryPool_newString251(zself->pool, StringBuffer_string289(out1));
	return t2;
}

static unsigned char *CodeGenerator_getLocal985(CodeGenerator1 *zself, unsigned char *zname)
{
	StringBuffer2 *out1;
	unsigned char *t2;
	out1 = (&zself->nameBuffer);
	StringBuffer_removeAll286(out1);
	StringBuffer__shl862(out1, ((char)(zname != ((unsigned char *)0))?zname:S1876));
	StringBuffer__shl1039(out1, zself->localIndex);
	(++zself->localIndex);
	t2 = MemoryPool_newString251(zself->pool, StringBuffer_string289(out1));
	return t2;
}

static unsigned char *CodeGenerator_getIdentifier986(CodeGenerator1 *zself, void *zid)
{
	StringBuffer2 *out1;
	unsigned char *t2;
	out1 = (&zself->nameBuffer);
	StringBuffer_removeAll286(out1);
	if(IdentitySet_has1021((&zself->reservedIds), zid))
	{
		StringBuffer__shl365(out1, ((unsigned char)122U));
	}
	StringBuffer__shl862(out1, _string666(zid));
	t2 = MemoryPool_newString251(zself->pool, StringBuffer_string289(out1));
	return t2;
}

static unsigned char *CodeGenerator_getFunctionName987(CodeGenerator1 *zself, Function33 *zf)
{
	StringBuffer2 *out1;
	void *id2;
	unsigned char *t5;
	out1 = (&zself->nameBuffer);
	StringBuffer_removeAll286(out1);
	id2 = ((Definition32 *)zf)->name;
	if((char)(((Prototype31 *)zf)->namingConvention == ((unsigned char)1U)))
	{
		StringBuffer__shl861(out1, id2);
	}
	else
	{
		if((char)((&zf->parameters)->size > 0))
		{
			Parameter35 *p3;
			Type98 *type4;
			p3 = (&zf->parameters)->firstElement;
			type4 = p3->type;
			if(Type_isPointer548(type4))
			{
				type4 = Type_asPointer533(type4)->target;
			}
			if((char)(type4->code == 10))
			{
				StringBuffer__shl861(out1, Type_asStructure535(type4)->name);
			}
		}
		StringBuffer__shl365(out1, ((unsigned char)95U));
		StringBuffer__shl861(out1, id2);
		StringBuffer__shl1039(out1, zself->globalIndex);
		(++zself->globalIndex);
	}
	t5 = MemoryPool_newString251(zself->pool, StringBuffer_string289(out1));
	return t5;
}

static unsigned char *CodeGenerator_getExternFunctionName988(CodeGenerator1 *zself, ExternFunction36 *zf)
{
	StringBuffer2 *out1;
	unsigned char *t2;
	out1 = (&zself->nameBuffer);
	StringBuffer_removeAll286(out1);
	StringBuffer__shl862(out1, zf->publicName);
	t2 = MemoryPool_newString251(zself->pool, StringBuffer_string289(out1));
	return t2;
}

static void CodeGenerator_declareLocal989(CodeGenerator1 *zself, Type98 *ztype, unsigned char *zname)
{
	Collection_add1072((&zself->cblock->header), ((CStatement206 *)MemoryPool_new1110(zself->pool, zname, ztype)));
}

static Type98 *CodeGenerator_cellType990(CodeGenerator1 *zself, BinaryExpression72 *ze)
{
	Expression21 *arrayValue1;
	ArrayType102 *arrayType2;
	Type98 *t3;
	arrayValue1 = ze->argument1;
	arrayType2 = Type_asArray534(Type_asPointer533(arrayValue1->type)->target);
	t3 = arrayType2->cellType;
	return t3;
}

static void StringBuffer_flushFunctionDeclaration991(StringBuffer2 *zout, Function33 *zf)
{
	CFunctionExpression238 e1;
	CFunctionExpression_initialize1041((&e1), zf);
	StringBuffer_flushDeclaration993(zout, Prototype_functionType995(((Prototype31 *)zf)), ((CExpression221 *)(&e1)));
}

static void StringBuffer_flushStringDeclaration992(StringBuffer2 *zout, Type98 *ztype, unsigned char *zname)
{
	CStringExpression234 e1;
	CStringExpression_initialize1133((&e1), zname);
	StringBuffer_flushDeclaration993(zout, ztype, ((CExpression221 *)(&e1)));
}

static void StringBuffer_flushDeclaration993(StringBuffer2 *zout, Type98 *ztype, CExpression221 *ze)
{
	if((char)(ztype == ((Type98 *)0)))
	{
		StringBuffer__shl367(zout, S1805);
	}
	else
	{
		switch( ztype->code )
		{
		case 1:
		{
			StringBuffer__shl367(zout, S1804);
		}
		break;
		case 2:
		{
			StringBuffer__shl367(zout, S1805);
		}
		break;
		case 5:
		{
			StringBuffer__shl367(zout, S1803);
		}
		break;
		case 6:
		{
			switch( ztype->size )
			{
			case ((size_t)0x0000000000000001U):
			{
				StringBuffer__shl367(zout, S1803);
			}
			break;
			case ((size_t)0x0000000000000002U):
			{
				StringBuffer__shl367(zout, S1802);
			}
			break;
			case ((size_t)0x0000000000000004U):
			{
				StringBuffer__shl367(zout, S1801);
			}
			break;
			default:
			{
				StringBuffer__shl367(zout, S1800);
			}
			}
		}
		break;
		case 7:
		{
			switch( ztype->size )
			{
			case ((size_t)0x0000000000000001U):
			{
				StringBuffer__shl367(zout, S1799);
			}
			break;
			case ((size_t)0x0000000000000002U):
			{
				StringBuffer__shl367(zout, S1798);
			}
			break;
			case ((size_t)0x0000000000000004U):
			{
				StringBuffer__shl367(zout, S1797);
			}
			break;
			default:
			{
				StringBuffer__shl367(zout, S1796);
			}
			}
		}
		break;
		case 8:
		{
			StringBuffer__shl367(zout, S1795);
		}
		break;
		case 9:
		{
			PointerType101 *pointer1;
			CPointerExpression237 ptr2;
			Type98 *target3;
			pointer1 = Type_asPointer533(ztype);
			CPointerExpression_initialize1045((&ptr2), ze);
			target3 = pointer1->target;
			if(Type_isArray550(target3))
			{
				target3 = Type_asArray534(target3)->cellType;
			}
			StringBuffer_flushDeclaration993(zout, target3, ((CExpression221 *)(&ptr2)));
			return;
		}
		break;
		case 10:
		{
			StringBuffer__shl367(zout, Type_cname999(((Type98 *)Type_asStructure535(ztype))));
		}
		break;
		case 11:
		{
			ArrayType102 *array4;
			CArrayExpression236 ary5;
			array4 = Type_asArray534(ztype);
			CArrayExpression_initialize1268((&ary5), array4->arraySize, ze);
			StringBuffer_flushDeclaration993(zout, array4->cellType, ((CExpression221 *)(&ary5)));
			return;
		}
		break;
		case 12:
		{
			FunctionType103 *f6;
			CFunctionTypeExpression235 flb7;
			f6 = Type_asFunction537(ztype);
			CFunctionTypeExpression_initialize1270((&flb7), f6, ze);
			StringBuffer_flushDeclaration993(zout, TypeSequence_returnType996(f6->returnTypes), ((CExpression221 *)(&flb7)));
			return;
		}
		break;
		default:
		{
			StringBuffer__shl367(zout, S1793);
			return;
		}
		}
	}
	StringBuffer__shl1047(StringBuffer__shl365(zout, ((unsigned char)32U)), ze);
}

static void StringBuffer_appendReturnTypes994(StringBuffer2 *zout, TypeSequence108 *zreturnTypes, char zcomm)
{
	char comma1;
	char first2;
	int i3;
	comma1 = zcomm;
	first2 = 1;
	i3 = 1;
	{
		{
			int self4;
			int i5;
			self4 = zreturnTypes->size;
			i5 = 0;
			while((char)(i5 < self4))
			{
				{
					{
						Type98 *t6;
						t6 = TypeSequence__at603(zreturnTypes, i5);
						if((!first2))
						{
							COutExpression231 e7;
							CPointerExpression237 ptr8;
							if(comma1)
							{
								StringBuffer__shl367(zout, S1954);
							}
							comma1 = 1;
							COutExpression_initialize1043((&e7), i3);
							CPointerExpression_initialize1045((&ptr8), ((CExpression221 *)(&e7)));
							StringBuffer_flushDeclaration993(zout, t6, ((CExpression221 *)(&ptr8)));
							(++i3);
						}
						first2 = 0;
					}
				}
				(++i5);
			}
		}
	}
}

static Type98 *Prototype_functionType995(Prototype31 *zf)
{
	Type98 *t1;
	t1 = TypeSequence_returnType996(zf->returnTypes);
	return t1;
}

static Type98 *TypeSequence_returnType996(TypeSequence108 *ztypes)
{
	Type98 *t1;
	t1 = ((char)(ztypes->size > 0)?TypeSequence_first604(ztypes):((Type98 *)0));
	return t1;
}

static void StringBuffer_flushCallingConvention997(StringBuffer2 *zout, unsigned char zcc)
{
	if((char)(zcc == ((unsigned char)2U)))
	{
		StringBuffer__shl367(zout, S1913);
	}
	else
	{
		if((char)(zcc == ((unsigned char)1U)))
		{
			StringBuffer__shl367(zout, S1912);
		}
	}
}

static void StringBuffer_flushChar998(StringBuffer2 *zout, unsigned int zc)
{
	if((char)(((unsigned int )zc) < ((unsigned int )32U)))
	{
		switch( zc )
		{
		case 7U:
		{
			StringBuffer__shl367(zout, S1905);
		}
		break;
		case 8U:
		{
			StringBuffer__shl367(zout, S1904);
		}
		break;
		case 12U:
		{
			StringBuffer__shl367(zout, S1903);
		}
		break;
		case 10U:
		{
			StringBuffer__shl367(zout, S1902);
		}
		break;
		case 13U:
		{
			StringBuffer__shl367(zout, S1901);
		}
		break;
		case 9U:
		{
			StringBuffer__shl367(zout, S1900);
		}
		break;
		case 11U:
		{
			StringBuffer__shl367(zout, S1899);
		}
		break;
		default:
		{
			unsigned int (s1)[4];
			unsigned int q2;
			StringBuffer__shl367(zout, S1898);
			q2 = (zc >> ((unsigned char)4U));
			if((char)(((unsigned int )q2) >= ((unsigned int )10U)))
			{
				(q2 += 87U);
			}
			else
			{
				(q2 += 48U);
			}
			StringBuffer__shl863(zout, q2);
			q2 = (zc & 15U);
			if((char)(((unsigned int )q2) >= ((unsigned int )10U)))
			{
				(q2 += 87U);
			}
			else
			{
				(q2 += 48U);
			}
			StringBuffer__shl863(zout, q2);
		}
		}
	}
	else
	{
		switch( zc )
		{
		case 34U:
		{
			StringBuffer__shl367(zout, S1897);
		}
		break;
		case 39U:
		{
			StringBuffer__shl367(zout, S1896);
		}
		break;
		case 92U:
		{
			StringBuffer__shl367(zout, S1895);
		}
		break;
		default:
		{
			StringBuffer__shl863(zout, zc);
		}
		}
	}
}

static unsigned char *Type_cname999(Type98 *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself->generator);
	return t1;
}

static unsigned char *Prototype_cname1000(Prototype31 *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself->generator);
	return t1;
}

static unsigned char *Parameter_cname1001(Parameter35 *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself->generator);
	return t1;
}

static void Variable_initialize1002(Variable41 *zself, Module7 *zmodule, int zline, void *zname, Type98 *zstorageType)
{
	Definition_initialize681(((Definition32 *)zself), ((Scope8 *)zmodule), zline, zname, 6);
	zself->storageType = zstorageType;
	zself->expression = ((Expression21 *)MemoryPool_new1317(zmodule->program->pool, zself, Type_effective525(zstorageType)));
	zself->generator = ((void *)0);
}

static unsigned char *Variable_cname1003(Variable41 *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself->generator);
	return t1;
}

static void Attribute_initialize1004(Attribute107 *zself, StructureType104 *zstructure, ASTAttribute122 *zsource)
{
	Definition_initialize681(((Definition32 *)zself), (&((Type98 *)zstructure)->scope), ((Location45 *)zsource)->line, zsource->name, 7);
	zself->type = ((Type98 *)0);
	zself->source = zsource;
	zself->structure = zstructure;
	zself->storageType = ((Type98 *)0);
	zself->generator = ((void *)0);
}

static unsigned char *Attribute_cname1005(Attribute107 *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself->generator);
	return t1;
}

static void GlobalVariable_initialize1006(GlobalVariable97 *zself, Scope8 *zscope, ASTGlobalVariable114 *zsource)
{
	Definition_initialize681(((Definition32 *)zself), zscope, ((Location45 *)zsource)->line, zsource->name, 3);
	zself->source = zsource;
	zself->state = ((unsigned char)0U);
	zself->used = 0;
	zself->storageType = ((Type98 *)0);
	zself->expression = ((Expression21 *)0);
	zself->initialValue = ((Expression21 *)0);
	zself->generator = ((void *)0);
}

static void GlobalVariable_setInitialValue1007(GlobalVariable97 *zself, Expression21 *zinitialValue)
{
	zself->initialValue = zinitialValue;
}

static void GlobalVariable_setStorageType1008(GlobalVariable97 *zself, Type98 *zstorageType)
{
	Program5 *program1;
	program1 = Definition_module682(((Definition32 *)zself))->program;
	zself->storageType = zstorageType;
	if(Type_isSimple553(zstorageType))
	{
		zself->expression = ((Expression21 *)MemoryPool_new1381(program1->pool, zself, zstorageType));
	}
	else
	{
		zself->expression = ((Expression21 *)MemoryPool_new1383(program1->pool, zself, Type_effective525(zstorageType)));
	}
}

static void GlobalVariable_use1009(GlobalVariable97 *zself)
{
	zself->used = 1;
}

static unsigned char *GlobalVariable_cname1010(GlobalVariable97 *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself->generator);
	return t1;
}

static unsigned char *Expression_cname1011(Expression21 *zself)
{
	unsigned char *t1;
	t1 = ((unsigned char *)zself->generator);
	return t1;
}

static void Vector_initialize1012(Vector3 *zself)
{
	Vector_initializeWithSize1013(zself, 8);
}

static void Vector_initializeWithSize1013(Vector3 *zself, int zinitialAllocated)
{
	zself->size = 0;
	zself->allocated = zinitialAllocated;
	zself->array = _allocateArray1035(zinitialAllocated);
}

static void Vector_release1014(Vector3 *zself)
{
	_freeArray1092(((void *)zself->array), zself->allocated);
}

static StructureType104 *Vector__at1015(Vector3 *zself, int zi)
{
	StructureType104 *t1;
	t1 = zself->array[zi];
	return t1;
}

static void Vector_add1016(Vector3 *zself, StructureType104 *zvalue)
{
	int index1;
	index1 = zself->size;
	if((char)(zself->allocated == index1))
	{
		Vector_increaseAllocated1017(zself);
	}
	zself->array[index1] = zvalue;
	(++zself->size);
}

static void Vector_increaseAllocated1017(Vector3 *zself)
{
	Vector_allocate1018(zself, (((zself->allocated * 3) / 2) + 1));
}

static void Vector_allocate1018(Vector3 *zself, int zn)
{
	StructureType104 **a1;
	a1 = _allocateArray1035(zn);
	_copyArray1272(((void *)a1), ((void *)zself->array), zself->size);
	_freeArray1092(((void *)zself->array), zself->allocated);
	zself->allocated = zn;
	zself->array = a1;
}

static void IdentitySet_initialize1019(IdentitySet4 *zself)
{
	zself->collisions = 0;
	zself->tally = 0;
	zself->allocated = 10;
	zself->associations = IdentitySet_newArray1026(zself, 10);
}

static char IdentitySet_add1020(IdentitySet4 *zself, void *zv)
{
	int location1;
	int count2;
	location1 = IdentitySet_slot1025(zself, zv);
	count2 = 1;
	for(;;)
	{
		void *a3;
		a3 = zself->associations[location1];
		if((char)(a3 == zv))
		{
			char t4;
			t4 = 0;
			return t4;
		}
		else
		{
			if((char)(a3 == ((void *)0)))
			{
				char t5;
				zself->associations[location1] = zv;
				if((char)(count2 > zself->collisions))
				{
					zself->collisions = count2;
				}
				IdentitySet_increaseTally1023(zself);
				t5 = 1;
				return t5;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(++count2);
	}
}

static char IdentitySet_has1021(IdentitySet4 *zself, void *zv)
{
	int location1;
	int count2;
	char t7;
	location1 = IdentitySet_slot1025(zself, zv);
	count2 = zself->collisions;
	while((char)(count2 > 0))
	{
		void *a5;
		a5 = zself->associations[location1];
		if((char)(a5 == zv))
		{
			char t6;
			t6 = 1;
			return t6;
		}
		else
		{
			if((char)(a5 == ((void *)0)))
			{
				goto L3;
			}
		}
		(++location1);
		if((char)(location1 == zself->allocated))
		{
			location1 = 0;
		}
		(--count2);
	}
	L3: ;
	t7 = 0;
	return t7;
}

static void IdentitySet_resize1022(IdentitySet4 *zself, int zs)
{
	int c1;
	void **a2;
	c1 = 0;
	a2 = IdentitySet_newArray1026(zself, zs);
	{
		{
			int self3;
			int i4;
			self3 = zself->allocated;
			i4 = 0;
			while((char)(i4 < self3))
			{
				{
					void *obj5;
					obj5 = zself->associations[i4];
					if((char)(obj5 != ((void *)0)))
					{
						{
							int count6;
							int location7;
							count6 = 1;
							location7 = _umod375(((int )IdentitySet_hash1024(zself, obj5)), zs);
							while((char)(a2[location7] != ((void *)0)))
							{
								(++location7);
								if((char)(location7 == zs))
								{
									location7 = 0;
								}
								(++count6);
							}
							a2[location7] = obj5;
							c1 = _max377(count6, c1);
						}
					}
				}
				(++i4);
			}
		}
	}
	_freeArray1037(((void *)zself->associations), zself->allocated);
	zself->collisions = c1;
	zself->associations = a2;
	zself->allocated = zs;
}

static void IdentitySet_increaseTally1023(IdentitySet4 *zself)
{
	(++zself->tally);
	if((char)((zself->tally * 4) > (zself->allocated * 3)))
	{
		IdentitySet_resize1022(zself, ((zself->allocated * 3) / 2));
	}
}

static size_t IdentitySet_hash1024(IdentitySet4 *zself, void *zobj)
{
	size_t t1;
	t1 = ((size_t )zobj);
	return t1;
}

static int IdentitySet_slot1025(IdentitySet4 *zself, void *zobj)
{
	int t1;
	t1 = _umod375(((int )IdentitySet_hash1024(zself, zobj)), zself->allocated);
	return t1;
}

static void **IdentitySet_newArray1026(IdentitySet4 *zself, int zs)
{
	void **a1;
	void **p2;
	void **l3;
	void **t4;
	a1 = _allocateArray1036(zs);
	p2 = a1;
	l3 = (p2 + zs);
	while((char)(((void **)p2) < ((void **)l3)))
	{
		p2[((size_t)0x0000000000000000U)] = ((void *)0);
		(++p2);
	}
	t4 = a1;
	return t4;
}

static void StructureType_initialize1027(StructureType104 *zself, Scope8 *zscope, ASTType118 *zsource, ExpressionList61 *zarguments)
{
	Type_initialize520(((Type98 *)zself), zscope, ((Type98 *)zscope->module->program->anyType), 10, ((size_t)0xFFFFFFFFFFFFFFFFU), ((size_t)0xFFFFFFFFFFFFFFFFU));
	((Type98 *)zself)->source = ((ASTNode110 *)zsource);
	zself->name = zsource->name;
	zself->used = 0;
	((Type98 *)zself)->arguments = zarguments;
	zself->parentStructure = ((StructureType104 *)0);
	Collection_initialize1033((&zself->attributes));
}

static void StructureType_setParentStructure1028(StructureType104 *zself, StructureType104 *zparent)
{
	zself->parentStructure = zparent;
	Type_setParent522(((Type98 *)zself), ((Type98 *)zparent));
}

static void StructureType_use1029(StructureType104 *zself)
{
	zself->used = 1;
}

static Attribute107 *StructureType_createAttribute1030(StructureType104 *zself, ASTAttribute122 *zsource)
{
	Program5 *program1;
	Attribute107 *a2;
	Attribute107 *t3;
	program1 = Type_module527(((Type98 *)zself))->program;
	a2 = MemoryPool_new1496(program1->pool, zself, zsource);
	Collection_add1034((&zself->attributes), a2);
	t3 = a2;
	return t3;
}

static Attribute107 *StructureType_findAttribute1031(StructureType104 *zself, void *zname)
{
	StructureType104 *s1;
	s1 = zself;
	for(;;)
	{
		{
			StructureType104 *self2;
			self2 = s1;
			{
				Collection105 *self3;
				Attribute107 *e4;
				self3 = (&self2->attributes);
				e4 = self3->firstElement;
				while((char)(e4 != ((Attribute107 *)0)))
				{
					{
						{
							if((char)(zname == ((Definition32 *)e4)->name))
							{
								Attribute107 *t5;
								t5 = e4;
								return t5;
							}
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
		s1 = s1->parentStructure;
		if((char)(s1 == ((StructureType104 *)0)))
		{
			Attribute107 *t6;
			t6 = ((Attribute107 *)0);
			return t6;
		}
	}
}

static char StructureType_isFlexible1032(StructureType104 *zself)
{
	StructureType104 *s1;
	char t4;
	s1 = zself;
	while((char)(s1 != ((StructureType104 *)0)))
	{
		Attribute107 *last2;
		last2 = (&s1->attributes)->lastElement;
		if((char)(last2 != ((Attribute107 *)0)))
		{
			char t3;
			t3 = (char)(last2->storageType->size == ((size_t)0x0000000000000000U));
			return t3;
		}
		s1 = s1->parentStructure;
	}
	t4 = 0;
	return t4;
}

static void Collection_initialize1033(Collection105 *zself)
{
	zself->size = 0;
	zself->firstElement = ((Attribute107 *)0);
	zself->lastElement = ((Attribute107 *)0);
}

static void Collection_add1034(Collection105 *zself, Attribute107 *ze)
{
	if((char)(zself->lastElement != ((Attribute107 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((Attribute107 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((Attribute107 *)0);
}

static StructureType104 **_allocateArray1035(int zn)
{
	StructureType104 **t1;
	t1 = ((StructureType104 **)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000004U))));
	return t1;
}

static void **_allocateArray1036(int zn)
{
	void **t1;
	t1 = ((void **)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000004U))));
	return t1;
}

static void _freeArray1037(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000004U));
	_freeBytes258(zp, bytes1);
}

static void CollectionPoolElement_initialize1038(CollectionPoolElement190 *zself, StructureType104 *zobject)
{
	zself->object = zobject;
}

static StringBuffer2 *StringBuffer__shl1039(StringBuffer2 *zself, int zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer859(zobj, zself);
	t1 = zself;
	return t1;
}

static void CExpression_addToStringBuffer1040(CExpression221 *zself, StringBuffer2 *zout)
{
	zself->writeFunction(zself, zout);
}

static void CFunctionExpression_initialize1041(CFunctionExpression238 *zself, Function33 *zf)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CFunctionExpression_write1042);
	zself->f = zf;
}

static void CFunctionExpression_write1042(CFunctionExpression238 *zself, StringBuffer2 *zout)
{
	Function33 *f1;
	char comma2;
	f1 = zself->f;
	StringBuffer_flushCallingConvention997(zout, ((Prototype31 *)f1)->callingConvention);
	StringBuffer__shl367(zout, Prototype_cname1000(((Prototype31 *)f1)));
	StringBuffer__shl365(zout, ((unsigned char)40U));
	comma2 = 0;
	{
		Function33 *self3;
		self3 = f1;
		{
			Collection34 *self4;
			Parameter35 *e5;
			self4 = (&self3->parameters);
			e5 = self4->firstElement;
			while((char)(e5 != ((Parameter35 *)0)))
			{
				{
					{
						if((!Type_isMeta554(e5->type)))
						{
							if(comma2)
							{
								StringBuffer__shl367(zout, S1954);
							}
							comma2 = 1;
							StringBuffer_flushStringDeclaration992(zout, e5->type, Parameter_cname1001(e5));
						}
					}
				}
				e5 = e5->nextSibling;
			}
		}
	}
	StringBuffer_appendReturnTypes994(zout, ((Prototype31 *)f1)->returnTypes, comma2);
	StringBuffer__shl365(zout, ((unsigned char)41U));
}

static void COutExpression_initialize1043(COutExpression231 *zself, int zi)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))COutExpression_write1044);
	zself->index = zi;
}

static void COutExpression_write1044(COutExpression231 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl365(zout, ((unsigned char)114U));
	StringBuffer__shl1039(zout, zself->index);
	StringBuffer__shl365(zout, ((unsigned char)120U));
}

static void CPointerExpression_initialize1045(CPointerExpression237 *zself, CExpression221 *zinner)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CPointerExpression_write1046);
	zself->inner = zinner;
}

static void CPointerExpression_write1046(CPointerExpression237 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl1047(StringBuffer__shl365(zout, ((unsigned char)42U)), zself->inner);
}

static StringBuffer2 *StringBuffer__shl1047(StringBuffer2 *zself, CExpression221 *zobj)
{
	StringBuffer2 *t1;
	CExpression_addToStringBuffer1040(zobj, zself);
	t1 = zself;
	return t1;
}

static void CollectionPoolElement_initialize1048(CollectionPoolElement192 *zself, ExternFunction36 *zobject)
{
	zself->object = zobject;
}

static void ExternFunction_initialize1049(ExternFunction36 *zself, Module7 *zmodule, ASTExternFunction116 *zsource, Scope8 *zscope, Type98 *zcontext)
{
	Definition_initialize681(((Definition32 *)((Prototype31 *)zself)), ((Scope8 *)zmodule), ((Location45 *)zsource)->line, zsource->name, 11);
	((Definition32 *)zself)->scope = zscope;
	((Prototype31 *)zself)->state = ((unsigned char)0U);
	((Prototype31 *)zself)->used = 0;
	((Prototype31 *)zself)->namingConvention = ((ASTElement109 *)zsource)->directives->namingConvention;
	((Prototype31 *)zself)->callingConvention = ((ASTElement109 *)zsource)->directives->callingConvention;
	((Prototype31 *)zself)->returnTypes = ((TypeSequence108 *)0);
	((Prototype31 *)zself)->generator = ((void *)0);
	zself->source = zsource;
	zself->context = zcontext;
	zself->publicName = zsource->publicName;
	zself->parameterTypes = ((TypeSequence108 *)0);
}

static void CExternFunctionExpression_initialize1050(CExternFunctionExpression239 *zself, ExternFunction36 *zf)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CExternFunctionExpression_write1051);
	zself->f = zf;
}

static void CExternFunctionExpression_write1051(CExternFunctionExpression239 *zself, StringBuffer2 *zout)
{
	ExternFunction36 *f1;
	char comma2;
	f1 = zself->f;
	StringBuffer_flushCallingConvention997(zout, ((Prototype31 *)f1)->callingConvention);
	StringBuffer__shl367(zout, Prototype_cname1000(((Prototype31 *)f1)));
	StringBuffer__shl365(zout, ((unsigned char)40U));
	comma2 = 0;
	{
		ExternFunction36 *self3;
		self3 = f1;
		{
			TypeSequence108 *self4;
			self4 = self3->parameterTypes;
			{
				int self5;
				int i6;
				self5 = self4->size;
				i6 = 0;
				while((char)(i6 < self5))
				{
					{
						{
							Type98 *type7;
							type7 = TypeSequence__at603(self4, i6);
							{
								if((!Type_isMeta554(type7)))
								{
									if(comma2)
									{
										StringBuffer__shl367(zout, S1954);
									}
									comma2 = 1;
									StringBuffer_flushStringDeclaration992(zout, type7, S2118);
								}
							}
						}
					}
					(++i6);
				}
			}
		}
	}
	StringBuffer_appendReturnTypes994(zout, ((Prototype31 *)f1)->returnTypes, comma2);
	StringBuffer__shl365(zout, ((unsigned char)41U));
}

static void CollectionPoolElement_initialize1052(CollectionPoolElement193 *zself, GlobalVariable97 *zobject)
{
	zself->object = zobject;
}

static void StructureExpression_initialize1053(StructureExpression68 *zself, ExpressionList61 *zvalues, Program5 *zprogram, Type98 *ztype, StructureType104 *zstructure)
{
	Expression_initialize475(((Expression21 *)zself), 3, ztype);
	zself->structure = zstructure;
	zself->values = zvalues;
	zself->next = zprogram->structureConstants;
	zprogram->structureConstants = zself;
}

static void StructureExpression_addToStringBuffer1054(StructureExpression68 *zself, StringBuffer2 *zsb)
{
	StringBuffer__shl1281(zsb, zself->structure);
	StringBuffer__shl365(zsb, ((unsigned char)32U));
	StringBuffer__shl1282(zsb, zself->values);
}

static char StructureExpression_isEqual1055(StructureExpression68 *zself, StructureExpression68 *zother)
{
	char t2;
	if((char)(zself->structure != zother->structure))
	{
		char t1;
		t1 = 0;
		return t1;
	}
	t2 = ExpressionList_areConstantEquals909(zself->values, zother->values);
	return t2;
}

static void ArrayExpression_initialize1056(ArrayExpression69 *zself, ExpressionList61 *zvalues, Program5 *zprogram, Type98 *ztype, ArrayType102 *zarrayType)
{
	Expression_initialize475(((Expression21 *)zself), 4, ztype);
	zself->arrayType = zarrayType;
	zself->values = zvalues;
	zself->next = zprogram->arrayConstants;
	zprogram->arrayConstants = zself;
}

static void ArrayExpression_addToStringBuffer1057(ArrayExpression69 *zself, StringBuffer2 *zsb)
{
	StringBuffer__shl1284(zsb, zself->arrayType);
	StringBuffer__shl365(zsb, ((unsigned char)32U));
	StringBuffer__shl1282(zsb, zself->values);
}

static char ArrayExpression_isEqual1058(ArrayExpression69 *zself, ArrayExpression69 *zother)
{
	char t2;
	if((char)(zself->arrayType != zother->arrayType))
	{
		char t1;
		t1 = 0;
		return t1;
	}
	t2 = ExpressionList_areConstantEquals909(zself->values, zother->values);
	return t2;
}

static void _addToStringBuffer1059(unsigned short *zself, StringBuffer2 *zsb)
{
	{
		unsigned short *p1;
		p1 = zself;
		while(_notNul1061(p1[((size_t)0x0000000000000000U)]))
		{
			{
				unsigned short c2;
				c2 = p1[((size_t)0x0000000000000000U)];
				StringBuffer__shl863(zsb, ((unsigned int )c2));
			}
			(++p1);
		}
	}
}

static char _isNul1060(unsigned short zself)
{
	char t1;
	t1 = (char)(zself == ((unsigned short)0U));
	return t1;
}

static char _notNul1061(unsigned short zself)
{
	char t1;
	t1 = (char)(zself != ((unsigned short)0U));
	return t1;
}

static void ExpressionIterator_initialize1062(ExpressionIterator65 *zself, ExpressionList61 *zarguments)
{
	zself->element = ((Collection63 *)zarguments)->firstElement;
	zself->index = 0;
}

static char ExpressionIterator_isEOF1063(ExpressionIterator65 *zself)
{
	char t1;
	t1 = (char)(zself->element == ((CollectionPoolElement205 *)0));
	return t1;
}

static Expression21 *ExpressionIterator_value1064(ExpressionIterator65 *zself)
{
	Expression21 *t1;
	t1 = zself->element->object;
	return t1;
}

static void ExpressionIterator_next1065(ExpressionIterator65 *zself)
{
	zself->element = zself->element->nextSibling;
	(++zself->index);
}

static void ConstantWriter_initialize1066(ConstantWriter240 *zself, ExpressionList61 *zarguments)
{
	ExpressionIterator_initialize1062(((ExpressionIterator65 *)zself), zarguments);
	zself->comma = 0;
}

static void CompositeExpression_initialize1067(CompositeExpression75 *zself, int zcode, TypeSequence108 *ztypes, Program5 *zprogram)
{
	Expression_initialize475(((Expression21 *)zself), zcode, Program_getSingletonType411(zprogram, ztypes));
	zself->types = ztypes;
}

static void CStatement_write1068(CStatement206 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	zself->writeFunction(zself, zout, zindent);
}

static void CBlock_initialize1069(CBlock208 *zself)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CBlock_write1070);
	Collection_initialize1071((&zself->header));
	Collection_initialize1071((&zself->body));
}

static void CBlock_write1070(CBlock208 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1885);
	StringBuffer__shl365(zindent, ((unsigned char)9U));
	{
		Collection209 *self1;
		CStatement206 *e2;
		self1 = (&zself->header);
		e2 = self1->firstElement;
		while((char)(e2 != ((CStatement206 *)0)))
		{
			{
				CStatement_write1068(e2, zout, zindent);
			}
			e2 = e2->nextSibling;
		}
	}
	{
		Collection209 *self3;
		CStatement206 *e4;
		self3 = (&zself->body);
		e4 = self3->firstElement;
		while((char)(e4 != ((CStatement206 *)0)))
		{
			{
				CStatement_write1068(e4, zout, zindent);
			}
			e4 = e4->nextSibling;
		}
	}
	StringBuffer_removeLastChar287(zindent);
	StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1884);
}

static void Collection_initialize1071(Collection209 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CStatement206 *)0);
	zself->lastElement = ((CStatement206 *)0);
}

static void Collection_add1072(Collection209 *zself, CStatement206 *ze)
{
	if((char)(zself->lastElement != ((CStatement206 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CStatement206 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CStatement206 *)0);
}

static StringBuffer2 *StringBuffer__shl1073(StringBuffer2 *zself, StringBuffer2 *zobj)
{
	StringBuffer2 *t1;
	StringBuffer_addToStringBuffer1074(zobj, zself);
	t1 = zself;
	return t1;
}

static void StringBuffer_addToStringBuffer1074(StringBuffer2 *zself, StringBuffer2 *zx)
{
	StringBuffer_addSubString280(zx, StringBuffer_base273(zself), StringBuffer_size274(zself));
}

static unsigned char *_allocateArray1075(int zn)
{
	unsigned char *t1;
	t1 = ((unsigned char *)_allocateBytes257((((size_t )zn) * ((size_t)0x0000000000000001U))));
	return t1;
}

static void Error_initialize1076(Error162 *zself, ErrorClass163 *zclass, ErrorCode161 *zcode)
{
	zself->class = zclass;
	zself->code = zcode;
}

static void Error_delete1077(Error162 *zself)
{
	if((char)(zself != ((Error162 *)0)))
	{
		zself->class->delete(zself);
	}
}

static void Error_addToStringBuffer1078(Error162 *zself, StringBuffer2 *zsb)
{
	zself->class->getMessage(zself, zsb);
}

static Error162 *Error__or1079(Error162 *zself, Error162 *zother)
{
	if((char)(zself != ((Error162 *)0)))
	{
		Error162 *t1;
		Error_delete1077(zother);
		t1 = zself;
		return t1;
	}
	else
	{
		Error162 *t2;
		t2 = zother;
		return t2;
	}
}

static void _free1080(void *zp)
{
	size_t n1;
	n1 = ((size_t)0x0000000000000004U);
	_freeBytes258(zp, n1);
}

static void SystemError_initialize1081(SystemError165 *zself)
{
	ErrorClass163 *class1;
	class1 = (&S1676);
	Error_initialize1076(((Error162 *)zself), class1, (&ErrorCodeSystem1664));
	zself->error = get_errno();
}

static void SystemError_onDelete1082(SystemError165 *zself)
{
	_free1086(((void *)zself));
}

static void SystemError_addMessageTo1083(SystemError165 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl1039(StringBuffer__shl367(zout, S1883), zself->error);
}

static SystemError165 *_new1084()
{
	SystemError165 *obj1;
	SystemError165 *t2;
	obj1 = _allocate1085();
	SystemError_initialize1081(obj1);
	t2 = obj1;
	return t2;
}

static SystemError165 *_allocate1085()
{
	SystemError165 *t1;
	t1 = ((SystemError165 *)_allocateBytes257(((size_t)0x000000000000000CU)));
	return t1;
}

static void _free1086(void *zp)
{
	size_t n1;
	n1 = ((size_t)0x000000000000000CU);
	_freeBytes258(zp, n1);
}

static void _freeArray1087(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000001U));
	_freeBytes258(zp, bytes1);
}

static void _output1088(unsigned char *ztemplate, Error162 *v1x)
{
	StringBuffer2 sb1;
	StringBuffer_initialize270((&sb1));
	StringBuffer_printFormat1089((&sb1), ztemplate, v1x);
	_println262(StringBuffer_string289((&sb1)));
	StringBuffer_release272((&sb1));
}

static void StringBuffer_printFormat1089(StringBuffer2 *zself, unsigned char *zs, Error162 *v2x)
{
	StringBuffer_removeAll286(zself);
	StringBuffer_addFormat1090(zself, zs, v2x);
}

static void StringBuffer_addFormat1090(StringBuffer2 *zself, unsigned char *zs, Error162 *v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1091(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static StringBuffer2 *StringBuffer__shl1091(StringBuffer2 *zself, Error162 *zobj)
{
	StringBuffer2 *t1;
	Error_addToStringBuffer1078(zobj, zself);
	t1 = zself;
	return t1;
}

static void _freeArray1092(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000004U));
	_freeBytes258(zp, bytes1);
}

static void _freeArray1093(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000008U));
	_freeBytes258(zp, bytes1);
}

static void LocalPool_delete1094(LocalPool180 *zself)
{
	LocalPool_basicDelete1104(zself);
}

static void _freeArray1095(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000008U));
	_freeBytes258(zp, bytes1);
}

static void _freeArray1096(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000008U));
	_freeBytes258(zp, bytes1);
}

static void _freeArray1097(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000008U));
	_freeBytes258(zp, bytes1);
}

static void _freeArray1098(void *zp, int zn)
{
	size_t bytes1;
	bytes1 = (((size_t )zn) * ((size_t)0x0000000000000008U));
	_freeBytes258(zp, bytes1);
}

static StringBuffer2 *StringBuffer__shl1099(StringBuffer2 *zself, size_t zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer1100(zobj, zself);
	t1 = zself;
	return t1;
}

static void _addToStringBuffer1100(size_t zself, StringBuffer2 *zsb)
{
	unsigned char n1;
	n1 = ((unsigned char)32U);
	while((char)(n1 != ((unsigned char)0U)))
	{
		unsigned char byte2;
		(n1 -= ((unsigned char)8U));
		byte2 = ((unsigned char )(zself >> n1));
		StringBuffer_addHexaByte285(zsb, byte2);
	}
}

static void _output1101(unsigned char *ztemplate, size_t v1x)
{
	StringBuffer2 sb1;
	StringBuffer_initialize270((&sb1));
	StringBuffer_printFormat1102((&sb1), ztemplate, v1x);
	_println262(StringBuffer_string289((&sb1)));
	StringBuffer_release272((&sb1));
}

static void StringBuffer_printFormat1102(StringBuffer2 *zself, unsigned char *zs, size_t v2x)
{
	StringBuffer_removeAll286(zself);
	StringBuffer_addFormat1103(zself, zs, v2x);
}

static void StringBuffer_addFormat1103(StringBuffer2 *zself, unsigned char *zs, size_t v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1099(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static void LocalPool_basicDelete1104(LocalPool180 *zself)
{
	LocalPool_release851(zself);
	_free1105(((void *)zself));
}

static void _free1105(void *zp)
{
	size_t n1;
	n1 = ((size_t)0x0000000000000018U);
	_freeBytes258(zp, n1);
}

static File166 *_new1106(FILE170 *v0x)
{
	File166 *obj1;
	File166 *t2;
	obj1 = _allocate1107();
	File_initialize362(obj1, v0x);
	t2 = obj1;
	return t2;
}

static File166 *_allocate1107()
{
	File166 *t1;
	t1 = ((File166 *)_allocateBytes257(((size_t)0x0000000000000004U)));
	return t1;
}

static CBlock208 *MemoryPool_new1108(MemoryPool160 *zself)
{
	CBlock208 *obj1;
	CBlock208 *t2;
	obj1 = MemoryPool_allocate1109(zself);
	CBlock_initialize1069(obj1);
	t2 = obj1;
	return t2;
}

static CBlock208 *MemoryPool_allocate1109(MemoryPool160 *zself)
{
	CBlock208 *t1;
	t1 = ((CBlock208 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static CDeclaration210 *MemoryPool_new1110(MemoryPool160 *zself, unsigned char *v1x, Type98 *v2x)
{
	CDeclaration210 *obj1;
	CDeclaration210 *t2;
	obj1 = MemoryPool_allocate1111(zself);
	CDeclaration_initialize1112(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static CDeclaration210 *MemoryPool_allocate1111(MemoryPool160 *zself)
{
	CDeclaration210 *t1;
	t1 = ((CDeclaration210 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void CDeclaration_initialize1112(CDeclaration210 *zself, unsigned char *zname, Type98 *ztype)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CDeclaration_write1113);
	zself->name = zname;
	zself->type = ztype;
}

static void CDeclaration_write1113(CDeclaration210 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl1073(zout, zindent);
	StringBuffer_flushStringDeclaration992(zout, zself->type, zself->name);
	StringBuffer__shl367(zout, S1925);
}

static void Instruction_initialize1114(Instruction44 *zself, Module7 *zmodule, int zline, int zcode)
{
	zself->module = zmodule;
	((Location45 *)zself)->line = zline;
	zself->code = zcode;
}

static EvaluateInstruction46 *Instruction_asEvaluate1115(Instruction44 *zself)
{
	EvaluateInstruction46 *t1;
	t1 = ((EvaluateInstruction46 *)zself);
	return t1;
}

static AssignInstruction47 *Instruction_asAssign1116(Instruction44 *zself)
{
	AssignInstruction47 *t1;
	t1 = ((AssignInstruction47 *)zself);
	return t1;
}

static VariableInstruction48 *Instruction_asVariable1117(Instruction44 *zself)
{
	VariableInstruction48 *t1;
	t1 = ((VariableInstruction48 *)zself);
	return t1;
}

static ReturnInstruction49 *Instruction_asReturn1118(Instruction44 *zself)
{
	ReturnInstruction49 *t1;
	t1 = ((ReturnInstruction49 *)zself);
	return t1;
}

static LeaveInstruction50 *Instruction_asLeave1119(Instruction44 *zself)
{
	LeaveInstruction50 *t1;
	t1 = ((LeaveInstruction50 *)zself);
	return t1;
}

static SwitchInstruction55 *Instruction_asSwitch1120(Instruction44 *zself)
{
	SwitchInstruction55 *t1;
	t1 = ((SwitchInstruction55 *)zself);
	return t1;
}

static IfInstruction51 *Instruction_asIf1121(Instruction44 *zself)
{
	IfInstruction51 *t1;
	t1 = ((IfInstruction51 *)zself);
	return t1;
}

static WhileInstruction53 *Instruction_asWhile1122(Instruction44 *zself)
{
	WhileInstruction53 *t1;
	t1 = ((WhileInstruction53 *)zself);
	return t1;
}

static BreakInstruction54 *Instruction_asBreak1123(Instruction44 *zself)
{
	BreakInstruction54 *t1;
	t1 = ((BreakInstruction54 *)zself);
	return t1;
}

static BlockInstruction57 *Instruction_asBlock1124(Instruction44 *zself)
{
	BlockInstruction57 *t1;
	t1 = ((BlockInstruction57 *)zself);
	return t1;
}

static DeferInstruction58 *Instruction_asDefer1125(Instruction44 *zself)
{
	DeferInstruction58 *t1;
	t1 = ((DeferInstruction58 *)zself);
	return t1;
}

static void EvaluateInstruction_initialize1126(EvaluateInstruction46 *zself, Module7 *zmodule, int zline, ExpressionList61 *zvalues)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 0);
	zself->values = zvalues;
}

static CEvaluate211 *MemoryPool_new1127(MemoryPool160 *zself, CExpression221 *v1x)
{
	CEvaluate211 *obj1;
	CEvaluate211 *t2;
	obj1 = MemoryPool_allocate1128(zself);
	CEvaluate_initialize1129(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CEvaluate211 *MemoryPool_allocate1128(MemoryPool160 *zself)
{
	CEvaluate211 *t1;
	t1 = ((CEvaluate211 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void CEvaluate_initialize1129(CEvaluate211 *zself, CExpression221 *zvalue)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CEvaluate_write1130);
	zself->value = zvalue;
}

static void CEvaluate_write1130(CEvaluate211 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl1073(zout, zindent);
	StringBuffer__shl1047(zout, zself->value);
	StringBuffer__shl367(zout, S1925);
}

static CStringExpression234 *MemoryPool_new1131(MemoryPool160 *zself, unsigned char *v1x)
{
	CStringExpression234 *obj1;
	CStringExpression234 *t2;
	obj1 = MemoryPool_allocate1132(zself);
	CStringExpression_initialize1133(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CStringExpression234 *MemoryPool_allocate1132(MemoryPool160 *zself)
{
	CStringExpression234 *t1;
	t1 = ((CStringExpression234 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void CStringExpression_initialize1133(CStringExpression234 *zself, unsigned char *zstr)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CStringExpression_write1134);
	zself->str = zstr;
}

static void CStringExpression_write1134(CStringExpression234 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl367(zout, zself->str);
}

static CAssign207 *MemoryPool_new1135(MemoryPool160 *zself, CStringExpression234 *v1x, CExpression221 *v2x)
{
	CAssign207 *obj1;
	CAssign207 *t2;
	obj1 = MemoryPool_allocate1136(zself);
	CAssign_initialize1137(obj1, ((CExpression221 *)v1x), v2x);
	t2 = obj1;
	return t2;
}

static CAssign207 *MemoryPool_allocate1136(MemoryPool160 *zself)
{
	CAssign207 *t1;
	t1 = ((CAssign207 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void CAssign_initialize1137(CAssign207 *zself, CExpression221 *zleft, CExpression221 *zright)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CAssign_write1138);
	zself->left = zleft;
	zself->right = zright;
}

static void CAssign_write1138(CAssign207 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl1073(zout, zindent);
	StringBuffer__shl1047(zout, zself->left);
	StringBuffer__shl367(zout, S1887);
	StringBuffer__shl1047(zout, zself->right);
	StringBuffer__shl367(zout, S1925);
}

static void VariableInstruction_initialize1139(VariableInstruction48 *zself, Module7 *zmodule, int zline, Variable41 *zvariable, Expression21 *zvalue)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 2);
	zself->variable = zvariable;
	zself->value = zvalue;
}

static void AssignInstruction_initialize1140(AssignInstruction47 *zself, Module7 *zmodule, int zline, ExpressionList61 *zleft, ExpressionList61 *zright)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 1);
	zself->left = zleft;
	zself->right = zright;
}

static CStringExpression234 **MemoryPool_allocateArray1141(MemoryPool160 *zself, int zn)
{
	CStringExpression234 **t1;
	t1 = ((CStringExpression234 **)MemoryPool_allocateBytes297(zself, (((size_t )zn) * ((size_t)0x0000000000000004U))));
	return t1;
}

static CAssign207 *MemoryPool_new1142(MemoryPool160 *zself, CExpression221 *v1x, CExpression221 *v2x)
{
	CAssign207 *obj1;
	CAssign207 *t2;
	obj1 = MemoryPool_allocate1136(zself);
	CAssign_initialize1137(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static CAssign207 *MemoryPool_new1143(MemoryPool160 *zself, CExpression221 *v1x, CStringExpression234 *v2x)
{
	CAssign207 *obj1;
	CAssign207 *t2;
	obj1 = MemoryPool_allocate1136(zself);
	CAssign_initialize1137(obj1, v1x, ((CExpression221 *)v2x));
	t2 = obj1;
	return t2;
}

static void ReturnInstruction_initialize1144(ReturnInstruction49 *zself, Module7 *zmodule, int zline, ExpressionList61 *zexpressions)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 3);
	zself->expressions = zexpressions;
}

static CReturn220 *MemoryPool_new1145(MemoryPool160 *zself)
{
	CReturn220 *obj1;
	CReturn220 *t2;
	obj1 = MemoryPool_allocate1146(zself);
	CReturn_initialize1147(obj1);
	t2 = obj1;
	return t2;
}

static CReturn220 *MemoryPool_allocate1146(MemoryPool160 *zself)
{
	CReturn220 *t1;
	t1 = ((CReturn220 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void CReturn_initialize1147(CReturn220 *zself)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CReturn_write1148);
	zself->value = ((CExpression221 *)0);
}

static void CReturn_write1148(CReturn220 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl1073(zout, zindent);
	StringBuffer__shl367(zout, S1875);
	if((char)(zself->value != ((CExpression221 *)0)))
	{
		StringBuffer__shl1047(StringBuffer__shl367(zout, S1874), zself->value);
	}
	StringBuffer__shl367(zout, S1925);
}

static COutExpression231 *MemoryPool_new1149(MemoryPool160 *zself, int v1x)
{
	COutExpression231 *obj1;
	COutExpression231 *t2;
	obj1 = MemoryPool_allocate1150(zself);
	COutExpression_initialize1043(obj1, v1x);
	t2 = obj1;
	return t2;
}

static COutExpression231 *MemoryPool_allocate1150(MemoryPool160 *zself)
{
	COutExpression231 *t1;
	t1 = ((COutExpression231 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static CDereferenceExpression227 *MemoryPool_new1151(MemoryPool160 *zself, COutExpression231 *v1x)
{
	CDereferenceExpression227 *obj1;
	CDereferenceExpression227 *t2;
	obj1 = MemoryPool_allocate1152(zself);
	CDereferenceExpression_initialize1153(obj1, ((CExpression221 *)v1x));
	t2 = obj1;
	return t2;
}

static CDereferenceExpression227 *MemoryPool_allocate1152(MemoryPool160 *zself)
{
	CDereferenceExpression227 *t1;
	t1 = ((CDereferenceExpression227 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void CDereferenceExpression_initialize1153(CDereferenceExpression227 *zself, CExpression221 *ze)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CDereferenceExpression_write1154);
	zself->e = ze;
}

static void CDereferenceExpression_write1154(CDereferenceExpression227 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl367(zout, S1873);
	StringBuffer__shl1047(zout, zself->e);
	StringBuffer__shl367(zout, S1872);
}

static CAssign207 *MemoryPool_new1155(MemoryPool160 *zself, CDereferenceExpression227 *v1x, CExpression221 *v2x)
{
	CAssign207 *obj1;
	CAssign207 *t2;
	obj1 = MemoryPool_allocate1136(zself);
	CAssign_initialize1137(obj1, ((CExpression221 *)v1x), v2x);
	t2 = obj1;
	return t2;
}

static void LeaveInstruction_initialize1156(LeaveInstruction50 *zself, Module7 *zmodule, int zline, MacroBlock86 *zblock, ExpressionList61 *zarguments)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 4);
	zself->block = zblock;
	zself->arguments = zarguments;
}

static CGoto212 *MemoryPool_new1157(MemoryPool160 *zself, unsigned char *v1x)
{
	CGoto212 *obj1;
	CGoto212 *t2;
	obj1 = MemoryPool_allocate1158(zself);
	CGoto_initialize1159(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CGoto212 *MemoryPool_allocate1158(MemoryPool160 *zself)
{
	CGoto212 *t1;
	t1 = ((CGoto212 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void CGoto_initialize1159(CGoto212 *zself, unsigned char *zlabel)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CGoto_write1160);
	zself->label = zlabel;
}

static void CGoto_write1160(CGoto212 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl367(StringBuffer__shl367(StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1870), zself->label), S1925);
}

static void IfInstruction_initialize1161(IfInstruction51 *zself, Module7 *zmodule, int zline)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 7);
	Collection_initialize1163((&zself->rules));
	zself->elseBlock = ((Block38 *)0);
}

static void IfInstruction_addRule1162(IfInstruction51 *zself, Module7 *zmodule, int zline, Expression21 *zcondition, Block38 *zblock)
{
	Program5 *program1;
	Rule59 *r2;
	program1 = zmodule->program;
	r2 = MemoryPool_allocate1436(program1->pool);
	((Location45 *)r2)->line = zline;
	r2->module = zmodule;
	r2->condition = zcondition;
	r2->block = zblock;
	Collection_add1164((&zself->rules), r2);
}

static void Collection_initialize1163(Collection52 *zself)
{
	zself->size = 0;
	zself->firstElement = ((Rule59 *)0);
	zself->lastElement = ((Rule59 *)0);
}

static void Collection_add1164(Collection52 *zself, Rule59 *ze)
{
	if((char)(zself->lastElement != ((Rule59 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((Rule59 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((Rule59 *)0);
}

static void WhileInstruction_initialize1165(WhileInstruction53 *zself, Module7 *zmodule, int zline)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 5);
	zself->condition = ((Expression21 *)0);
	zself->block = ((Block38 *)0);
	zself->hasBreak = 0;
	zself->hasContinue = 0;
}

static CWhile215 *MemoryPool_new1166(MemoryPool160 *zself)
{
	CWhile215 *obj1;
	CWhile215 *t2;
	obj1 = MemoryPool_allocate1167(zself);
	CWhile_initialize1168(obj1);
	t2 = obj1;
	return t2;
}

static CWhile215 *MemoryPool_allocate1167(MemoryPool160 *zself)
{
	CWhile215 *t1;
	t1 = ((CWhile215 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void CWhile_initialize1168(CWhile215 *zself)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CWhile_write1169);
}

static void CWhile_write1169(CWhile215 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl1073(zout, zindent);
	if((char)(zself->condition != ((CExpression221 *)0)))
	{
		StringBuffer__shl367(StringBuffer__shl1047(StringBuffer__shl367(zout, S1869), zself->condition), S1868);
	}
	else
	{
		StringBuffer__shl367(zout, S1867);
	}
	CBlock_write1070(zself->block, zout, zindent);
}

static CLabel213 *MemoryPool_new1170(MemoryPool160 *zself, unsigned char *v1x)
{
	CLabel213 *obj1;
	CLabel213 *t2;
	obj1 = MemoryPool_allocate1171(zself);
	CLabel_initialize1172(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CLabel213 *MemoryPool_allocate1171(MemoryPool160 *zself)
{
	CLabel213 *t1;
	t1 = ((CLabel213 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void CLabel_initialize1172(CLabel213 *zself, unsigned char *zlabel)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CLabel_write1173);
	zself->label = zlabel;
}

static void CLabel_write1173(CLabel213 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl367(StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), zself->label), S1866);
}

static void BreakInstruction_initialize1174(BreakInstruction54 *zself, Module7 *zmodule, int zline, int zcode, WhileInstruction53 *zinstruction)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, zcode);
	zself->instruction = zinstruction;
}

static CSwitch216 *MemoryPool_new1175(MemoryPool160 *zself)
{
	CSwitch216 *obj1;
	CSwitch216 *t2;
	obj1 = MemoryPool_allocate1176(zself);
	CSwitch_initialize1177(obj1);
	t2 = obj1;
	return t2;
}

static CSwitch216 *MemoryPool_allocate1176(MemoryPool160 *zself)
{
	CSwitch216 *t1;
	t1 = ((CSwitch216 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static void CSwitch_initialize1177(CSwitch216 *zself)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CSwitch_write1178);
	Collection_initialize1179((&zself->choices));
	zself->elseBlock = ((CBlock208 *)0);
}

static void CSwitch_write1178(CSwitch216 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl367(StringBuffer__shl1047(StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1865), zself->value), S1864);
	StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1885);
	{
		Collection217 *self1;
		CChoice218 *e2;
		self1 = (&zself->choices);
		e2 = self1->firstElement;
		while((char)(e2 != ((CChoice218 *)0)))
		{
			{
				{
					Collection219 *self3;
					CExpression221 *e4;
					self3 = (&e2->values);
					e4 = self3->firstElement;
					while((char)(e4 != ((CExpression221 *)0)))
					{
						{
							StringBuffer__shl367(StringBuffer__shl1047(StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1863), e4), S1862);
						}
						e4 = e4->nextSibling;
					}
				}
				CBlock_write1070(e2->block, zout, zindent);
				StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1861);
			}
			e2 = e2->nextSibling;
		}
	}
	if((char)(zself->elseBlock != ((CBlock208 *)0)))
	{
		StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1860);
		CBlock_write1070(zself->elseBlock, zout, zindent);
	}
	StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1884);
}

static void Collection_initialize1179(Collection217 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CChoice218 *)0);
	zself->lastElement = ((CChoice218 *)0);
}

static void Collection_add1180(Collection217 *zself, CChoice218 *ze)
{
	if((char)(zself->lastElement != ((CChoice218 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CChoice218 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CChoice218 *)0);
}

static void CChoice_initialize1181(CChoice218 *zself)
{
	Collection_initialize1182((&zself->values));
}

static void Collection_initialize1182(Collection219 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CExpression221 *)0);
	zself->lastElement = ((CExpression221 *)0);
}

static void Collection_add1183(Collection219 *zself, CExpression221 *ze)
{
	if((char)(zself->lastElement != ((CExpression221 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CExpression221 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CExpression221 *)0);
}

static void SwitchInstruction_initialize1184(SwitchInstruction55 *zself, Module7 *zmodule, int zline, Expression21 *zvalue)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 6);
	zself->value = zvalue;
	Collection_initialize1186((&zself->choices));
	zself->elseBlock = ((Block38 *)0);
	zself->terminated = 0;
}

static void SwitchInstruction_addChoice1185(SwitchInstruction55 *zself, Program5 *zprogram, int zline, ExpressionList61 *zvalues, Block38 *zblock)
{
	Choice60 *c1;
	c1 = MemoryPool_allocate1450(zprogram->pool);
	((Location45 *)c1)->line = zline;
	c1->values = zvalues;
	c1->block = zblock;
	Collection_add1187((&zself->choices), c1);
}

static void Collection_initialize1186(Collection56 *zself)
{
	zself->size = 0;
	zself->firstElement = ((Choice60 *)0);
	zself->lastElement = ((Choice60 *)0);
}

static void Collection_add1187(Collection56 *zself, Choice60 *ze)
{
	if((char)(zself->lastElement != ((Choice60 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((Choice60 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((Choice60 *)0);
}

static CChoice218 *MemoryPool_new1188(MemoryPool160 *zself)
{
	CChoice218 *obj1;
	CChoice218 *t2;
	obj1 = MemoryPool_allocate1189(zself);
	CChoice_initialize1181(obj1);
	t2 = obj1;
	return t2;
}

static CChoice218 *MemoryPool_allocate1189(MemoryPool160 *zself)
{
	CChoice218 *t1;
	t1 = ((CChoice218 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void BlockInstruction_initialize1190(BlockInstruction57 *zself, Module7 *zmodule, int zline, Block38 *zblock)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 10);
	zself->block = zblock;
}

static UnwindItem243 *MemoryPool_allocate1191(MemoryPool160 *zself)
{
	UnwindItem243 *t1;
	t1 = ((UnwindItem243 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static void DeferInstruction_initialize1192(DeferInstruction58 *zself, Module7 *zmodule, int zline)
{
	Instruction_initialize1114(((Instruction44 *)zself), zmodule, zline, 11);
	Block_initialize914((&zself->block));
}

static void _assertFailure1193(unsigned char *zs)
{
}

static CIf214 *MemoryPool_new1194(MemoryPool160 *zself)
{
	CIf214 *obj1;
	CIf214 *t2;
	obj1 = MemoryPool_allocate1195(zself);
	CIf_initialize1196(obj1);
	t2 = obj1;
	return t2;
}

static CIf214 *MemoryPool_allocate1195(MemoryPool160 *zself)
{
	CIf214 *t1;
	t1 = ((CIf214 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void CIf_initialize1196(CIf214 *zself)
{
	((CStatement206 *)zself)->writeFunction = ((void (*)(CStatement206 *, StringBuffer2 *, StringBuffer2 *))CIf_write1197);
}

static void CIf_write1197(CIf214 *zself, StringBuffer2 *zout, StringBuffer2 *zindent)
{
	StringBuffer__shl367(StringBuffer__shl1047(StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1858), zself->condition), S1868);
	CBlock_write1070(zself->thenBlock, zout, zindent);
	if((char)(zself->elseBlock != ((CBlock208 *)0)))
	{
		StringBuffer__shl367(StringBuffer__shl1073(zout, zindent), S1857);
		CBlock_write1070(zself->elseBlock, zout, zindent);
	}
}

static CCastExpression224 *MemoryPool_new1198(MemoryPool160 *zself, CExpression221 *v1x, Type98 *v2x)
{
	CCastExpression224 *obj1;
	CCastExpression224 *t2;
	obj1 = MemoryPool_allocate1199(zself);
	CCastExpression_initialize1200(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static CCastExpression224 *MemoryPool_allocate1199(MemoryPool160 *zself)
{
	CCastExpression224 *t1;
	t1 = ((CCastExpression224 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void CCastExpression_initialize1200(CCastExpression224 *zself, CExpression221 *ze, Type98 *zt)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CCastExpression_write1201);
	zself->expression = ze;
	zself->type = zt;
}

static void CCastExpression_write1201(CCastExpression224 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl367(zout, S1856);
	StringBuffer_flushStringDeclaration992(zout, zself->type, S2118);
	StringBuffer__shl365(zout, ((unsigned char)41U));
	StringBuffer__shl1047(zout, zself->expression);
	StringBuffer__shl365(zout, ((unsigned char)41U));
}

static void SelectExpression_initialize1202(SelectExpression87 *zself, Expression21 *zargument, int zindex, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 8, ztype);
	zself->argument = zargument;
	zself->index = zindex;
}

static CIntegerExpression230 *MemoryPool_new1203(MemoryPool160 *zself, IntegerExpression20 *v1x)
{
	CIntegerExpression230 *obj1;
	CIntegerExpression230 *t2;
	obj1 = MemoryPool_allocate1204(zself);
	CIntegerExpression_initialize1205(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CIntegerExpression230 *MemoryPool_allocate1204(MemoryPool160 *zself)
{
	CIntegerExpression230 *t1;
	t1 = ((CIntegerExpression230 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void CIntegerExpression_initialize1205(CIntegerExpression230 *zself, IntegerExpression20 *ze)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CIntegerExpression_write1206);
	zself->e = ze;
}

static void CIntegerExpression_write1206(CIntegerExpression230 *zself, StringBuffer2 *zout)
{
	IntegerExpression20 *e1;
	e1 = zself->e;
	switch( ((Expression21 *)e1)->type->code )
	{
	case 8:
	{
		StringBuffer__shl367(StringBuffer__shl1099(StringBuffer__shl367(zout, S1854), ((size_t )e1->value)), S1853);
	}
	break;
	case 7:
	{
		switch( ((Expression21 *)e1)->type->size )
		{
		case ((size_t)0x0000000000000001U):
		{
			StringBuffer__shl367(StringBuffer__shl1207(StringBuffer__shl367(zout, S1852), ((unsigned int )e1->value)), S1853);
		}
		break;
		case ((size_t)0x0000000000000002U):
		{
			StringBuffer__shl367(StringBuffer__shl1207(StringBuffer__shl367(zout, S1851), ((unsigned int )e1->value)), S1853);
		}
		break;
		case ((size_t)0x0000000000000008U):
		{
			StringBuffer__shl367(StringBuffer__shl1209(zout, e1->value), S1850);
		}
		break;
		default:
		{
			StringBuffer__shl365(StringBuffer__shl1207(zout, ((unsigned int )e1->value)), ((unsigned char)85U));
		}
		}
	}
	break;
	case 6:
	{
		switch( ((Expression21 *)e1)->type->size )
		{
		case ((size_t)0x0000000000000001U):
		{
			StringBuffer__shl365(StringBuffer__shl1039(StringBuffer__shl367(zout, S1849), ((int )e1->value)), ((unsigned char)41U));
		}
		break;
		case ((size_t)0x0000000000000002U):
		{
			StringBuffer__shl365(StringBuffer__shl1039(StringBuffer__shl367(zout, S1848), ((int )e1->value)), ((unsigned char)41U));
		}
		break;
		case ((size_t)0x0000000000000008U):
		{
			StringBuffer__shl367(StringBuffer__shl1211(zout, ((long long )e1->value)), S1847);
		}
		break;
		default:
		{
			if((char)(e1->value != 2147483648UL))
			{
				StringBuffer__shl1039(zout, ((int )e1->value));
			}
			else
			{
				StringBuffer__shl365(StringBuffer__shl1207(zout, ((unsigned int )e1->value)), ((unsigned char)85U));
			}
		}
		}
	}
	break;
	case 9:
	{
		StringBuffer__shl367(zout, S1856);
		StringBuffer_flushStringDeclaration992(zout, ((Expression21 *)e1)->type, S2118);
		StringBuffer__shl365(StringBuffer__shl1039(StringBuffer__shl365(zout, ((unsigned char)41U)), ((int )e1->value)), ((unsigned char)41U));
	}
	break;
	default:
	{
		if((char)(e1->value != 2147483648UL))
		{
			StringBuffer__shl1039(zout, ((int )e1->value));
		}
		else
		{
			StringBuffer__shl365(StringBuffer__shl1207(zout, IntegerExpression_unsignedValue512(e1)), ((unsigned char)85U));
		}
	}
	}
}

static StringBuffer2 *StringBuffer__shl1207(StringBuffer2 *zself, unsigned int zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer1208(zobj, zself);
	t1 = zself;
	return t1;
}

static void _addToStringBuffer1208(unsigned int zself, StringBuffer2 *zx)
{
	StringBuffer_addUnsigned281(zx, zself);
}

static StringBuffer2 *StringBuffer__shl1209(StringBuffer2 *zself, unsigned long long zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer1210(zobj, zself);
	t1 = zself;
	return t1;
}

static void _addToStringBuffer1210(unsigned long long zself, StringBuffer2 *zx)
{
	StringBuffer_addUnsigned64283(zx, zself);
}

static StringBuffer2 *StringBuffer__shl1211(StringBuffer2 *zself, long long zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer1212(zobj, zself);
	t1 = zself;
	return t1;
}

static void _addToStringBuffer1212(long long zself, StringBuffer2 *zx)
{
	StringBuffer_addInteger64284(zx, zself);
}

static CReferenceExpression233 *MemoryPool_new1213(MemoryPool160 *zself, CStringExpression234 *v1x)
{
	CReferenceExpression233 *obj1;
	CReferenceExpression233 *t2;
	obj1 = MemoryPool_allocate1214(zself);
	CReferenceExpression_initialize1215(obj1, ((CExpression221 *)v1x));
	t2 = obj1;
	return t2;
}

static CReferenceExpression233 *MemoryPool_allocate1214(MemoryPool160 *zself)
{
	CReferenceExpression233 *t1;
	t1 = ((CReferenceExpression233 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void CReferenceExpression_initialize1215(CReferenceExpression233 *zself, CExpression221 *ze)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CReferenceExpression_write1216);
	zself->e = ze;
}

static void CReferenceExpression_write1216(CReferenceExpression233 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl367(zout, S1846);
	StringBuffer__shl1047(zout, zself->e);
	StringBuffer__shl367(zout, S1872);
}

static void FunctionExpression_initialize1217(FunctionExpression70 *zself, Prototype31 *zvalue, Program5 *zprogram, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 5, ztype);
	zself->value = zvalue;
	zself->next = zprogram->functionConstants;
	zprogram->functionConstants = zself;
}

static void FunctionExpression_addToStringBuffer1218(FunctionExpression70 *zself, StringBuffer2 *zsb)
{
	if((char)(((Definition32 *)zself->value)->code == 4))
	{
		StringBuffer__shl1286(zsb, Definition_asFunction683(((Definition32 *)zself->value)));
	}
	else
	{
		StringBuffer__shl861(zsb, ((Definition32 *)zself->value)->name);
	}
}

static void GlobalExpression_initialize1219(GlobalExpression71 *zself, GlobalVariable97 *zvariable, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 6, ztype);
	zself->variable = zvariable;
}

static void BinaryExpression_initialize1220(BinaryExpression72 *zself, int zcode, Type98 *ztype, Expression21 *zargument1, Expression21 *zargument2)
{
	Expression_initialize475(((Expression21 *)zself), zcode, ztype);
	zself->argument1 = zargument1;
	zself->argument2 = zargument2;
}

static CInfixExpression229 *MemoryPool_new1221(MemoryPool160 *zself, CExpression221 *v1x, unsigned char *v2x, CExpression221 *v3x)
{
	CInfixExpression229 *obj1;
	CInfixExpression229 *t2;
	obj1 = MemoryPool_allocate1222(zself);
	CInfixExpression_initialize1223(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static CInfixExpression229 *MemoryPool_allocate1222(MemoryPool160 *zself)
{
	CInfixExpression229 *t1;
	t1 = ((CInfixExpression229 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void CInfixExpression_initialize1223(CInfixExpression229 *zself, CExpression221 *zleft, unsigned char *zop, CExpression221 *zright)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CInfixExpression_write1224);
	zself->op = zop;
	zself->left = zleft;
	zself->right = zright;
}

static void CInfixExpression_write1224(CInfixExpression229 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl365(StringBuffer__shl1047(StringBuffer__shl367(StringBuffer__shl1047(StringBuffer__shl365(zout, ((unsigned char)40U)), zself->left), zself->op), zself->right), ((unsigned char)41U));
}

static void CondExpression_initialize1225(CondExpression82 *zself, Program5 *zprogram, Expression21 *zcondition, ExpressionList61 *zargument1, ExpressionList61 *zargument2, TypeSequence108 *ztypes)
{
	CompositeExpression_initialize1067(((CompositeExpression75 *)zself), 17, ztypes, zprogram);
	zself->condition = zcondition;
	zself->argument1 = zargument1;
	zself->argument2 = zargument2;
}

static unsigned char **MemoryPool_allocateArray1226(MemoryPool160 *zself, int zn)
{
	unsigned char **t1;
	t1 = ((unsigned char **)MemoryPool_allocateBytes297(zself, (((size_t )zn) * ((size_t)0x0000000000000004U))));
	return t1;
}

static CCondExpression226 *MemoryPool_new1227(MemoryPool160 *zself, CExpression221 *v1x, CExpression221 *v2x, CExpression221 *v3x)
{
	CCondExpression226 *obj1;
	CCondExpression226 *t2;
	obj1 = MemoryPool_allocate1228(zself);
	CCondExpression_initialize1229(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static CCondExpression226 *MemoryPool_allocate1228(MemoryPool160 *zself)
{
	CCondExpression226 *t1;
	t1 = ((CCondExpression226 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static void CCondExpression_initialize1229(CCondExpression226 *zself, CExpression221 *zcondition, CExpression221 *zleft, CExpression221 *zright)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CCondExpression_write1230);
	zself->condition = zcondition;
	zself->left = zleft;
	zself->right = zright;
}

static void CCondExpression_write1230(CCondExpression226 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl365(StringBuffer__shl1047(StringBuffer__shl365(StringBuffer__shl1047(StringBuffer__shl365(StringBuffer__shl1047(StringBuffer__shl365(zout, ((unsigned char)40U)), zself->condition), ((unsigned char)63U)), zself->left), ((unsigned char)58U)), zself->right), ((unsigned char)41U));
}

static void FunctionCallExpression_initialize1231(FunctionCallExpression76 *zself, Function33 *zf, ExpressionList61 *zarguments)
{
	CompositeExpression_initialize1067(((CompositeExpression75 *)zself), 13, ((Prototype31 *)zf)->returnTypes, Definition_module682(((Definition32 *)zf))->program);
	zself->func = zf;
	zself->arguments = zarguments;
}

static CCallExpression223 *MemoryPool_new1232(MemoryPool160 *zself)
{
	CCallExpression223 *obj1;
	CCallExpression223 *t2;
	obj1 = MemoryPool_allocate1233(zself);
	CCallExpression_initialize1234(obj1);
	t2 = obj1;
	return t2;
}

static CCallExpression223 *MemoryPool_allocate1233(MemoryPool160 *zself)
{
	CCallExpression223 *t1;
	t1 = ((CCallExpression223 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static void CCallExpression_initialize1234(CCallExpression223 *zself)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CCallExpression_write1235);
	zself->f = ((CExpression221 *)0);
	Collection_initialize1182((&zself->arguments));
}

static void CCallExpression_write1235(CCallExpression223 *zself, StringBuffer2 *zout)
{
	char comma1;
	StringBuffer__shl1047(zout, zself->f);
	StringBuffer__shl365(zout, ((unsigned char)40U));
	comma1 = 0;
	{
		Collection219 *self2;
		CExpression221 *e3;
		self2 = (&zself->arguments);
		e3 = self2->firstElement;
		while((char)(e3 != ((CExpression221 *)0)))
		{
			{
				comma1 = StringBuffer_writeComma1236(zout, comma1);
				StringBuffer__shl1047(zout, e3);
			}
			e3 = e3->nextSibling;
		}
	}
	StringBuffer__shl365(zout, ((unsigned char)41U));
}

static char StringBuffer_writeComma1236(StringBuffer2 *zout, char zcomma)
{
	char t1;
	if(zcomma)
	{
		StringBuffer__shl367(zout, S1954);
	}
	t1 = 1;
	return t1;
}

static Expression21 *CollectionPool_elementValue1237(CollectionPool62 *zself, CollectionPoolElement205 *zelement)
{
	Expression21 *t1;
	t1 = zelement->object;
	return t1;
}

static CollectionPoolElement205 *Collection_nextElement1238(Collection63 *zself, CollectionPoolElement205 *zelement)
{
	CollectionPoolElement205 *t1;
	t1 = zelement->nextSibling;
	return t1;
}

static void ExternFunctionCallExpression_initialize1239(ExternFunctionCallExpression77 *zself, ExternFunction36 *zf, ExpressionList61 *zarguments)
{
	CompositeExpression_initialize1067(((CompositeExpression75 *)zself), 14, ((Prototype31 *)zf)->returnTypes, Definition_module682(((Definition32 *)zf))->program);
	zself->func = zf;
	zself->arguments = zarguments;
}

static void PointerCallExpression_initialize1240(PointerCallExpression78 *zself, Program5 *zprogram, Expression21 *zf, ExpressionList61 *zarguments, TypeSequence108 *ztypes)
{
	CompositeExpression_initialize1067(((CompositeExpression75 *)zself), 67, ztypes, zprogram);
	zself->func = zf;
	zself->arguments = zarguments;
}

static CAssign207 *MemoryPool_new1241(MemoryPool160 *zself, CStringExpression234 *v1x, CCallExpression223 *v2x)
{
	CAssign207 *obj1;
	CAssign207 *t2;
	obj1 = MemoryPool_allocate1136(zself);
	CAssign_initialize1137(obj1, ((CExpression221 *)v1x), ((CExpression221 *)v2x));
	t2 = obj1;
	return t2;
}

static void LocalVariableExpression_initialize1242(LocalVariableExpression80 *zself, Variable41 *zv, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 11, ztype);
	zself->variable = zv;
}

static CReferenceExpression233 *MemoryPool_new1243(MemoryPool160 *zself, CExpression221 *v1x)
{
	CReferenceExpression233 *obj1;
	CReferenceExpression233 *t2;
	obj1 = MemoryPool_allocate1214(zself);
	CReferenceExpression_initialize1215(obj1, v1x);
	t2 = obj1;
	return t2;
}

static void GlobalVariableExpression_initialize1244(GlobalVariableExpression81 *zself, GlobalVariable97 *zv, Type98 *ztype)
{
	Expression_initialize475(((Expression21 *)zself), 12, ztype);
	zself->variable = zv;
}

static void AttributeExpression_initialize1245(AttributeExpression84 *zself, Expression21 *zargument, Attribute107 *zattribute)
{
	Expression_initialize475(((Expression21 *)zself), 16, zattribute->type);
	zself->argument = zargument;
	zself->attribute = zattribute;
}

static CAttributeExpression222 *MemoryPool_new1246(MemoryPool160 *zself, CExpression221 *v1x, unsigned char *v2x)
{
	CAttributeExpression222 *obj1;
	CAttributeExpression222 *t2;
	obj1 = MemoryPool_allocate1247(zself);
	CAttributeExpression_initialize1248(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static CAttributeExpression222 *MemoryPool_allocate1247(MemoryPool160 *zself)
{
	CAttributeExpression222 *t1;
	t1 = ((CAttributeExpression222 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void CAttributeExpression_initialize1248(CAttributeExpression222 *zself, CExpression221 *zstructure, unsigned char *zattribute)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CAttributeExpression_write1249);
	zself->structure = zstructure;
	zself->attribute = zattribute;
}

static void CAttributeExpression_write1249(CAttributeExpression222 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl367(StringBuffer__shl367(StringBuffer__shl1047(zout, zself->structure), S1840), zself->attribute);
}

static void VargsEachExpression_initialize1250(VargsEachExpression83 *zself, Block38 *zblock, Program5 *zprogram)
{
	Expression_initialize475(((Expression21 *)zself), 18, ((Type98 *)zprogram->voidType));
	zself->block = zblock;
}

static void UnaryExpression_initialize1251(UnaryExpression73 *zself, int zcode, Type98 *ztype, Expression21 *zargument)
{
	Expression_initialize475(((Expression21 *)zself), zcode, ztype);
	zself->argument = zargument;
}

static void MacroCallExpression_initialize1252(MacroCallExpression85 *zself, Program5 *zprogram, TypeSequence108 *zreturnTypes, MacroBlock86 *zblock)
{
	CompositeExpression_initialize1067(((CompositeExpression75 *)zself), 15, zreturnTypes, zprogram);
	zself->block = zblock;
}

static CPrefixExpression232 *MemoryPool_new1253(MemoryPool160 *zself, unsigned char *v1x, CExpression221 *v2x)
{
	CPrefixExpression232 *obj1;
	CPrefixExpression232 *t2;
	obj1 = MemoryPool_allocate1254(zself);
	CPrefixExpression_initialize1255(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static CPrefixExpression232 *MemoryPool_allocate1254(MemoryPool160 *zself)
{
	CPrefixExpression232 *t1;
	t1 = ((CPrefixExpression232 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void CPrefixExpression_initialize1255(CPrefixExpression232 *zself, unsigned char *zop, CExpression221 *zvalue)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CPrefixExpression_write1256);
	zself->op = zop;
	zself->value = zvalue;
}

static void CPrefixExpression_write1256(CPrefixExpression232 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl365(StringBuffer__shl1047(StringBuffer__shl367(StringBuffer__shl365(zout, ((unsigned char)40U)), zself->op), zself->value), ((unsigned char)41U));
}

static CCompareExpression225 *MemoryPool_new1257(MemoryPool160 *zself, CExpression221 *v1x, unsigned char *v2x, CExpression221 *v3x)
{
	CCompareExpression225 *obj1;
	CCompareExpression225 *t2;
	obj1 = MemoryPool_allocate1258(zself);
	CCompareExpression_initialize1259(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static CCompareExpression225 *MemoryPool_allocate1258(MemoryPool160 *zself)
{
	CCompareExpression225 *t1;
	t1 = ((CCompareExpression225 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void CCompareExpression_initialize1259(CCompareExpression225 *zself, CExpression221 *zleft, unsigned char *zop, CExpression221 *zright)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CCompareExpression_write1260);
	zself->op = zop;
	zself->left = zleft;
	zself->right = zright;
}

static void CCompareExpression_write1260(CCompareExpression225 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl365(StringBuffer__shl1047(StringBuffer__shl367(StringBuffer__shl1047(StringBuffer__shl365(StringBuffer__shl367(zout, S1815), ((unsigned char)40U)), zself->left), zself->op), zself->right), ((unsigned char)41U));
}

static CCompareExpression225 *MemoryPool_new1261(MemoryPool160 *zself, CCastExpression224 *v1x, unsigned char *v2x, CCastExpression224 *v3x)
{
	CCompareExpression225 *obj1;
	CCompareExpression225 *t2;
	obj1 = MemoryPool_allocate1258(zself);
	CCompareExpression_initialize1259(obj1, ((CExpression221 *)v1x), v2x, ((CExpression221 *)v3x));
	t2 = obj1;
	return t2;
}

static CDereferenceExpression227 *MemoryPool_new1262(MemoryPool160 *zself, CExpression221 *v1x)
{
	CDereferenceExpression227 *obj1;
	CDereferenceExpression227 *t2;
	obj1 = MemoryPool_allocate1152(zself);
	CDereferenceExpression_initialize1153(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CIndexExpression228 *MemoryPool_new1263(MemoryPool160 *zself, CExpression221 *v1x, CExpression221 *v2x)
{
	CIndexExpression228 *obj1;
	CIndexExpression228 *t2;
	obj1 = MemoryPool_allocate1264(zself);
	CIndexExpression_initialize1265(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static CIndexExpression228 *MemoryPool_allocate1264(MemoryPool160 *zself)
{
	CIndexExpression228 *t1;
	t1 = ((CIndexExpression228 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void CIndexExpression_initialize1265(CIndexExpression228 *zself, CExpression221 *zarray, CExpression221 *zindex)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CIndexExpression_write1266);
	zself->array = zarray;
	zself->index = zindex;
}

static void CIndexExpression_write1266(CIndexExpression228 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl365(StringBuffer__shl1047(StringBuffer__shl365(StringBuffer__shl1047(zout, zself->array), ((unsigned char)91U)), zself->index), ((unsigned char)93U));
}

static void _assertFailure1267(unsigned char *zs, int v1x)
{
}

static void CArrayExpression_initialize1268(CArrayExpression236 *zself, size_t zsize, CExpression221 *zinner)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CArrayExpression_write1269);
	zself->inner = zinner;
	zself->size = zsize;
}

static void CArrayExpression_write1269(CArrayExpression236 *zself, StringBuffer2 *zout)
{
	StringBuffer__shl365(StringBuffer__shl365(StringBuffer__shl1047(StringBuffer__shl365(zout, ((unsigned char)40U)), zself->inner), ((unsigned char)41U)), ((unsigned char)91U));
	if((char)(zself->size != ((size_t)0x0000000000000000U)))
	{
		StringBuffer__shl1207(zout, ((unsigned int )zself->size));
	}
	StringBuffer__shl365(zout, ((unsigned char)93U));
}

static void CFunctionTypeExpression_initialize1270(CFunctionTypeExpression235 *zself, FunctionType103 *ztype, CExpression221 *zinner)
{
	((CExpression221 *)zself)->writeFunction = ((void (*)(CExpression221 *, StringBuffer2 *))CFunctionTypeExpression_write1271);
	zself->type = ztype;
	zself->inner = zinner;
}

static void CFunctionTypeExpression_write1271(CFunctionTypeExpression235 *zself, StringBuffer2 *zout)
{
	char comma1;
	StringBuffer__shl365(zout, ((unsigned char)40U));
	StringBuffer_flushCallingConvention997(zout, zself->type->callingConvention);
	StringBuffer__shl367(StringBuffer__shl1047(zout, zself->inner), S1794);
	comma1 = 0;
	{
		FunctionType103 *self2;
		self2 = zself->type;
		{
			TypeSequence108 *self3;
			self3 = self2->types;
			{
				int self4;
				int i5;
				self4 = self3->size;
				i5 = 0;
				while((char)(i5 < self4))
				{
					{
						{
							Type98 *t6;
							t6 = TypeSequence__at603(self3, i5);
							{
								if(comma1)
								{
									StringBuffer__shl367(zout, S1954);
								}
								comma1 = 1;
								StringBuffer_flushStringDeclaration992(zout, t6, S2118);
							}
						}
					}
					(++i5);
				}
			}
		}
	}
	StringBuffer_appendReturnTypes994(zout, zself->type->returnTypes, comma1);
	StringBuffer__shl365(zout, ((unsigned char)41U));
}

static void _copyArray1272(void *zdst, void *zsrc, int zn)
{
	_copyBytes259(zdst, zsrc, (((size_t)0x0000000000000004U) * ((size_t )zn)));
}

static StringBuffer2 *StringBuffer__shl1273(StringBuffer2 *zself, FunctionType103 *zobj)
{
	StringBuffer2 *t1;
	FunctionType_addToStringBuffer597(zobj, zself);
	t1 = zself;
	return t1;
}

static char TypeSequence_notEmpty1274(TypeSequence108 *zself)
{
	char t1;
	t1 = (!TypeSequence_isEmpty607(zself));
	return t1;
}

static StringBuffer2 *StringBuffer__shl1275(StringBuffer2 *zself, Expression21 *zobj)
{
	StringBuffer2 *t1;
	Expression_addToStringBuffer500(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1276(StringBuffer2 *zself, IntegerExpression20 *zobj)
{
	StringBuffer2 *t1;
	IntegerExpression_addToStringBuffer514(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1277(StringBuffer2 *zself, String8Expression66 *zobj)
{
	StringBuffer2 *t1;
	String8Expression_addToStringBuffer518(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1278(StringBuffer2 *zself, String16Expression67 *zobj)
{
	StringBuffer2 *t1;
	String16Expression_addToStringBuffer571(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1279(StringBuffer2 *zself, unsigned short *zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer1059(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1280(StringBuffer2 *zself, StructureExpression68 *zobj)
{
	StringBuffer2 *t1;
	StructureExpression_addToStringBuffer1054(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1281(StringBuffer2 *zself, StructureType104 *zobj)
{
	StringBuffer2 *t1;
	Type_addToStringBuffer543(((Type98 *)zobj), zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1282(StringBuffer2 *zself, ExpressionList61 *zobj)
{
	StringBuffer2 *t1;
	ExpressionList_addToStringBuffer907(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1283(StringBuffer2 *zself, ArrayExpression69 *zobj)
{
	StringBuffer2 *t1;
	ArrayExpression_addToStringBuffer1057(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1284(StringBuffer2 *zself, ArrayType102 *zobj)
{
	StringBuffer2 *t1;
	Type_addToStringBuffer543(((Type98 *)zobj), zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1285(StringBuffer2 *zself, FunctionExpression70 *zobj)
{
	StringBuffer2 *t1;
	FunctionExpression_addToStringBuffer1218(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1286(StringBuffer2 *zself, Function33 *zobj)
{
	StringBuffer2 *t1;
	Function_addToStringBuffer725(zobj, zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1287(StringBuffer2 *zself, GlobalExpression71 *zobj)
{
	StringBuffer2 *t1;
	Expression_addToStringBuffer500(((Expression21 *)zobj), zself);
	t1 = zself;
	return t1;
}

static StringBuffer2 *StringBuffer__shl1288(StringBuffer2 *zself, TypeExpression74 *zobj)
{
	StringBuffer2 *t1;
	TypeExpression_addToStringBuffer880(zobj, zself);
	t1 = zself;
	return t1;
}

static char ExpressionList_notEmpty1289(ExpressionList61 *zself)
{
	char t1;
	t1 = (!Collection_isEmpty902(((Collection63 *)zself)));
	return t1;
}

static Block38 *MemoryPool_new1290(MemoryPool160 *zself)
{
	Block38 *obj1;
	Block38 *t2;
	obj1 = MemoryPool_allocate1291(zself);
	Block_initialize914(obj1);
	t2 = obj1;
	return t2;
}

static Block38 *MemoryPool_allocate1291(MemoryPool160 *zself)
{
	Block38 *t1;
	t1 = ((Block38 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static void Collection_initialize1292(Collection204 *zself)
{
	zself->size = 0;
	zself->firstElement = ((ASTInstruction123 *)0);
	zself->lastElement = ((ASTInstruction123 *)0);
}

static void Collection_add1293(Collection204 *zself, ASTInstruction123 *ze)
{
	if((char)(zself->lastElement != ((ASTInstruction123 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((ASTInstruction123 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((ASTInstruction123 *)0);
}

static void BuilderContext_reportSourceError1294(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt)
{
	BuilderContext_reportError891(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt);
}

static void BuilderContext_reportSourceError1295(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, Type98 *v3x)
{
	BuilderContext_reportError1296(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x);
}

static void BuilderContext_reportError1296(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Type98 *v4x)
{
	ErrorReporter_reportError1297(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x);
}

static void ErrorReporter_reportError1297(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Type98 *v4x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1298((&s1), zfmt, v4x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1298(StringBuffer2 *zself, unsigned char *zs, Type98 *v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl925(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static EvaluateInstruction46 *Block_createInstruction1299(Block38 *zself, Module7 *zmodule, int zline, ExpressionList61 *v3x)
{
	MemoryPool160 *pool1;
	EvaluateInstruction46 *i2;
	EvaluateInstruction46 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1300(pool1, zmodule, zline, v3x);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static EvaluateInstruction46 *MemoryPool_new1300(MemoryPool160 *zself, Module7 *v1x, int v2x, ExpressionList61 *v3x)
{
	EvaluateInstruction46 *obj1;
	EvaluateInstruction46 *t2;
	obj1 = MemoryPool_allocate1301(zself);
	EvaluateInstruction_initialize1126(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static EvaluateInstruction46 *MemoryPool_allocate1301(MemoryPool160 *zself)
{
	EvaluateInstruction46 *t1;
	t1 = ((EvaluateInstruction46 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static void BuilderContext_reportSourceError1302(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, int v3x, int v4x)
{
	BuilderContext_reportError1303(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x, v4x);
}

static void BuilderContext_reportError1303(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, int v4x, int v5x)
{
	ErrorReporter_reportError1304(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x, v5x);
}

static void ErrorReporter_reportError1304(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, int v4x, int v5x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1305((&s1), zfmt, v4x, v5x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1305(StringBuffer2 *zself, unsigned char *zs, int v2x, int v3x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1039(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl1039(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static void BuilderContext_reportSourceError1306(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, int v3x, Type98 *v4x, Type98 *v5x)
{
	BuilderContext_reportError1307(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x, v4x, v5x);
}

static void BuilderContext_reportError1307(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, int v4x, Type98 *v5x, Type98 *v6x)
{
	ErrorReporter_reportError1308(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x, v5x, v6x);
}

static void ErrorReporter_reportError1308(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, int v4x, Type98 *v5x, Type98 *v6x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1309((&s1), zfmt, v4x, v5x, v6x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1309(StringBuffer2 *zself, unsigned char *zs, int v2x, Type98 *v3x, Type98 *v4x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1039(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl925(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl925(zself, v4x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static AssignInstruction47 *Block_createInstruction1310(Block38 *zself, Module7 *zmodule, int zline, ExpressionList61 *v3x, ExpressionList61 *v4x)
{
	MemoryPool160 *pool1;
	AssignInstruction47 *i2;
	AssignInstruction47 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1311(pool1, zmodule, zline, v3x, v4x);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static AssignInstruction47 *MemoryPool_new1311(MemoryPool160 *zself, Module7 *v1x, int v2x, ExpressionList61 *v3x, ExpressionList61 *v4x)
{
	AssignInstruction47 *obj1;
	AssignInstruction47 *t2;
	obj1 = MemoryPool_allocate1312(zself);
	AssignInstruction_initialize1140(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static AssignInstruction47 *MemoryPool_allocate1312(MemoryPool160 *zself)
{
	AssignInstruction47 *t1;
	t1 = ((AssignInstruction47 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static void Collection_initialize1313(Collection244 *zself)
{
	zself->size = 0;
	zself->firstElement = ((ASTId155 *)0);
	zself->lastElement = ((ASTId155 *)0);
}

static void Collection_add1314(Collection244 *zself, ASTId155 *ze)
{
	if((char)(zself->lastElement != ((ASTId155 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((ASTId155 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((ASTId155 *)0);
}

static Variable41 *MemoryPool_new1315(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, Type98 *v4x)
{
	Variable41 *obj1;
	Variable41 *t2;
	obj1 = MemoryPool_allocate1316(zself);
	Variable_initialize1002(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static Variable41 *MemoryPool_allocate1316(MemoryPool160 *zself)
{
	Variable41 *t1;
	t1 = ((Variable41 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static LocalVariableExpression80 *MemoryPool_new1317(MemoryPool160 *zself, Variable41 *v1x, Type98 *v2x)
{
	LocalVariableExpression80 *obj1;
	LocalVariableExpression80 *t2;
	obj1 = MemoryPool_allocate1318(zself);
	LocalVariableExpression_initialize1242(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static LocalVariableExpression80 *MemoryPool_allocate1318(MemoryPool160 *zself)
{
	LocalVariableExpression80 *t1;
	t1 = ((LocalVariableExpression80 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static VariableInstruction48 *Block_createInstruction1319(Block38 *zself, Module7 *zmodule, int zline, Variable41 *v3x, Expression21 *v4x)
{
	MemoryPool160 *pool1;
	VariableInstruction48 *i2;
	VariableInstruction48 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1320(pool1, zmodule, zline, v3x, v4x);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static VariableInstruction48 *MemoryPool_new1320(MemoryPool160 *zself, Module7 *v1x, int v2x, Variable41 *v3x, Expression21 *v4x)
{
	VariableInstruction48 *obj1;
	VariableInstruction48 *t2;
	obj1 = MemoryPool_allocate1321(zself);
	VariableInstruction_initialize1139(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static VariableInstruction48 *MemoryPool_allocate1321(MemoryPool160 *zself)
{
	VariableInstruction48 *t1;
	t1 = ((VariableInstruction48 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static void BuilderContext_reportSourceError1322(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, void *v3x, Type98 *v4x)
{
	BuilderContext_reportError1323(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x, v4x);
}

static void BuilderContext_reportError1323(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x, Type98 *v5x)
{
	ErrorReporter_reportError1324(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x, v5x);
}

static void ErrorReporter_reportError1324(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x, Type98 *v5x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1325((&s1), zfmt, v4x, v5x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1325(StringBuffer2 *zself, unsigned char *zs, void *v2x, Type98 *v3x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl861(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl925(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static void GenericFunction_initialize1326(GenericFunction37 *zself, Scope8 *zscope, ASTFunction115 *zsource, Type98 *zcontext)
{
	Definition_initialize681(((Definition32 *)zself), zscope, ((Location45 *)zsource)->line, zsource->name, 0);
	zself->source = zsource;
	zself->state = ((unsigned char)0U);
	zself->context = zcontext;
	Collection_initialize726((&zself->parameters));
	Collection_initialize457(((Collection14 *)(&zself->instances)));
}

static void GenericFunction_addInstance1327(GenericFunction37 *zself, Function33 *zf)
{
	CollectionPool_add459((&zself->instances), Definition_module682(((Definition32 *)zself))->program->pool, zf);
}

static void GenericFunction_createParameter1328(GenericFunction37 *zself, int zline, void *zname, Type98 *ztype, char zgeneralizable)
{
	Scope8 *scope1;
	Program5 *program2;
	Parameter35 *param3;
	scope1 = ((Definition32 *)zself)->scope;
	program2 = scope1->module->program;
	param3 = MemoryPool_new873(program2->pool, scope1, zline, zname, ztype, zgeneralizable);
	Collection_add727((&zself->parameters), param3);
}

static Function33 *GenericFunction_findInstance1329(GenericFunction37 *zself, ExpressionList61 *zarguments)
{
	Function33 *t6;
	{
		CollectionPool13 *self1;
		self1 = (&zself->instances);
		{
			Collection14 *self2;
			CollectionPoolElement191 *e3;
			self2 = ((Collection14 *)self1);
			e3 = self2->firstElement;
			while((char)(e3 != ((CollectionPoolElement191 *)0)))
			{
				{
					{
						Function33 *f4;
						f4 = e3->object;
						if(ExpressionList_matchInstance908(zarguments, (&f4->parameters)))
						{
							Function33 *t5;
							t5 = f4;
							return t5;
						}
					}
				}
				e3 = e3->nextSibling;
			}
		}
	}
	t6 = ((Function33 *)0);
	return t6;
}

static char GenericFunction_isVariadic1330(GenericFunction37 *zself)
{
	char t1;
	t1 = zself->source->isVariadic;
	return t1;
}

static Parameter35 *Collection_elementValue1331(Collection34 *zself, Parameter35 *zelement)
{
	Parameter35 *t1;
	t1 = zelement;
	return t1;
}

static Parameter35 *Collection_nextElement1332(Collection34 *zself, Parameter35 *zelement)
{
	Parameter35 *t1;
	t1 = zelement->nextSibling;
	return t1;
}

static Function33 *MemoryPool_new1333(MemoryPool160 *zself, Scope8 *v1x, ASTFunction115 *v2x, Type98 *v3x)
{
	Function33 *obj1;
	Function33 *t2;
	obj1 = MemoryPool_allocate1334(zself);
	Function_initialize721(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static Function33 *MemoryPool_allocate1334(MemoryPool160 *zself)
{
	Function33 *t1;
	t1 = ((Function33 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000044U)));
	return t1;
}

static void DirectiveSet_initializeFrom1335(DirectiveSet156 *zself, DirectiveSet156 *zsrc)
{
	zself->visibility = zsrc->visibility;
	zself->namingConvention = zsrc->namingConvention;
	zself->callingConvention = zsrc->callingConvention;
	zself->entry = zsrc->entry;
	zself->skip = zsrc->skip;
	zself->mustCheck = zsrc->mustCheck;
}

static CollectionPoolElement191 *MemoryPool_new1336(MemoryPool160 *zself, Function33 *v1x)
{
	CollectionPoolElement191 *obj1;
	CollectionPoolElement191 *t2;
	obj1 = MemoryPool_allocate1337(zself);
	CollectionPoolElement_initialize730(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CollectionPoolElement191 *MemoryPool_allocate1337(MemoryPool160 *zself)
{
	CollectionPoolElement191 *t1;
	t1 = ((CollectionPoolElement191 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static void BuilderContext_reportSourceError1338(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, Function33 *v3x)
{
	BuilderContext_reportError1339(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x);
}

static void BuilderContext_reportError1339(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Function33 *v4x)
{
	ErrorReporter_reportError1340(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x);
}

static void ErrorReporter_reportError1340(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Function33 *v4x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1341((&s1), zfmt, v4x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1341(StringBuffer2 *zself, unsigned char *zs, Function33 *v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1286(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static FunctionCallExpression76 *MemoryPool_new1342(MemoryPool160 *zself, Function33 *v1x, ExpressionList61 *v2x)
{
	FunctionCallExpression76 *obj1;
	FunctionCallExpression76 *t2;
	obj1 = MemoryPool_allocate1343(zself);
	FunctionCallExpression_initialize1231(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static FunctionCallExpression76 *MemoryPool_allocate1343(MemoryPool160 *zself)
{
	FunctionCallExpression76 *t1;
	t1 = ((FunctionCallExpression76 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static MacroBlock86 *MemoryPool_new1344(MemoryPool160 *zself)
{
	MacroBlock86 *obj1;
	MacroBlock86 *t2;
	obj1 = MemoryPool_allocate1345(zself);
	Block_initialize914(((Block38 *)obj1));
	t2 = obj1;
	return t2;
}

static MacroBlock86 *MemoryPool_allocate1345(MemoryPool160 *zself)
{
	MacroBlock86 *t1;
	t1 = ((MacroBlock86 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static LocalAlias43 *MemoryPool_new1346(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, Expression21 *v4x)
{
	LocalAlias43 *obj1;
	LocalAlias43 *t2;
	obj1 = MemoryPool_allocate1347(zself);
	LocalAlias_initialize1348(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static LocalAlias43 *MemoryPool_allocate1347(MemoryPool160 *zself)
{
	LocalAlias43 *t1;
	t1 = ((LocalAlias43 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void LocalAlias_initialize1348(LocalAlias43 *zself, Module7 *zmodule, int zline, void *zname, Expression21 *zexpression)
{
	Definition_initialize681(((Definition32 *)zself), ((Scope8 *)zmodule), zline, zname, 13);
	zself->expression = zexpression;
}

static MacroCallExpression85 *MemoryPool_new1349(MemoryPool160 *zself, Program5 *v1x, TypeSequence108 *v2x, MacroBlock86 *v3x)
{
	MacroCallExpression85 *obj1;
	MacroCallExpression85 *t2;
	obj1 = MemoryPool_allocate1350(zself);
	MacroCallExpression_initialize1252(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static MacroCallExpression85 *MemoryPool_allocate1350(MemoryPool160 *zself)
{
	MacroCallExpression85 *t1;
	t1 = ((MacroCallExpression85 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static void GenericType_initialize1351(GenericType94 *zself, Scope8 *zscope, ASTType118 *zsource)
{
	Module7 *module1;
	MemoryPool160 *pool2;
	Definition_initialize681(((Definition32 *)zself), zscope, ((Location45 *)zsource)->line, zsource->name, 1);
	zself->source = zsource;
	Collection_initialize726((&zself->parameters));
	Collection_initialize1354(((Collection96 *)(&zself->instances)));
	module1 = zscope->module;
	pool2 = module1->program->pool;
	{
		Collection202 *self3;
		ASTParameter120 *e4;
		self3 = zsource->parameters;
		e4 = self3->firstElement;
		while((char)(e4 != ((ASTParameter120 *)0)))
		{
			{
				Parameter35 *param5;
				param5 = MemoryPool_allocate874(pool2);
				Parameter_initialize875(param5, ((Scope8 *)module1), ((Location45 *)e4)->line, e4->name, ((Type98 *)0), 0);
				Collection_add727((&zself->parameters), param5);
			}
			e4 = e4->nextSibling;
		}
	}
}

static void GenericType_add1352(GenericType94 *zself, Type98 *ztype)
{
	CollectionPool_add1356((&zself->instances), Definition_module682(((Definition32 *)zself))->program->pool, ztype);
}

static Type98 *GenericType_findInstance1353(GenericType94 *zself, ExpressionList61 *zvalues)
{
	Type98 *t6;
	{
		CollectionPool95 *self1;
		self1 = (&zself->instances);
		{
			Collection96 *self2;
			CollectionPoolElement245 *e3;
			self2 = ((Collection96 *)self1);
			e3 = self2->firstElement;
			while((char)(e3 != ((CollectionPoolElement245 *)0)))
			{
				{
					{
						Type98 *s4;
						s4 = e3->object;
						if(Type_matchArguments558(s4, zvalues))
						{
							Type98 *t5;
							t5 = s4;
							return t5;
						}
					}
				}
				e3 = e3->nextSibling;
			}
		}
	}
	t6 = ((Type98 *)0);
	return t6;
}

static void Collection_initialize1354(Collection96 *zself)
{
	zself->size = 0;
	zself->firstElement = ((CollectionPoolElement245 *)0);
	zself->lastElement = ((CollectionPoolElement245 *)0);
}

static void Collection_add1355(Collection96 *zself, CollectionPoolElement245 *ze)
{
	if((char)(zself->lastElement != ((CollectionPoolElement245 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((CollectionPoolElement245 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((CollectionPoolElement245 *)0);
}

static void CollectionPool_add1356(CollectionPool95 *zself, MemoryPool160 *zpool, Type98 *zobject)
{
	CollectionPoolElement245 *element1;
	element1 = MemoryPool_new1375(zpool, zobject);
	Collection_add1355(((Collection96 *)zself), element1);
}

static void BuilderContext_reportSourceError1357(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, void *v3x)
{
	BuilderContext_reportError856(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x);
}

static void CollectionPoolElement_initialize1358(CollectionPoolElement245 *zself, Type98 *zobject)
{
	zself->object = zobject;
}

static void ASTNode__shl1359(ASTNode110 *zself, ASTElement109 *ze)
{
	if((!ze->directives->skip))
	{
		Collection_add1361((&zself->children), ze);
	}
}

static void Collection_initialize1360(Collection111 *zself)
{
	zself->size = 0;
	zself->firstElement = ((ASTElement109 *)0);
	zself->lastElement = ((ASTElement109 *)0);
}

static void Collection_add1361(Collection111 *zself, ASTElement109 *ze)
{
	if((char)(zself->lastElement != ((ASTElement109 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((ASTElement109 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((ASTElement109 *)0);
}

static char ASTType_generic1362(ASTType118 *zself)
{
	char t1;
	t1 = Collection_notEmpty1472(zself->parameters);
	return t1;
}

static StructureType104 *MemoryPool_new1363(MemoryPool160 *zself, Scope8 *v1x, ASTType118 *v2x, ExpressionList61 *v3x)
{
	StructureType104 *obj1;
	StructureType104 *t2;
	obj1 = MemoryPool_allocate1364(zself);
	StructureType_initialize1027(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static StructureType104 *MemoryPool_allocate1364(MemoryPool160 *zself)
{
	StructureType104 *t1;
	t1 = ((StructureType104 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000064U)));
	return t1;
}

static CollectionPoolElement190 *MemoryPool_new1365(MemoryPool160 *zself, StructureType104 *v1x)
{
	CollectionPoolElement190 *obj1;
	CollectionPoolElement190 *t2;
	obj1 = MemoryPool_allocate1366(zself);
	CollectionPoolElement_initialize1038(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CollectionPoolElement190 *MemoryPool_allocate1366(MemoryPool160 *zself)
{
	CollectionPoolElement190 *t1;
	t1 = ((CollectionPoolElement190 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static BuiltinType100 *MemoryPool_new1367(MemoryPool160 *zself, Scope8 *v1x, Type98 *v2x, int v3x, size_t v4x, void *v5x, char v6x)
{
	BuiltinType100 *obj1;
	BuiltinType100 *t2;
	obj1 = MemoryPool_allocate677(zself);
	BuiltinType_initialize678(obj1, v1x, v2x, v3x, v4x, v5x, v6x);
	t2 = obj1;
	return t2;
}

static PointerType101 *MemoryPool_new1368(MemoryPool160 *zself, Scope8 *v1x, Type98 *v2x, Type98 *v3x, void *v4x)
{
	PointerType101 *obj1;
	PointerType101 *t2;
	obj1 = MemoryPool_allocate1369(zself);
	PointerType_initialize713(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static PointerType101 *MemoryPool_allocate1369(MemoryPool160 *zself)
{
	PointerType101 *t1;
	t1 = ((PointerType101 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000054U)));
	return t1;
}

static ASTParameter120 *Collection_elementValue1370(Collection202 *zself, ASTParameter120 *zelement)
{
	ASTParameter120 *t1;
	t1 = zelement;
	return t1;
}

static TypeArgument106 *MemoryPool_new1371(MemoryPool160 *zself, Module7 *v1x, ASTParameter120 *v2x, Expression21 *v3x)
{
	TypeArgument106 *obj1;
	TypeArgument106 *t2;
	obj1 = MemoryPool_allocate1372(zself);
	TypeArgument_initialize1373(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static TypeArgument106 *MemoryPool_allocate1372(MemoryPool160 *zself)
{
	TypeArgument106 *t1;
	t1 = ((TypeArgument106 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static void TypeArgument_initialize1373(TypeArgument106 *zself, Module7 *zmodule, ASTParameter120 *zsource, Expression21 *zvalue)
{
	Definition_initialize681(((Definition32 *)zself), ((Scope8 *)zmodule), ((Location45 *)zsource)->line, zsource->name, 8);
	zself->value = zvalue;
}

static ASTParameter120 *Collection_nextElement1374(Collection202 *zself, ASTParameter120 *zelement)
{
	ASTParameter120 *t1;
	t1 = zelement->nextSibling;
	return t1;
}

static CollectionPoolElement245 *MemoryPool_new1375(MemoryPool160 *zself, Type98 *v1x)
{
	CollectionPoolElement245 *obj1;
	CollectionPoolElement245 *t2;
	obj1 = MemoryPool_allocate1376(zself);
	CollectionPoolElement_initialize1358(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CollectionPoolElement245 *MemoryPool_allocate1376(MemoryPool160 *zself)
{
	CollectionPoolElement245 *t1;
	t1 = ((CollectionPoolElement245 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static unsigned char *Builder_getPublicName1377(Builder171 *zself, ExternFunction36 *zf)
{
	if((char)(((Prototype31 *)zf)->namingConvention == ((unsigned char)1U)))
	{
		unsigned char *t1;
		t1 = _string666(((Definition32 *)zf)->name);
		return t1;
	}
	else
	{
		MemoryBuffer159 *buffer2;
		unsigned char *name3;
		size_t size4;
		unsigned char *publicName5;
		unsigned char *t6;
		buffer2 = (&zself->nameBuffer);
		MemoryBuffer_removeAll634(buffer2);
		MemoryBuffer_addByte632(buffer2, ((unsigned char)95U));
		name3 = _string666(((Definition32 *)zf)->name);
		MemoryBuffer_addBlock633(buffer2, ((void *)name3), _toByteSize670(_size325(name3)));
		MemoryBuffer_addUnsignedToBuffer256(buffer2, zself->nameIndex);
		MemoryBuffer_addByte632(buffer2, ((unsigned char)0U));
		(++zself->nameIndex);
		size4 = MemoryBuffer_size630(buffer2);
		publicName5 = ((unsigned char *)MemoryPool_allocateBytes297(zself->program->pool, size4));
		_copyBytes259(((void *)publicName5), ((void *)MemoryBuffer_base629(buffer2)), size4);
		t6 = publicName5;
		return t6;
	}
}

static ExternFunctionCallExpression77 *MemoryPool_new1378(MemoryPool160 *zself, ExternFunction36 *v1x, ExpressionList61 *v2x)
{
	ExternFunctionCallExpression77 *obj1;
	ExternFunctionCallExpression77 *t2;
	obj1 = MemoryPool_allocate1379(zself);
	ExternFunctionCallExpression_initialize1239(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static ExternFunctionCallExpression77 *MemoryPool_allocate1379(MemoryPool160 *zself)
{
	ExternFunctionCallExpression77 *t1;
	t1 = ((ExternFunctionCallExpression77 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static char Collection_notEmpty1380(Collection203 *zself)
{
	char t1;
	t1 = (!Collection_isEmpty889(zself));
	return t1;
}

static GlobalVariableExpression81 *MemoryPool_new1381(MemoryPool160 *zself, GlobalVariable97 *v1x, Type98 *v2x)
{
	GlobalVariableExpression81 *obj1;
	GlobalVariableExpression81 *t2;
	obj1 = MemoryPool_allocate1382(zself);
	GlobalVariableExpression_initialize1244(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static GlobalVariableExpression81 *MemoryPool_allocate1382(MemoryPool160 *zself)
{
	GlobalVariableExpression81 *t1;
	t1 = ((GlobalVariableExpression81 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static GlobalExpression71 *MemoryPool_new1383(MemoryPool160 *zself, GlobalVariable97 *v1x, Type98 *v2x)
{
	GlobalExpression71 *obj1;
	GlobalExpression71 *t2;
	obj1 = MemoryPool_allocate1384(zself);
	GlobalExpression_initialize1219(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static GlobalExpression71 *MemoryPool_allocate1384(MemoryPool160 *zself)
{
	GlobalExpression71 *t1;
	t1 = ((GlobalExpression71 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void Alias_initialize1385(Alias89 *zself, Scope8 *zscope, Type98 *zcontext, ASTAlias117 *zsource)
{
	Definition_initialize681(((Definition32 *)zself), zscope, ((Location45 *)zsource)->line, zsource->name, 2);
	zself->source = zsource;
	zself->context = zcontext;
	zself->expression = ((Expression21 *)0);
	zself->state = ((unsigned char)0U);
	zself->used = 0;
	zself->generator = ((void *)0);
}

static void Alias_use1386(Alias89 *zself)
{
	zself->used = 1;
}

static Parameter35 *MemoryPool_new1387(MemoryPool160 *zself, Module7 *v1x, int v2x, void *v3x, Type98 *v4x, char v5x)
{
	Parameter35 *obj1;
	Parameter35 *t2;
	obj1 = MemoryPool_allocate874(zself);
	Parameter_initialize875(obj1, ((Scope8 *)v1x), v2x, v3x, v4x, v5x);
	t2 = obj1;
	return t2;
}

static void SubTypeDefinition_initialize1388(SubTypeDefinition92 *zself, Scope8 *zscope, ASTType118 *zsource)
{
	Definition_initialize681(((Definition32 *)zself), zscope, ((Location45 *)zsource)->line, zsource->name, 10);
	zself->source = zsource;
	zself->state = ((unsigned char)0U);
	zself->type = ((Type98 *)0);
}

static void VargParameter_initialize1389(VargParameter42 *zself, Module7 *zmodule, ASTId155 *zsource, Expression21 *zexpression)
{
	Definition_initialize681(((Definition32 *)zself), ((Scope8 *)zmodule), ((Location45 *)zsource)->line, zsource->name, 12);
	zself->expression = zexpression;
}

static VargParameter42 *MemoryPool_new1390(MemoryPool160 *zself, Module7 *v1x, ASTId155 *v2x, Expression21 *v3x)
{
	VargParameter42 *obj1;
	VargParameter42 *t2;
	obj1 = MemoryPool_allocate1391(zself);
	VargParameter_initialize1389(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static VargParameter42 *MemoryPool_allocate1391(MemoryPool160 *zself)
{
	VargParameter42 *t1;
	t1 = ((VargParameter42 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static VargsEachExpression83 *MemoryPool_new1392(MemoryPool160 *zself, Block38 *v1x, Program5 *v2x)
{
	VargsEachExpression83 *obj1;
	VargsEachExpression83 *t2;
	obj1 = MemoryPool_allocate1393(zself);
	VargsEachExpression_initialize1250(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static VargsEachExpression83 *MemoryPool_allocate1393(MemoryPool160 *zself)
{
	VargsEachExpression83 *t1;
	t1 = ((VargsEachExpression83 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static IntegerExpression20 *MemoryPool_new1394(MemoryPool160 *zself, unsigned long long v1x, Type98 *v2x)
{
	IntegerExpression20 *obj1;
	IntegerExpression20 *t2;
	obj1 = MemoryPool_allocate1395(zself);
	IntegerExpression_initialize511(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static IntegerExpression20 *MemoryPool_allocate1395(MemoryPool160 *zself)
{
	IntegerExpression20 *t1;
	t1 = ((IntegerExpression20 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static AttributeExpression84 *MemoryPool_new1396(MemoryPool160 *zself, Expression21 *v1x, Attribute107 *v2x)
{
	AttributeExpression84 *obj1;
	AttributeExpression84 *t2;
	obj1 = MemoryPool_allocate1397(zself);
	AttributeExpression_initialize1245(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static AttributeExpression84 *MemoryPool_allocate1397(MemoryPool160 *zself)
{
	AttributeExpression84 *t1;
	t1 = ((AttributeExpression84 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static UnaryExpression73 *MemoryPool_new1398(MemoryPool160 *zself, int v1x, Type98 *v2x, Expression21 *v3x)
{
	UnaryExpression73 *obj1;
	UnaryExpression73 *t2;
	obj1 = MemoryPool_allocate1399(zself);
	UnaryExpression_initialize1251(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static UnaryExpression73 *MemoryPool_allocate1399(MemoryPool160 *zself)
{
	UnaryExpression73 *t1;
	t1 = ((UnaryExpression73 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void BuilderContext_reportSourceError1400(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, Type98 *v3x, Type98 *v4x)
{
	BuilderContext_reportError1401(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x, v4x);
}

static void BuilderContext_reportError1401(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Type98 *v4x, Type98 *v5x)
{
	ErrorReporter_reportError1402(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x, v5x);
}

static void ErrorReporter_reportError1402(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Type98 *v4x, Type98 *v5x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1403((&s1), zfmt, v4x, v5x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1403(StringBuffer2 *zself, unsigned char *zs, Type98 *v2x, Type98 *v3x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl925(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl925(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static StructureExpression68 *MemoryPool_new1404(MemoryPool160 *zself, ExpressionList61 *v1x, Program5 *v2x, Type98 *v3x, StructureType104 *v4x)
{
	StructureExpression68 *obj1;
	StructureExpression68 *t2;
	obj1 = MemoryPool_allocate1405(zself);
	StructureExpression_initialize1053(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static StructureExpression68 *MemoryPool_allocate1405(MemoryPool160 *zself)
{
	StructureExpression68 *t1;
	t1 = ((StructureExpression68 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static BinaryExpression72 *MemoryPool_new1406(MemoryPool160 *zself, int v1x, Type98 *v2x, Expression21 *v3x, Expression21 *v4x)
{
	BinaryExpression72 *obj1;
	BinaryExpression72 *t2;
	obj1 = MemoryPool_allocate1407(zself);
	BinaryExpression_initialize1220(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static BinaryExpression72 *MemoryPool_allocate1407(MemoryPool160 *zself)
{
	BinaryExpression72 *t1;
	t1 = ((BinaryExpression72 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void BuilderContext_reportSourceError1408(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, PointerType101 *v3x)
{
	BuilderContext_reportError1409(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x);
}

static void BuilderContext_reportError1409(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, PointerType101 *v4x)
{
	ErrorReporter_reportError1410(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x);
}

static void ErrorReporter_reportError1410(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, PointerType101 *v4x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1411((&s1), zfmt, v4x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1411(StringBuffer2 *zself, unsigned char *zs, PointerType101 *v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1412(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static StringBuffer2 *StringBuffer__shl1412(StringBuffer2 *zself, PointerType101 *zobj)
{
	StringBuffer2 *t1;
	Type_addToStringBuffer543(((Type98 *)zobj), zself);
	t1 = zself;
	return t1;
}

static PointerCallExpression78 *MemoryPool_new1413(MemoryPool160 *zself, Program5 *v1x, Expression21 *v2x, ExpressionList61 *v3x, TypeSequence108 *v4x)
{
	PointerCallExpression78 *obj1;
	PointerCallExpression78 *t2;
	obj1 = MemoryPool_allocate1414(zself);
	PointerCallExpression_initialize1240(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static PointerCallExpression78 *MemoryPool_allocate1414(MemoryPool160 *zself)
{
	PointerCallExpression78 *t1;
	t1 = ((PointerCallExpression78 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static DeferInstruction58 *Block_createInstruction1415(Block38 *zself, Module7 *zmodule, int zline)
{
	MemoryPool160 *pool1;
	DeferInstruction58 *i2;
	DeferInstruction58 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1416(pool1, zmodule, zline);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static DeferInstruction58 *MemoryPool_new1416(MemoryPool160 *zself, Module7 *v1x, int v2x)
{
	DeferInstruction58 *obj1;
	DeferInstruction58 *t2;
	obj1 = MemoryPool_allocate1417(zself);
	DeferInstruction_initialize1192(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static DeferInstruction58 *MemoryPool_allocate1417(MemoryPool160 *zself)
{
	DeferInstruction58 *t1;
	t1 = ((DeferInstruction58 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000030U)));
	return t1;
}

static void ExpressionTypeList_addToStringBuffer1418(ExpressionTypeList64 *zself, StringBuffer2 *zsb)
{
	if(ExpressionTypeList_notEmpty1424(zself))
	{
		char comma1;
		StringBuffer__shl365(zsb, ((unsigned char)40U));
		comma1 = 0;
		{
			CollectionPool62 *self2;
			self2 = ((CollectionPool62 *)zself);
			{
				Collection63 *self3;
				CollectionPoolElement205 *e4;
				self3 = ((Collection63 *)self2);
				e4 = self3->firstElement;
				while((char)(e4 != ((CollectionPoolElement205 *)0)))
				{
					{
						{
							Expression21 *e5;
							e5 = e4->object;
							if(comma1)
							{
								StringBuffer__shl365(zsb, ((unsigned char)44U));
								StringBuffer__shl365(zsb, ((unsigned char)32U));
							}
							comma1 = 1;
							StringBuffer__shl925(zsb, e5->type);
						}
					}
					e4 = e4->nextSibling;
				}
			}
		}
		StringBuffer__shl365(zsb, ((unsigned char)41U));
	}
}

static void BuilderContext_reportSourceError1419(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, ExpressionTypeList64 *v3x, TypeSequence108 *v4x)
{
	BuilderContext_reportError1420(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x, v4x);
}

static void BuilderContext_reportError1420(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, ExpressionTypeList64 *v4x, TypeSequence108 *v5x)
{
	ErrorReporter_reportError1421(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x, v5x);
}

static void ErrorReporter_reportError1421(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, ExpressionTypeList64 *v4x, TypeSequence108 *v5x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1422((&s1), zfmt, v4x, v5x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1422(StringBuffer2 *zself, unsigned char *zs, ExpressionTypeList64 *v2x, TypeSequence108 *v3x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1423(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl924(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static StringBuffer2 *StringBuffer__shl1423(StringBuffer2 *zself, ExpressionTypeList64 *zobj)
{
	StringBuffer2 *t1;
	ExpressionTypeList_addToStringBuffer1418(zobj, zself);
	t1 = zself;
	return t1;
}

static char ExpressionTypeList_notEmpty1424(ExpressionTypeList64 *zself)
{
	char t1;
	t1 = (!Collection_isEmpty902(((Collection63 *)zself)));
	return t1;
}

static ReturnInstruction49 *Block_createInstruction1425(Block38 *zself, Module7 *zmodule, int zline, ExpressionList61 *v3x)
{
	MemoryPool160 *pool1;
	ReturnInstruction49 *i2;
	ReturnInstruction49 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1426(pool1, zmodule, zline, v3x);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static ReturnInstruction49 *MemoryPool_new1426(MemoryPool160 *zself, Module7 *v1x, int v2x, ExpressionList61 *v3x)
{
	ReturnInstruction49 *obj1;
	ReturnInstruction49 *t2;
	obj1 = MemoryPool_allocate1427(zself);
	ReturnInstruction_initialize1144(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static ReturnInstruction49 *MemoryPool_allocate1427(MemoryPool160 *zself)
{
	ReturnInstruction49 *t1;
	t1 = ((ReturnInstruction49 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static LeaveInstruction50 *Block_createInstruction1428(Block38 *zself, Module7 *zmodule, int zline, MacroBlock86 *v3x, ExpressionList61 *v4x)
{
	MemoryPool160 *pool1;
	LeaveInstruction50 *i2;
	LeaveInstruction50 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1429(pool1, zmodule, zline, v3x, v4x);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static LeaveInstruction50 *MemoryPool_new1429(MemoryPool160 *zself, Module7 *v1x, int v2x, MacroBlock86 *v3x, ExpressionList61 *v4x)
{
	LeaveInstruction50 *obj1;
	LeaveInstruction50 *t2;
	obj1 = MemoryPool_allocate1430(zself);
	LeaveInstruction_initialize1156(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static LeaveInstruction50 *MemoryPool_allocate1430(MemoryPool160 *zself)
{
	LeaveInstruction50 *t1;
	t1 = ((LeaveInstruction50 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static void Collection_initialize1431(Collection135 *zself)
{
	zself->size = 0;
	zself->firstElement = ((ASTRule136 *)0);
	zself->lastElement = ((ASTRule136 *)0);
}

static void Collection_add1432(Collection135 *zself, ASTRule136 *ze)
{
	if((char)(zself->lastElement != ((ASTRule136 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((ASTRule136 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((ASTRule136 *)0);
}

static IfInstruction51 *Block_createInstruction1433(Block38 *zself, Module7 *zmodule, int zline)
{
	MemoryPool160 *pool1;
	IfInstruction51 *i2;
	IfInstruction51 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1434(pool1, zmodule, zline);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static IfInstruction51 *MemoryPool_new1434(MemoryPool160 *zself, Module7 *v1x, int v2x)
{
	IfInstruction51 *obj1;
	IfInstruction51 *t2;
	obj1 = MemoryPool_allocate1435(zself);
	IfInstruction_initialize1161(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static IfInstruction51 *MemoryPool_allocate1435(MemoryPool160 *zself)
{
	IfInstruction51 *t1;
	t1 = ((IfInstruction51 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000024U)));
	return t1;
}

static Rule59 *MemoryPool_allocate1436(MemoryPool160 *zself)
{
	Rule59 *t1;
	t1 = ((Rule59 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static WhileInstruction53 *Block_createInstruction1437(Block38 *zself, Module7 *zmodule, int zline)
{
	MemoryPool160 *pool1;
	WhileInstruction53 *i2;
	WhileInstruction53 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1438(pool1, zmodule, zline);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static WhileInstruction53 *MemoryPool_new1438(MemoryPool160 *zself, Module7 *v1x, int v2x)
{
	WhileInstruction53 *obj1;
	WhileInstruction53 *t2;
	obj1 = MemoryPool_allocate1439(zself);
	WhileInstruction_initialize1165(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static WhileInstruction53 *MemoryPool_allocate1439(MemoryPool160 *zself)
{
	WhileInstruction53 *t1;
	t1 = ((WhileInstruction53 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static void BreakContext_initializeWhile1440(BreakContext179 *zself, WhileInstruction53 *zi)
{
	zself->instruction = zi;
}

static void BreakContext_initializeBlock1441(BreakContext179 *zself, BuilderContext177 *zcontext, MacroBlock86 *zblock)
{
	zself->instruction = ((WhileInstruction53 *)0);
	zself->context = zcontext;
	zself->block = zblock;
	zself->types = ((TypeSequence108 *)0);
}

static BreakInstruction54 *Block_createInstruction1442(Block38 *zself, Module7 *zmodule, int zline, int v3x, WhileInstruction53 *v4x)
{
	MemoryPool160 *pool1;
	BreakInstruction54 *i2;
	BreakInstruction54 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1443(pool1, zmodule, zline, v3x, v4x);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static BreakInstruction54 *MemoryPool_new1443(MemoryPool160 *zself, Module7 *v1x, int v2x, int v3x, WhileInstruction53 *v4x)
{
	BreakInstruction54 *obj1;
	BreakInstruction54 *t2;
	obj1 = MemoryPool_allocate1444(zself);
	BreakInstruction_initialize1174(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static BreakInstruction54 *MemoryPool_allocate1444(MemoryPool160 *zself)
{
	BreakInstruction54 *t1;
	t1 = ((BreakInstruction54 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static void Collection_initialize1445(Collection133 *zself)
{
	zself->size = 0;
	zself->firstElement = ((ASTChoice137 *)0);
	zself->lastElement = ((ASTChoice137 *)0);
}

static void Collection_add1446(Collection133 *zself, ASTChoice137 *ze)
{
	if((char)(zself->lastElement != ((ASTChoice137 *)0)))
	{
		zself->lastElement->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((ASTChoice137 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	ze->nextSibling = ((ASTChoice137 *)0);
}

static SwitchInstruction55 *Block_createInstruction1447(Block38 *zself, Module7 *zmodule, int zline, Expression21 *v3x)
{
	MemoryPool160 *pool1;
	SwitchInstruction55 *i2;
	SwitchInstruction55 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1448(pool1, zmodule, zline, v3x);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static SwitchInstruction55 *MemoryPool_new1448(MemoryPool160 *zself, Module7 *v1x, int v2x, Expression21 *v3x)
{
	SwitchInstruction55 *obj1;
	SwitchInstruction55 *t2;
	obj1 = MemoryPool_allocate1449(zself);
	SwitchInstruction_initialize1184(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static SwitchInstruction55 *MemoryPool_allocate1449(MemoryPool160 *zself)
{
	SwitchInstruction55 *t1;
	t1 = ((SwitchInstruction55 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000002CU)));
	return t1;
}

static Choice60 *MemoryPool_allocate1450(MemoryPool160 *zself)
{
	Choice60 *t1;
	t1 = ((Choice60 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static char Association_notEmpty1451(Association199 *zself)
{
	char t1;
	t1 = (!Association_isEmpty718(zself));
	return t1;
}

static BlockInstruction57 *Block_createInstruction1452(Block38 *zself, Module7 *zmodule, int zline, Block38 *v3x)
{
	MemoryPool160 *pool1;
	BlockInstruction57 *i2;
	BlockInstruction57 *t3;
	pool1 = zmodule->program->pool;
	i2 = MemoryPool_new1453(pool1, zmodule, zline, v3x);
	Collection_add919((&zself->instructions), ((Instruction44 *)i2));
	t3 = i2;
	return t3;
}

static BlockInstruction57 *MemoryPool_new1453(MemoryPool160 *zself, Module7 *v1x, int v2x, Block38 *v3x)
{
	BlockInstruction57 *obj1;
	BlockInstruction57 *t2;
	obj1 = MemoryPool_allocate1454(zself);
	BlockInstruction_initialize1190(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static BlockInstruction57 *MemoryPool_allocate1454(MemoryPool160 *zself)
{
	BlockInstruction57 *t1;
	t1 = ((BlockInstruction57 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static FunctionType103 *MemoryPool_new1455(MemoryPool160 *zself, unsigned char v1x, TypeSequence108 *v2x, TypeSequence108 *v3x, BuiltinType100 *v4x)
{
	FunctionType103 *obj1;
	FunctionType103 *t2;
	obj1 = MemoryPool_allocate1456(zself);
	FunctionType_initialize593(obj1, v1x, v2x, v3x, ((Type98 *)v4x));
	t2 = obj1;
	return t2;
}

static FunctionType103 *MemoryPool_allocate1456(MemoryPool160 *zself)
{
	FunctionType103 *t1;
	t1 = ((FunctionType103 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000058U)));
	return t1;
}

static char Association_notEmpty1457(Association198 *zself)
{
	char t1;
	t1 = (!Association_isEmpty663(zself));
	return t1;
}

static FunctionExpression70 *MemoryPool_new1458(MemoryPool160 *zself, Prototype31 *v1x, Program5 *v2x, PointerType101 *v3x)
{
	FunctionExpression70 *obj1;
	FunctionExpression70 *t2;
	obj1 = MemoryPool_allocate1459(zself);
	FunctionExpression_initialize1217(obj1, v1x, v2x, ((Type98 *)v3x));
	t2 = obj1;
	return t2;
}

static FunctionExpression70 *MemoryPool_allocate1459(MemoryPool160 *zself)
{
	FunctionExpression70 *t1;
	t1 = ((FunctionExpression70 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void BuilderContext_reportSourceError1460(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, void *v3x, Type98 *v4x, Type98 *v5x)
{
	BuilderContext_reportError1461(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x, v4x, v5x);
}

static void BuilderContext_reportError1461(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x, Type98 *v5x, Type98 *v6x)
{
	ErrorReporter_reportError1462(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x, v5x, v6x);
}

static void ErrorReporter_reportError1462(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, void *v4x, Type98 *v5x, Type98 *v6x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1463((&s1), zfmt, v4x, v5x, v6x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1463(StringBuffer2 *zself, unsigned char *zs, void *v2x, Type98 *v3x, Type98 *v4x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl861(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl925(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl925(zself, v4x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static GenericFunction37 *MemoryPool_new1464(MemoryPool160 *zself, Scope8 *v1x, ASTFunction115 *v2x, Type98 *v3x)
{
	GenericFunction37 *obj1;
	GenericFunction37 *t2;
	obj1 = MemoryPool_allocate1465(zself);
	GenericFunction_initialize1326(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static GenericFunction37 *MemoryPool_allocate1465(MemoryPool160 *zself)
{
	GenericFunction37 *t1;
	t1 = ((GenericFunction37 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000034U)));
	return t1;
}

static Alias89 *MemoryPool_new1466(MemoryPool160 *zself, Scope8 *v1x, Type98 *v2x, ASTAlias117 *v3x)
{
	Alias89 *obj1;
	Alias89 *t2;
	obj1 = MemoryPool_allocate1467(zself);
	Alias_initialize1385(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static Alias89 *MemoryPool_allocate1467(MemoryPool160 *zself)
{
	Alias89 *t1;
	t1 = ((Alias89 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000024U)));
	return t1;
}

static GlobalVariable97 *MemoryPool_new1468(MemoryPool160 *zself, Scope8 *v1x, ASTGlobalVariable114 *v2x)
{
	GlobalVariable97 *obj1;
	GlobalVariable97 *t2;
	obj1 = MemoryPool_allocate1469(zself);
	GlobalVariable_initialize1006(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static GlobalVariable97 *MemoryPool_allocate1469(MemoryPool160 *zself)
{
	GlobalVariable97 *t1;
	t1 = ((GlobalVariable97 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000028U)));
	return t1;
}

static CollectionPoolElement193 *MemoryPool_new1470(MemoryPool160 *zself, GlobalVariable97 *v1x)
{
	CollectionPoolElement193 *obj1;
	CollectionPoolElement193 *t2;
	obj1 = MemoryPool_allocate1471(zself);
	CollectionPoolElement_initialize1052(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CollectionPoolElement193 *MemoryPool_allocate1471(MemoryPool160 *zself)
{
	CollectionPoolElement193 *t1;
	t1 = ((CollectionPoolElement193 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static char Collection_notEmpty1472(Collection202 *zself)
{
	char t1;
	t1 = (!Collection_isEmpty886(zself));
	return t1;
}

static GenericType94 *MemoryPool_new1473(MemoryPool160 *zself, Scope8 *v1x, ASTType118 *v2x)
{
	GenericType94 *obj1;
	GenericType94 *t2;
	obj1 = MemoryPool_allocate1474(zself);
	GenericType_initialize1351(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static GenericType94 *MemoryPool_allocate1474(MemoryPool160 *zself)
{
	GenericType94 *t1;
	t1 = ((GenericType94 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000002CU)));
	return t1;
}

static SubTypeDefinition92 *MemoryPool_new1475(MemoryPool160 *zself, Scope8 *v1x, ASTType118 *v2x)
{
	SubTypeDefinition92 *obj1;
	SubTypeDefinition92 *t2;
	obj1 = MemoryPool_allocate1476(zself);
	SubTypeDefinition_initialize1388(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static SubTypeDefinition92 *MemoryPool_allocate1476(MemoryPool160 *zself)
{
	SubTypeDefinition92 *t1;
	t1 = ((SubTypeDefinition92 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static ExternFunction36 *MemoryPool_new1477(MemoryPool160 *zself, Module7 *v1x, ASTExternFunction116 *v2x, Scope8 *v3x, Type98 *v4x)
{
	ExternFunction36 *obj1;
	ExternFunction36 *t2;
	obj1 = MemoryPool_allocate1478(zself);
	ExternFunction_initialize1049(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static ExternFunction36 *MemoryPool_allocate1478(MemoryPool160 *zself)
{
	ExternFunction36 *t1;
	t1 = ((ExternFunction36 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000002CU)));
	return t1;
}

static CollectionPoolElement192 *MemoryPool_new1479(MemoryPool160 *zself, ExternFunction36 *v1x)
{
	CollectionPoolElement192 *obj1;
	CollectionPoolElement192 *t2;
	obj1 = MemoryPool_allocate1480(zself);
	CollectionPoolElement_initialize1048(obj1, v1x);
	t2 = obj1;
	return t2;
}

static CollectionPoolElement192 *MemoryPool_allocate1480(MemoryPool160 *zself)
{
	CollectionPoolElement192 *t1;
	t1 = ((CollectionPoolElement192 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static char StringBuffer_notEmpty1481(StringBuffer2 *zself)
{
	char t1;
	t1 = (!StringBuffer_isEmpty290(zself));
	return t1;
}

static Symbol29 *MemoryPool_new1482(MemoryPool160 *zself, ASTSymbol121 *v1x)
{
	Symbol29 *obj1;
	Symbol29 *t2;
	obj1 = MemoryPool_allocate1483(zself);
	Symbol_initialize1484(obj1, v1x);
	t2 = obj1;
	return t2;
}

static Symbol29 *MemoryPool_allocate1483(MemoryPool160 *zself)
{
	Symbol29 *t1;
	t1 = ((Symbol29 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void Symbol_initialize1484(Symbol29 *zself, ASTSymbol121 *zsource)
{
	zself->source = zsource;
	zself->state = ((unsigned char)0U);
	zself->value = ((Expression21 *)0);
}

static void *Symbol_name1485(Symbol29 *zself)
{
	void *t1;
	t1 = zself->source->name;
	return t1;
}

static void Symbol_addToStringBuffer1486(Symbol29 *zself, StringBuffer2 *zsb)
{
	StringBuffer__shl861(StringBuffer__shl365(zsb, ((unsigned char)39U)), Symbol_name1485(zself));
}

static void SymbolDictionary_initialize1487(SymbolDictionary27 *zself, MemoryPool160 *zpool, int zsize)
{
	Symbol29 **names1;
	names1 = MemoryPool_allocateArray1495(zpool, zsize);
	{
		int i2;
		i2 = 0;
		while((char)(i2 < zsize))
		{
			{
				names1[i2] = ((Symbol29 *)0);
			}
			(++i2);
		}
	}
	zself->size = zsize;
	zself->names = names1;
	zself->pool = zpool;
	Collection_initialize1491((&zself->ordered));
}

static Symbol29 *SymbolDictionary_add1488(SymbolDictionary27 *zself, Symbol29 *zsymbol)
{
	int slot1;
	void *name2;
	Symbol29 *item3;
	Symbol29 *t5;
	slot1 = SymbolDictionary_slot1490(zself, Symbol_name1485(zsymbol));
	name2 = Symbol_name1485(zsymbol);
	item3 = zself->names[slot1];
	while((char)(item3 != ((Symbol29 *)0)))
	{
		if((char)(Symbol_name1485(item3) == name2))
		{
			Symbol29 *t4;
			t4 = item3;
			return t4;
		}
		item3 = item3->next;
	}
	zsymbol->next = zself->names[slot1];
	zself->names[slot1] = zsymbol;
	Collection_add1492((&zself->ordered), zsymbol);
	t5 = ((Symbol29 *)0);
	return t5;
}

static Symbol29 *SymbolDictionary_find1489(SymbolDictionary27 *zself, void *zname)
{
	int slot1;
	Symbol29 *item2;
	Symbol29 *t4;
	slot1 = SymbolDictionary_slot1490(zself, zname);
	item2 = zself->names[slot1];
	while((char)(item2 != ((Symbol29 *)0)))
	{
		if((char)(Symbol_name1485(item2) == zname))
		{
			Symbol29 *t3;
			t3 = item2;
			return t3;
		}
		item2 = item2->next;
	}
	t4 = ((Symbol29 *)0);
	return t4;
}

static int SymbolDictionary_slot1490(SymbolDictionary27 *zself, void *zname)
{
	int t1;
	t1 = _umod375(((int )_hash668(zname)), zself->size);
	return t1;
}

static void Collection_initialize1491(Collection28 *zself)
{
	zself->size = 0;
	zself->firstElement = ((Symbol29 *)0);
	zself->lastElement = ((Symbol29 *)0);
}

static void Collection_add1492(Collection28 *zself, Symbol29 *ze)
{
	if((char)(zself->lastElement != ((Symbol29 *)0)))
	{
		((CollectionElement30 *)zself->lastElement)->nextSibling = ze;
	}
	zself->lastElement = ze;
	if((char)(zself->firstElement == ((Symbol29 *)0)))
	{
		zself->firstElement = ze;
	}
	(++zself->size);
	((CollectionElement30 *)ze)->nextSibling = ((Symbol29 *)0);
}

static SymbolDictionary27 *MemoryPool_new1493(MemoryPool160 *zself, MemoryPool160 *v1x, int v2x)
{
	SymbolDictionary27 *obj1;
	SymbolDictionary27 *t2;
	obj1 = MemoryPool_allocate1494(zself);
	SymbolDictionary_initialize1487(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static SymbolDictionary27 *MemoryPool_allocate1494(MemoryPool160 *zself)
{
	SymbolDictionary27 *t1;
	t1 = ((SymbolDictionary27 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static Symbol29 **MemoryPool_allocateArray1495(MemoryPool160 *zself, int zn)
{
	Symbol29 **t1;
	t1 = ((Symbol29 **)MemoryPool_allocateBytes297(zself, (((size_t )zn) * ((size_t)0x0000000000000004U))));
	return t1;
}

static Attribute107 *MemoryPool_new1496(MemoryPool160 *zself, StructureType104 *v1x, ASTAttribute122 *v2x)
{
	Attribute107 *obj1;
	Attribute107 *t2;
	obj1 = MemoryPool_allocate1497(zself);
	Attribute_initialize1004(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static Attribute107 *MemoryPool_allocate1497(MemoryPool160 *zself)
{
	Attribute107 *t1;
	t1 = ((Attribute107 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000002CU)));
	return t1;
}

static Scope8 *MemoryPool_new1498(MemoryPool160 *zself, Scope8 *v1x, Module7 *v2x, MemoryPool160 *v3x, int v4x)
{
	Scope8 *obj1;
	Scope8 *t2;
	obj1 = MemoryPool_allocate1499(zself);
	Scope_initialize442(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static Scope8 *MemoryPool_allocate1499(MemoryPool160 *zself)
{
	Scope8 *t1;
	t1 = ((Scope8 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void VargsExpression_initialize1500(VargsExpression88 *zself, ExpressionList61 *zexpressions, Program5 *zprogram)
{
	Expression_initialize475(((Expression21 *)zself), 19, ((Type98 *)zprogram->compositeType));
	zself->expressions = zexpressions;
}

static SelectExpression87 *MemoryPool_new1501(MemoryPool160 *zself, Expression21 *v1x, int v2x, Type98 *v3x)
{
	SelectExpression87 *obj1;
	SelectExpression87 *t2;
	obj1 = MemoryPool_allocate1502(zself);
	SelectExpression_initialize1202(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static SelectExpression87 *MemoryPool_allocate1502(MemoryPool160 *zself)
{
	SelectExpression87 *t1;
	t1 = ((SelectExpression87 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static String8Expression66 *MemoryPool_new1503(MemoryPool160 *zself, unsigned char *v1x, Program5 *v2x, Type98 *v3x)
{
	String8Expression66 *obj1;
	String8Expression66 *t2;
	obj1 = MemoryPool_allocate1504(zself);
	String8Expression_initialize516(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static String8Expression66 *MemoryPool_allocate1504(MemoryPool160 *zself)
{
	String8Expression66 *t1;
	t1 = ((String8Expression66 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static char Association_notEmpty1505(Association195 *zself)
{
	char t1;
	t1 = (!Association_isEmpty714(zself));
	return t1;
}

static unsigned short *MemoryPool_allocateArray1506(MemoryPool160 *zself, int zn)
{
	unsigned short *t1;
	t1 = ((unsigned short *)MemoryPool_allocateBytes297(zself, (((size_t )zn) * ((size_t)0x0000000000000002U))));
	return t1;
}

static String16Expression67 *MemoryPool_new1507(MemoryPool160 *zself, unsigned short *v1x, unsigned char *v2x, Program5 *v3x, Type98 *v4x)
{
	String16Expression67 *obj1;
	String16Expression67 *t2;
	obj1 = MemoryPool_allocate1508(zself);
	String16Expression_initialize569(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static String16Expression67 *MemoryPool_allocate1508(MemoryPool160 *zself)
{
	String16Expression67 *t1;
	t1 = ((String16Expression67 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static char Association_notEmpty1509(Association196 *zself)
{
	char t1;
	t1 = (!Association_isEmpty716(zself));
	return t1;
}

static void BuilderContext_reportSourceError1510(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, size_t v3x)
{
	BuilderContext_reportError1511(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x);
}

static void BuilderContext_reportError1511(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, size_t v4x)
{
	ErrorReporter_reportError1512(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x);
}

static void ErrorReporter_reportError1512(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, size_t v4x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1103((&s1), zfmt, v4x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void BuilderContext_reportSourceError1513(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, Symbol29 *v3x)
{
	BuilderContext_reportError1514(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x);
}

static void BuilderContext_reportError1514(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Symbol29 *v4x)
{
	ErrorReporter_reportError1515(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x);
}

static void ErrorReporter_reportError1515(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, Symbol29 *v4x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1516((&s1), zfmt, v4x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1516(StringBuffer2 *zself, unsigned char *zs, Symbol29 *v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1517(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static StringBuffer2 *StringBuffer__shl1517(StringBuffer2 *zself, Symbol29 *zobj)
{
	StringBuffer2 *t1;
	Symbol_addToStringBuffer1486(zobj, zself);
	t1 = zself;
	return t1;
}

static void SequenceIterator_initialize1518(SequenceIterator201 *zself, ExpressionList61 *zarguments, Collection203 *zsource)
{
	zself->source = zsource->firstElement;
	zself->arguments = zarguments;
	zself->element = ((CollectionPoolElement205 *)0);
	zself->index = -1;
}

static char SequenceIterator_isEOF1519(SequenceIterator201 *zself)
{
	char t1;
	t1 = ((char)(zself->element == ((CollectionPoolElement205 *)0)) && (char)(zself->source == ((ASTExpression140 *)0)));
	return t1;
}

static ArrayExpression69 *MemoryPool_new1520(MemoryPool160 *zself, ExpressionList61 *v1x, Program5 *v2x, Type98 *v3x, ArrayType102 *v4x)
{
	ArrayExpression69 *obj1;
	ArrayExpression69 *t2;
	obj1 = MemoryPool_allocate1521(zself);
	ArrayExpression_initialize1056(obj1, v1x, v2x, v3x, v4x);
	t2 = obj1;
	return t2;
}

static ArrayExpression69 *MemoryPool_allocate1521(MemoryPool160 *zself)
{
	ArrayExpression69 *t1;
	t1 = ((ArrayExpression69 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static Expression21 *MemoryPool_allocate1522(MemoryPool160 *zself)
{
	Expression21 *t1;
	t1 = ((Expression21 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static void BuilderContext_reportSourceError1523(BuilderContext177 *zself, Location45 *zsource, unsigned char *zfmt, ExpressionTypeList64 *v3x, ExpressionTypeList64 *v4x)
{
	BuilderContext_reportError1524(zself, BuilderContext_module836(zself)->filename, zsource->line, zfmt, v3x, v4x);
}

static void BuilderContext_reportError1524(BuilderContext177 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, ExpressionTypeList64 *v4x, ExpressionTypeList64 *v5x)
{
	ErrorReporter_reportError1525(((ErrorReporter158 *)zself->builder), zfile, zline, ((unsigned char *)zfmt), v4x, v5x);
}

static void ErrorReporter_reportError1525(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, ExpressionTypeList64 *v4x, ExpressionTypeList64 *v5x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1526((&s1), zfmt, v4x, v5x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1526(StringBuffer2 *zself, unsigned char *zs, ExpressionTypeList64 *v2x, ExpressionTypeList64 *v3x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl1423(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl1423(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static CondExpression82 *MemoryPool_new1527(MemoryPool160 *zself, Program5 *v1x, Expression21 *v2x, ExpressionList61 *v3x, ExpressionList61 *v4x, TypeSequence108 *v5x)
{
	CondExpression82 *obj1;
	CondExpression82 *t2;
	obj1 = MemoryPool_allocate1528(zself);
	CondExpression_initialize1225(obj1, v1x, v2x, v3x, v4x, v5x);
	t2 = obj1;
	return t2;
}

static CondExpression82 *MemoryPool_allocate1528(MemoryPool160 *zself)
{
	CondExpression82 *t1;
	t1 = ((CondExpression82 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static VargsExpression88 *MemoryPool_new1529(MemoryPool160 *zself, ExpressionList61 *v1x, Program5 *v2x)
{
	VargsExpression88 *obj1;
	VargsExpression88 *t2;
	obj1 = MemoryPool_allocate1530(zself);
	VargsExpression_initialize1500(obj1, v1x, v2x);
	t2 = obj1;
	return t2;
}

static VargsExpression88 *MemoryPool_allocate1530(MemoryPool160 *zself)
{
	VargsExpression88 *t1;
	t1 = ((VargsExpression88 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static void ErrorReporter_reportError1531(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, unsigned char *v4x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1532((&s1), zfmt, v4x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1532(StringBuffer2 *zself, unsigned char *zs, unsigned char *v2x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl367(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static void Parser_initialize1533(Parser182 *zself, MemoryPool160 *zpool, unsigned char *zsource, unsigned char *zfile, SimpleDictionary186 *zdefines, IdentifierDictionary19 *zidentifiers, ErrorReporter158 *zerrorReporter)
{
	zself->pool = zpool;
	zself->module = MemoryPool_new1588(zpool, zfile);
	zself->defines = zdefines;
	zself->directives = (&S1673);
	zself->errorReporter = zerrorReporter;
	TokenStream_initialize1584((&zself->stream), zpool, zsource, zdefines, zidentifiers, zfile, zerrorReporter);
}

static void Parser_release1534(Parser182 *zself)
{
	TokenStream_release1585((&zself->stream));
}

static ASTModule112 *Parser_getModule1535(Parser182 *zself)
{
	ASTModule112 *t1;
	Parser_readContent1536(zself, ((ASTNode110 *)zself->module), 0);
	Parser_expect1566(zself, 1);
	t1 = ((char)(Parser_token1568(zself) == 0)?((ASTModule112 *)0):zself->module);
	return t1;
}

static void Parser_readContent1536(Parser182 *zself, ASTNode110 *zs, int zmask)
{
	DirectiveSet156 *savedDirectives1;
	savedDirectives1 = zself->directives;
	if((char)(zself->directives->visibility == ((unsigned char)1U)))
	{
		zself->directives = Parser_cloneDirectives1578(zself);
		zself->directives->visibility = ((unsigned char)0U);
	}
	for(;;)
	{
		switch( Parser_token1568(zself) )
		{
		case 5:
		{
			if((char)((zmask & 4) == 0))
			{
				Parser_syntaxError1577(zself);
			}
			else
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getSymbol1546(zself)));
			}
		}
		break;
		case 41:
		{
			if((char)((zmask & 1) == 0))
			{
				Parser_syntaxError1577(zself);
			}
			else
			{
				Parser_nextToken1569(zself);
				switch( Parser_token1568(zself) )
				{
				case 39:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getFunction1539(zself, 11)));
				}
				break;
				case 43:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getAlias1537(zself, 12)));
				}
				break;
				case 42:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getGlobalVariable1538(zself, 13)));
				}
				break;
				case 37:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getStructure1540(zself, 14)));
				}
				break;
				case 38:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getSubType1542(zself, 15)));
				}
				break;
				default:
				{
					Parser_syntaxError1577(zself);
				}
				}
			}
		}
		break;
		case 40:
		{
			if((char)((zmask & 1) == 0))
			{
				Parser_syntaxError1577(zself);
			}
			else
			{
				Parser_nextToken1569(zself);
				switch( Parser_token1568(zself) )
				{
				case 39:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getFunction1539(zself, 1)));
				}
				break;
				case 43:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getAlias1537(zself, 2)));
				}
				break;
				case 42:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getGlobalVariable1538(zself, 3)));
				}
				break;
				case 37:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getStructure1540(zself, 4)));
				}
				break;
				case 38:
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getSubType1542(zself, 5)));
				}
				break;
				default:
				{
					Parser_syntaxError1577(zself);
				}
				}
			}
		}
		break;
		case 44:
		{
			ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getExtension1545(zself)));
		}
		break;
		case 36:
		{
			Parser_nextToken1569(zself);
			if((char)(Parser_token1568(zself) == 39))
			{
				if((char)((zmask & 1) == 0))
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getImportFunction1543(zself, 18)));
				}
				else
				{
					ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getImportFunction1543(zself, 19)));
				}
			}
			else
			{
				if((char)(Parser_token1568(zself) == 40))
				{
					Parser_nextToken1569(zself);
					if((char)((zmask & 1) == 0))
					{
						Parser_syntaxError1577(zself);
					}
					else
					{
						if((char)(Parser_token1568(zself) == 39))
						{
							ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getImportFunction1543(zself, 18)));
						}
						else
						{
							Parser_syntaxError1577(zself);
						}
					}
				}
				else
				{
					if((char)(Parser_token1568(zself) == 41))
					{
						Parser_nextToken1569(zself);
						if((char)((zmask & 1) == 0))
						{
							Parser_syntaxError1577(zself);
						}
						else
						{
							if((char)(Parser_token1568(zself) == 39))
							{
								ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getImportFunction1543(zself, 20)));
							}
							else
							{
								Parser_syntaxError1577(zself);
							}
						}
					}
					else
					{
						ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getImport1544(zself)));
					}
				}
			}
		}
		break;
		case 39:
		{
			if((char)((zmask & 1) == 0))
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getFunction1539(zself, 1)));
			}
			else
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getFunction1539(zself, 6)));
			}
		}
		break;
		case 43:
		{
			if((char)((zmask & 1) == 0))
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getAlias1537(zself, 2)));
			}
			else
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getAlias1537(zself, 7)));
			}
		}
		break;
		case 42:
		{
			if((char)((zmask & 1) == 0))
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getGlobalVariable1538(zself, 3)));
			}
			else
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getAttribute1541(zself)));
			}
		}
		break;
		case 37:
		{
			if((char)((zmask & 1) == 0))
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getStructure1540(zself, 4)));
			}
			else
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getStructure1540(zself, 9)));
			}
		}
		break;
		case 38:
		{
			if((char)((zmask & 1) == 0))
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getSubType1542(zself, 5)));
			}
			else
			{
				ASTNode__shl1359(zs, ((ASTElement109 *)Parser_getSubType1542(zself, 10)));
			}
		}
		break;
		case 77:
		{
			Parser_applyCurrentDirective1579(zself);
		}
		break;
		case 65:
		{
			Parser_nextToken1569(zself);
		}
		break;
		case 1:
		case 46:
		{
			goto L2;
		}
		break;
		default:
		{
			Parser_syntaxError1577(zself);
			goto L2;
		}
		}
	}
	L2: ;
	zself->directives = savedDirectives1;
}

static ASTAlias117 *Parser_getAlias1537(Parser182 *zself, int zcode)
{
	ASTAlias117 *a1;
	ASTAlias117 *t2;
	Parser_nextToken1569(zself);
	a1 = MemoryPool_allocate1607(zself->pool);
	((Location45 *)a1)->line = Parser_line1573(zself);
	((ASTElement109 *)a1)->code = zcode;
	((ASTElement109 *)a1)->directives = Parser_getDirectives1564(zself);
	a1->name = Parser_getName1563(zself);
	Parser_expect1566(zself, 17);
	a1->expression = Parser_getExpression1557(zself);
	t2 = a1;
	return t2;
}

static ASTGlobalVariable114 *Parser_getGlobalVariable1538(Parser182 *zself, int zcode)
{
	ASTGlobalVariable114 *v1;
	ASTGlobalVariable114 *t2;
	Parser_nextToken1569(zself);
	v1 = MemoryPool_allocate1608(zself->pool);
	((Location45 *)v1)->line = Parser_line1573(zself);
	((ASTElement109 *)v1)->code = zcode;
	((ASTElement109 *)v1)->directives = Parser_getDirectives1564(zself);
	v1->name = Parser_getName1563(zself);
	if((char)(Parser_token1568(zself) == 67))
	{
		Parser_nextToken1569(zself);
		v1->type = Parser_getExpression1557(zself);
		v1->initialValue = ((ASTExpression140 *)0);
	}
	else
	{
		if((char)(Parser_token1568(zself) == 17))
		{
			Parser_nextToken1569(zself);
			v1->initialValue = Parser_getExpression1557(zself);
			v1->type = ((ASTExpression140 *)0);
		}
		else
		{
			Parser_syntaxError1577(zself);
		}
	}
	t2 = v1;
	return t2;
}

static ASTFunction115 *Parser_getFunction1539(Parser182 *zself, int zcode)
{
	ASTFunction115 *f1;
	Collection203 *returnTypes2;
	ASTFunction115 *t7;
	Parser_nextToken1569(zself);
	f1 = MemoryPool_allocate1600(zself->pool);
	((Location45 *)f1)->line = Parser_line1573(zself);
	((ASTElement109 *)f1)->code = zcode;
	f1->isVariadic = 0;
	f1->generic = 0;
	f1->selfGeneric = 0;
	((ASTElement109 *)f1)->directives = Parser_getDirectives1564(zself);
	if(((char)(zcode != 1) && (char)(Parser_token1568(zself) == 6)))
	{
		Parser_nextToken1569(zself);
		f1->selfGeneric = 1;
		f1->generic = 1;
	}
	f1->name = Parser_getName1563(zself);
	if((char)(Parser_token1568(zself) != 68))
	{
		f1->parameters = (&S1672);
	}
	else
	{
		Parser_nextToken1569(zself);
		f1->parameters = MemoryPool_new1602(zself->pool);
		for(;;)
		{
			ASTParameter120 *fp5;
			ASTExpression140 *type6;
			Parser_skipEmptyTokens1567(zself);
			if((char)(Parser_token1568(zself) == 74))
			{
				Parser_nextToken1569(zself);
				f1->isVariadic = 1;
				f1->generic = 1;
				goto L3;
			}
			fp5 = MemoryPool_allocate1604(zself->pool);
			((Location45 *)fp5)->line = Parser_line1573(zself);
			fp5->name = Parser_getName1563(zself);
			type6 = ((ASTExpression140 *)0);
			if((char)(Parser_token1568(zself) == 67))
			{
				Parser_nextToken1569(zself);
				type6 = Parser_getExpression1557(zself);
			}
			else
			{
				f1->generic = 1;
			}
			fp5->type = type6;
			Collection_add885(f1->parameters, fp5);
			if((char)(Parser_token1568(zself) != 66))
			{
				goto L3;
			}
			Parser_nextToken1569(zself);
		}
		L3: ;
		Parser_expect1566(zself, 69);
	}
	returnTypes2 = ((Collection203 *)0);
	if((char)(Parser_token1568(zself) == 67))
	{
		Parser_nextToken1569(zself);
		if((char)(Parser_token1568(zself) != 65))
		{
			returnTypes2 = Parser_getExpressionList1549(zself);
		}
		else
		{
			returnTypes2 = (&S1674);
		}
	}
	f1->returnTypes = returnTypes2;
	zself->isMacro = 0;
	f1->body = Parser_getBlock1555(zself);
	f1->isMacro = zself->isMacro;
	t7 = f1;
	return t7;
}

static ASTType118 *Parser_getStructure1540(Parser182 *zself, int zcode)
{
	ASTType118 *s1;
	ASTExpression140 *parent2;
	ASTType118 *t3;
	Parser_nextToken1569(zself);
	s1 = MemoryPool_allocate1609(zself->pool);
	((Location45 *)s1)->line = Parser_line1573(zself);
	((ASTElement109 *)s1)->code = zcode;
	Collection_initialize1360((&((ASTNode110 *)s1)->children));
	((ASTElement109 *)s1)->directives = Parser_getDirectives1564(zself);
	s1->name = Parser_getName1563(zself);
	s1->parameters = Parser_getTypeParameterList1547(zself);
	parent2 = ((ASTExpression140 *)0);
	if((char)(Parser_token1568(zself) == 67))
	{
		Parser_nextToken1569(zself);
		parent2 = Parser_getExpression1557(zself);
	}
	s1->parent = parent2;
	Parser_expect1566(zself, 65);
	Parser_readContent1536(zself, ((ASTNode110 *)s1), 7);
	Parser_expect1566(zself, 46);
	t3 = s1;
	return t3;
}

static ASTAttribute122 *Parser_getAttribute1541(Parser182 *zself)
{
	ASTAttribute122 *a1;
	ASTAttribute122 *t2;
	Parser_nextToken1569(zself);
	a1 = MemoryPool_allocate1613(zself->pool);
	((Location45 *)a1)->line = Parser_line1573(zself);
	((ASTElement109 *)a1)->code = 8;
	((ASTElement109 *)a1)->directives = Parser_getDirectives1564(zself);
	a1->name = Parser_getName1563(zself);
	Parser_expect1566(zself, 67);
	a1->type = Parser_getExpression1557(zself);
	t2 = a1;
	return t2;
}

static ASTType118 *Parser_getSubType1542(Parser182 *zself, int zcode)
{
	ASTType118 *s1;
	ASTExpression140 *parent2;
	ASTType118 *t3;
	Parser_nextToken1569(zself);
	s1 = MemoryPool_allocate1609(zself->pool);
	((Location45 *)s1)->line = Parser_line1573(zself);
	((ASTElement109 *)s1)->code = zcode;
	Collection_initialize1360((&((ASTNode110 *)s1)->children));
	((ASTElement109 *)s1)->directives = Parser_getDirectives1564(zself);
	s1->name = Parser_getName1563(zself);
	s1->parameters = Parser_getTypeParameterList1547(zself);
	parent2 = ((ASTExpression140 *)0);
	if((char)(Parser_token1568(zself) == 67))
	{
		Parser_nextToken1569(zself);
		parent2 = Parser_getExpression1557(zself);
	}
	s1->parent = parent2;
	Parser_expect1566(zself, 65);
	Parser_readContent1536(zself, ((ASTNode110 *)s1), 5);
	Parser_expect1566(zself, 46);
	t3 = s1;
	return t3;
}

static ASTExternFunction116 *Parser_getImportFunction1543(Parser182 *zself, int zcode)
{
	ASTExternFunction116 *i1;
	unsigned char *pub2;
	Collection203 *returns3;
	ASTExternFunction116 *t4;
	Parser_nextToken1569(zself);
	i1 = MemoryPool_allocate1611(zself->pool);
	((Location45 *)i1)->line = Parser_line1573(zself);
	((ASTElement109 *)i1)->code = zcode;
	((ASTElement109 *)i1)->directives = Parser_getDirectives1564(zself);
	pub2 = ((unsigned char *)0);
	if((char)(Parser_token1568(zself) == 4))
	{
		Parser_nextToken1569(zself);
		pub2 = Parser_string1570(zself);
	}
	i1->publicName = pub2;
	i1->name = Parser_getName1563(zself);
	i1->parameters = Parser_getArgumentList1548(zself);
	returns3 = (&S1674);
	if((char)(Parser_token1568(zself) == 67))
	{
		Parser_nextToken1569(zself);
		returns3 = Parser_getExpressionList1549(zself);
	}
	i1->returns = returns3;
	t4 = i1;
	return t4;
}

static ASTImport113 *Parser_getImport1544(Parser182 *zself)
{
	ASTImport113 *i1;
	ASTImport113 *t2;
	i1 = MemoryPool_allocate1612(zself->pool);
	((Location45 *)i1)->line = Parser_line1573(zself);
	((ASTElement109 *)i1)->code = 17;
	((ASTElement109 *)i1)->directives = Parser_getDirectives1564(zself);
	if((!Parser_unexpected1576(zself, 4)))
	{
		i1->name = MemoryPool_newStringFromString8254(zself->pool, Parser_string1570(zself));
		Parser_nextToken1569(zself);
	}
	t2 = i1;
	return t2;
}

static ASTExtension119 *Parser_getExtension1545(Parser182 *zself)
{
	ASTExtension119 *s1;
	ASTExtension119 *t2;
	Parser_nextToken1569(zself);
	s1 = MemoryPool_allocate1610(zself->pool);
	((Location45 *)s1)->line = Parser_line1573(zself);
	((ASTElement109 *)s1)->code = 21;
	Collection_initialize1360((&((ASTNode110 *)s1)->children));
	((ASTElement109 *)s1)->directives = Parser_getDirectives1564(zself);
	s1->type = Parser_getExpression1557(zself);
	Parser_expect1566(zself, 65);
	Parser_readContent1536(zself, ((ASTNode110 *)s1), 1);
	Parser_expect1566(zself, 46);
	t2 = s1;
	return t2;
}

static ASTSymbol121 *Parser_getSymbol1546(Parser182 *zself)
{
	ASTSymbol121 *v1;
	ASTExpression140 *e2;
	ASTSymbol121 *t3;
	v1 = MemoryPool_allocate1599(zself->pool);
	((Location45 *)v1)->line = Parser_line1573(zself);
	((ASTElement109 *)v1)->code = 16;
	((ASTElement109 *)v1)->directives = zself->directives;
	v1->name = Parser_identifier1571(zself);
	Parser_nextToken1569(zself);
	e2 = ((ASTExpression140 *)0);
	if((char)(Parser_token1568(zself) == 17))
	{
		Parser_nextToken1569(zself);
		e2 = Parser_getExpression1557(zself);
	}
	v1->expression = e2;
	Parser_expect1566(zself, 65);
	t3 = v1;
	return t3;
}

static Collection202 *Parser_getTypeParameterList1547(Parser182 *zself)
{
	Collection202 *p1;
	Collection202 *t6;
	if((char)(Parser_token1568(zself) != 68))
	{
		Collection202 *t2;
		t2 = (&S1672);
		return t2;
	}
	Parser_nextToken1569(zself);
	p1 = MemoryPool_new1602(zself->pool);
	for(;;)
	{
		ASTParameter120 *fp5;
		Parser_skipEmptyTokens1567(zself);
		fp5 = MemoryPool_allocate1604(zself->pool);
		((Location45 *)fp5)->line = Parser_line1573(zself);
		fp5->name = Parser_getName1563(zself);
		fp5->type = ((ASTExpression140 *)0);
		Collection_add885(p1, fp5);
		if((char)(Parser_token1568(zself) != 66))
		{
			goto L3;
		}
		Parser_nextToken1569(zself);
	}
	L3: ;
	Parser_expect1566(zself, 69);
	t6 = p1;
	return t6;
}

static Collection203 *Parser_getArgumentList1548(Parser182 *zself)
{
	if((char)(Parser_token1568(zself) == 68))
	{
		Collection203 *list1;
		Collection203 *t2;
		Parser_nextToken1569(zself);
		list1 = Parser_getExpressionList1549(zself);
		Parser_expect1566(zself, 69);
		t2 = list1;
		return t2;
	}
	else
	{
		Collection203 *t3;
		t3 = (&S1674);
		return t3;
	}
}

static Collection203 *Parser_getExpressionList1549(Parser182 *zself)
{
	Collection203 *list1;
	Collection203 *t5;
	list1 = MemoryPool_new1605(zself->pool);
	for(;;)
	{
		ASTExpression140 *e4;
		e4 = Parser_getExpression1557(zself);
		Collection_add888(list1, e4);
		if((char)(Parser_token1568(zself) != 66))
		{
			goto L2;
		}
		Parser_nextToken1569(zself);
	}
	L2: ;
	t5 = list1;
	return t5;
}

static Collection204 *Parser_getInstructionList1550(Parser182 *zself)
{
	Collection204 *block1;
	Collection204 *t5;
	block1 = MemoryPool_new1614(zself->pool);
	for(;;)
	{
		int token4;
		Parser_skipEmptyTokens1567(zself);
		token4 = Parser_token1568(zself);
		if(A1679[token4])
		{
			goto L2;
		}
		Collection_add1293(block1, Parser_getInstruction1552(zself));
		if((!Parser_expect1566(zself, 65)))
		{
			goto L2;
		}
	}
	L2: ;
	t5 = block1;
	return t5;
}

static Collection244 *Parser_getIdList1551(Parser182 *zself)
{
	Collection244 *list1;
	Collection244 *t4;
	list1 = MemoryPool_new1628(zself->pool);
	for(;;)
	{
		Parser_skipEmptyTokens1567(zself);
		Collection_add1314(list1, Parser_getId1562(zself));
		if((char)(Parser_token1568(zself) != 66))
		{
			goto L2;
		}
		Parser_nextToken1569(zself);
	}
	L2: ;
	t4 = list1;
	return t4;
}

static ASTInstruction123 *Parser_getInstruction1552(Parser182 *zself)
{
	if((char)(Parser_token1568(zself) == 60))
	{
		ASTDefer139 *i1;
		ASTInstruction123 *t2;
		Parser_nextToken1569(zself);
		i1 = MemoryPool_allocate1616(zself->pool);
		((Location45 *)i1)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i1)->code = 12;
		i1->instruction = Parser_getInstructionNoPrefix1553(zself);
		t2 = ((ASTInstruction123 *)i1);
		return t2;
	}
	else
	{
		ASTInstruction123 *t3;
		t3 = Parser_getInstructionNoPrefix1553(zself);
		return t3;
	}
}

static ASTInstruction123 *Parser_getInstructionNoPrefix1553(Parser182 *zself)
{
	MemoryPool160 *pool1;
	ASTInstruction123 *e2;
	ASTInstruction123 *t33;
	pool1 = zself->pool;
	e2 = ((ASTInstruction123 *)0);
	switch( Parser_token1568(zself) )
	{
	case 45:
	{
		ASTBegin138 *i3;
		i3 = MemoryPool_allocate1617(pool1);
		((Location45 *)i3)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i3)->code = 11;
		Parser_nextToken1569(zself);
		Parser_expect1566(zself, 65);
		i3->mainBlock = Parser_getInstructionList1550(zself);
		Parser_expect1566(zself, 46);
		e2 = ((ASTInstruction123 *)i3);
	}
	break;
	case 55:
	{
		ASTReturn129 *i4;
		Collection203 *expressions5;
		int token6;
		Parser_nextToken1569(zself);
		i4 = MemoryPool_allocate1618(pool1);
		((Location45 *)i4)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i4)->code = 5;
		expressions5 = (&S1674);
		token6 = Parser_token1568(zself);
		if(((char)(token6 != 65) && (char)(token6 != 48)))
		{
			expressions5 = Parser_getExpressionList1549(zself);
		}
		i4->expressions = expressions5;
		e2 = Parser_getTrailingConditional1565(zself, ((ASTInstruction123 *)i4));
	}
	break;
	case 48:
	{
		ASTIf134 *i7;
		Parser_nextToken1569(zself);
		i7 = MemoryPool_allocate1619(pool1);
		((Location45 *)i7)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i7)->code = 8;
		Collection_initialize1431((&i7->rules));
		i7->elseBlock = ((Collection204 *)0);
		Collection_add1432((&i7->rules), Parser_getRule1560(zself));
		for(;;)
		{
			int token10;
			token10 = Parser_token1568(zself);
			if(((char)(token10 == 49) && (char)(i7->elseBlock == ((Collection204 *)0))))
			{
				Parser_nextToken1569(zself);
				Collection_add1432((&i7->rules), Parser_getRule1560(zself));
			}
			else
			{
				if(((char)(token10 == 50) && (char)(i7->elseBlock == ((Collection204 *)0))))
				{
					Parser_nextToken1569(zself);
					i7->elseBlock = Parser_getMiniBlock1556(zself);
				}
				else
				{
					if((char)(token10 == 46))
					{
						Parser_nextToken1569(zself);
						goto L8;
					}
					else
					{
						Parser_syntaxError1577(zself);
						goto L8;
					}
				}
			}
		}
		L8: ;
		e2 = ((ASTInstruction123 *)i7);
	}
	break;
	case 51:
	{
		ASTWhile131 *i11;
		Parser_nextToken1569(zself);
		i11 = MemoryPool_allocate1621(pool1);
		((Location45 *)i11)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i11)->code = 6;
		i11->condition = Parser_getExpression1557(zself);
		i11->block = Parser_getBlock1555(zself);
		e2 = ((ASTInstruction123 *)i11);
	}
	break;
	case 52:
	{
		ASTWhile131 *i12;
		Parser_nextToken1569(zself);
		i12 = MemoryPool_allocate1621(pool1);
		((Location45 *)i12)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i12)->code = 6;
		i12->condition = ((ASTExpression140 *)0);
		i12->block = Parser_getBlock1555(zself);
		e2 = ((ASTInstruction123 *)i12);
	}
	break;
	case 53:
	{
		ASTSwitch132 *i13;
		Parser_nextToken1569(zself);
		i13 = MemoryPool_allocate1622(pool1);
		((Location45 *)i13)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i13)->code = 7;
		Collection_initialize1445((&i13->choices));
		i13->elseBlock = ((Collection204 *)0);
		i13->value = Parser_getExpression1557(zself);
		Parser_expect1566(zself, 65);
		for(;;)
		{
			int token16;
			Parser_skipEmptyTokens1567(zself);
			token16 = Parser_token1568(zself);
			if(((char)(token16 == 54) && (char)(i13->elseBlock == ((Collection204 *)0))))
			{
				Parser_nextToken1569(zself);
				Collection_add1446((&i13->choices), Parser_getChoice1561(zself));
			}
			else
			{
				if(((char)(token16 == 50) && (char)(i13->elseBlock == ((Collection204 *)0))))
				{
					Parser_nextToken1569(zself);
					i13->elseBlock = Parser_getMiniBlock1556(zself);
				}
				else
				{
					if((char)(token16 == 46))
					{
						Parser_nextToken1569(zself);
						goto L14;
					}
					else
					{
						Parser_syntaxError1577(zself);
						goto L14;
					}
				}
			}
		}
		L14: ;
		e2 = ((ASTInstruction123 *)i13);
	}
	break;
	case 42:
	{
		ASTId155 *v117;
		Parser_nextToken1569(zself);
		Parser_skipEmptyTokens1567(zself);
		v117 = Parser_getId1562(zself);
		if((char)(Parser_token1568(zself) == 67))
		{
			ASTLocalVariable127 *i18;
			ASTFreeCall141 *call19;
			i18 = MemoryPool_allocate1625(pool1);
			((Location45 *)i18)->line = Parser_line1573(zself);
			((ASTInstruction123 *)i18)->code = 3;
			i18->variable = v117->name;
			Parser_nextToken1569(zself);
			i18->type = Parser_getExpression1557(zself);
			call19 = ((ASTFreeCall141 *)0);
			if((char)(Parser_token1568(zself) == 66))
			{
				Parser_nextToken1569(zself);
				call19 = Parser_getFreeCall1559(zself);
			}
			i18->call = call19;
			e2 = ((ASTInstruction123 *)i18);
		}
		else
		{
			ASTLocalVariables126 *i20;
			Collection244 *list21;
			i20 = MemoryPool_allocate1630(pool1);
			((Location45 *)i20)->line = Parser_line1573(zself);
			((ASTInstruction123 *)i20)->code = 2;
			list21 = MemoryPool_new1628(zself->pool);
			Collection_add1314(list21, v117);
			while((char)(Parser_token1568(zself) == 66))
			{
				Parser_nextToken1569(zself);
				Parser_skipEmptyTokens1567(zself);
				Collection_add1314(list21, Parser_getId1562(zself));
			}
			i20->variables = list21;
			if((char)(Parser_token1568(zself) == 17))
			{
				Parser_nextToken1569(zself);
				i20->expressions = Parser_getExpressionList1549(zself);
			}
			else
			{
				Parser_syntaxError1577(zself);
			}
			e2 = ((ASTInstruction123 *)i20);
		}
	}
	break;
	case 43:
	{
		ASTLocalAlias128 *i22;
		Parser_nextToken1569(zself);
		i22 = MemoryPool_allocate1631(zself->pool);
		((Location45 *)i22)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i22)->code = 4;
		i22->name = Parser_getName1563(zself);
		Parser_expect1566(zself, 17);
		i22->expression = Parser_getExpression1557(zself);
		e2 = ((ASTInstruction123 *)i22);
	}
	break;
	case 56:
	{
		ASTBreak130 *i23;
		Collection203 *a24;
		int token25;
		Parser_nextToken1569(zself);
		i23 = MemoryPool_allocate1632(pool1);
		((Location45 *)i23)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i23)->code = 9;
		a24 = (&S1674);
		token25 = Parser_token1568(zself);
		if(((char)(token25 != 65) && (char)(token25 != 48)))
		{
			a24 = Parser_getExpressionList1549(zself);
		}
		i23->arguments = a24;
		e2 = Parser_getTrailingConditional1565(zself, ((ASTInstruction123 *)i23));
	}
	break;
	case 57:
	{
		ASTBreak130 *i26;
		Collection203 *a27;
		int token28;
		Parser_nextToken1569(zself);
		i26 = MemoryPool_allocate1632(pool1);
		((Location45 *)i26)->line = Parser_line1573(zself);
		((ASTInstruction123 *)i26)->code = 10;
		a27 = (&S1674);
		token28 = Parser_token1568(zself);
		if(((char)(token28 != 65) && (char)(token28 != 48)))
		{
			a27 = Parser_getExpressionList1549(zself);
		}
		i26->arguments = a27;
		e2 = Parser_getTrailingConditional1565(zself, ((ASTInstruction123 *)i26));
	}
	break;
	default:
	{
		int line29;
		Collection203 *lvalues30;
		line29 = Parser_line1573(zself);
		lvalues30 = Parser_getExpressionList1549(zself);
		if((char)(Parser_token1568(zself) == 17))
		{
			ASTAssign125 *i31;
			Parser_nextToken1569(zself);
			i31 = MemoryPool_allocate1633(pool1);
			((Location45 *)i31)->line = line29;
			((ASTInstruction123 *)i31)->code = 1;
			i31->leftValues = lvalues30;
			i31->rightValues = Parser_getExpressionList1549(zself);
			e2 = ((ASTInstruction123 *)i31);
		}
		else
		{
			ASTEvaluate124 *i32;
			i32 = MemoryPool_allocate1634(pool1);
			((Location45 *)i32)->line = line29;
			((ASTInstruction123 *)i32)->code = 0;
			i32->values = lvalues30;
			e2 = ((ASTInstruction123 *)i32);
		}
	}
	}
	t33 = e2;
	return t33;
}

static ASTBlockClosure154 *Parser_getBlockClosure1554(Parser182 *zself)
{
	ASTBlockClosure154 *block1;
	Collection244 *p2;
	ASTBlockClosure154 *t3;
	Parser_nextToken1569(zself);
	block1 = MemoryPool_allocate1627(zself->pool);
	p2 = (&S1671);
	if((char)(Parser_token1568(zself) == 2))
	{
		p2 = Parser_getIdList1551(zself);
	}
	block1->parameters = p2;
	block1->instructions = Parser_getBlock1555(zself);
	t3 = block1;
	return t3;
}

static Collection204 *Parser_getBlock1555(Parser182 *zself)
{
	Collection204 *block1;
	Collection204 *t2;
	Parser_expect1566(zself, 65);
	block1 = Parser_getInstructionList1550(zself);
	Parser_expect1566(zself, 46);
	t2 = block1;
	return t2;
}

static Collection204 *Parser_getMiniBlock1556(Parser182 *zself)
{
	Collection204 *t1;
	Parser_expect1566(zself, 65);
	t1 = Parser_getInstructionList1550(zself);
	return t1;
}

static ASTExpression140 *Parser_getExpression1557(Parser182 *zself)
{
	ASTExpression140 *t1;
	t1 = Parser_getExpressionWitthPriority1558(zself, 0);
	return t1;
}

static ASTExpression140 *Parser_getExpressionWitthPriority1558(Parser182 *zself, int zcurrentPriority)
{
	MemoryPool160 *pool1;
	ASTExpression140 *e2;
	pool1 = zself->pool;
	e2 = ((ASTExpression140 *)0);
	Parser_skipEmptyTokens1567(zself);
	switch( Parser_token1568(zself) )
	{
	case 68:
	{
		Parser_nextToken1569(zself);
		e2 = Parser_getExpression1557(zself);
		Parser_expect1566(zself, 69);
	}
	break;
	case 70:
	{
		ASTArrayType147 *d3;
		ASTExpression140 *arraySize4;
		Parser_nextToken1569(zself);
		d3 = MemoryPool_allocate1635(pool1);
		((Location45 *)d3)->line = Parser_line1573(zself);
		((ASTExpression140 *)d3)->code = 10;
		arraySize4 = ((ASTExpression140 *)0);
		if((char)(Parser_token1568(zself) != 71))
		{
			arraySize4 = Parser_getExpression1557(zself);
		}
		d3->arraySize = arraySize4;
		Parser_expect1566(zself, 71);
		d3->cellType = Parser_getExpressionWitthPriority1558(zself, 32);
		e2 = ((ASTExpression140 *)d3);
	}
	break;
	case 72:
	{
		ASTArray145 *d5;
		Collection203 *a6;
		Parser_nextToken1569(zself);
		d5 = MemoryPool_allocate1636(pool1);
		((Location45 *)d5)->line = Parser_line1573(zself);
		((ASTExpression140 *)d5)->code = 4;
		a6 = (&S1674);
		if((char)(Parser_token1568(zself) != 73))
		{
			a6 = Parser_getExpressionList1549(zself);
		}
		d5->arguments = a6;
		Parser_expect1566(zself, 73);
		e2 = ((ASTExpression140 *)d5);
	}
	break;
	case 3:
	{
		ASTInteger149 *n7;
		n7 = MemoryPool_allocate1637(pool1);
		((Location45 *)n7)->line = Parser_line1573(zself);
		((ASTExpression140 *)n7)->code = 1;
		n7->integer = Parser_integer1572(zself);
		e2 = ((ASTExpression140 *)n7);
		Parser_nextToken1569(zself);
	}
	break;
	case 4:
	{
		ASTString150 *n8;
		n8 = MemoryPool_allocate1638(pool1);
		((Location45 *)n8)->line = Parser_line1573(zself);
		((ASTExpression140 *)n8)->code = 0;
		n8->string = Parser_string1570(zself);
		e2 = ((ASTExpression140 *)n8);
		Parser_nextToken1569(zself);
	}
	break;
	case 2:
	{
		e2 = ((ASTExpression140 *)Parser_getFreeCall1559(zself));
	}
	break;
	case 5:
	{
		ASTSymbolName151 *n9;
		n9 = MemoryPool_allocate1639(pool1);
		((Location45 *)n9)->line = Parser_line1573(zself);
		((ASTExpression140 *)n9)->code = 3;
		n9->symbol = Parser_identifier1571(zself);
		e2 = ((ASTExpression140 *)n9);
		Parser_nextToken1569(zself);
	}
	break;
	case 75:
	{
		ASTUnary143 *d10;
		Parser_nextToken1569(zself);
		d10 = MemoryPool_allocate1640(pool1);
		((Location45 *)d10)->line = Parser_line1573(zself);
		((ASTExpression140 *)d10)->code = 16;
		d10->argument = Parser_getExpressionWitthPriority1558(zself, 34);
		e2 = ((ASTExpression140 *)d10);
	}
	break;
	case 6:
	case 7:
	case 63:
	{
		void *name11;
		int priority12;
		int line13;
		ASTExpression140 *context14;
		void *t15;
		int t16;
		t15 = Parser_prefixParams1575(zself, Parser_token1568(zself), (&t16));
		name11 = t15;
		priority12 = t16;
		Parser_nextToken1569(zself);
		line13 = Parser_line1573(zself);
		context14 = Parser_getExpressionWitthPriority1558(zself, priority12);
		if(((char)(name11 == (&identifiers1661)->neg) && (char)(context14->code == 1)))
		{
			ASTInteger149 *n17;
			n17 = MemoryPool_allocate1637(pool1);
			((Location45 *)n17)->line = line13;
			((ASTExpression140 *)n17)->code = 2;
			n17->integer = ASTExpression_asInteger894(context14)->integer;
			e2 = ((ASTExpression140 *)n17);
		}
		else
		{
			ASTContextCall142 *d18;
			d18 = MemoryPool_allocate1641(pool1);
			((Location45 *)d18)->line = line13;
			((ASTExpression140 *)d18)->code = 6;
			((ASTFreeCall141 *)d18)->name = name11;
			((ASTFreeCall141 *)d18)->arguments = (&S1674);
			d18->context = context14;
			((ASTFreeCall141 *)d18)->block = ((ASTBlockClosure154 *)0);
			e2 = ((ASTExpression140 *)d18);
		}
	}
	break;
	case 9:
	{
		int priority19;
		ASTUnary143 *d20;
		priority19 = 32;
		Parser_nextToken1569(zself);
		d20 = MemoryPool_allocate1640(pool1);
		((Location45 *)d20)->line = Parser_line1573(zself);
		((ASTExpression140 *)d20)->code = 17;
		d20->argument = Parser_getExpressionWitthPriority1558(zself, priority19);
		e2 = ((ASTExpression140 *)d20);
	}
	break;
	case 74:
	{
		ASTExpression140 *d21;
		Parser_nextToken1569(zself);
		d21 = MemoryPool_allocate1642(pool1);
		((Location45 *)d21)->line = Parser_line1573(zself);
		d21->code = 14;
		e2 = d21;
	}
	break;
	case 14:
	{
		ASTFunctionType146 *d22;
		Collection203 *p23;
		Collection203 *returnTypes24;
		Parser_nextToken1569(zself);
		d22 = MemoryPool_allocate1643(pool1);
		((Location45 *)d22)->line = Parser_line1573(zself);
		((ASTExpression140 *)d22)->code = 9;
		d22->callingConvention = Parser_getDirectives1564(zself)->callingConvention;
		p23 = Parser_getArgumentList1548(zself);
		if((char)(p23 == ((Collection203 *)0)))
		{
			ASTExpression140 *t25;
			t25 = ((ASTExpression140 *)0);
			return t25;
		}
		d22->parameters = p23;
		returnTypes24 = (&S1674);
		if((char)(Parser_token1568(zself) == 76))
		{
			Parser_nextToken1569(zself);
			Parser_expect1566(zself, 68);
			returnTypes24 = Parser_getExpressionList1549(zself);
			Parser_expect1566(zself, 69);
		}
		d22->returnTypes = returnTypes24;
		e2 = ((ASTExpression140 *)d22);
	}
	break;
	case 47:
	{
		ASTFunctionReference148 *d26;
		ASTExpression140 *context27;
		Parser_nextToken1569(zself);
		d26 = MemoryPool_allocate1644(zself->pool);
		((Location45 *)d26)->line = Parser_line1573(zself);
		((ASTExpression140 *)d26)->code = 11;
		context27 = ((ASTExpression140 *)0);
		if((char)(Parser_token1568(zself) == 68))
		{
			Parser_nextToken1569(zself);
			context27 = Parser_getExpression1557(zself);
			Parser_expect1566(zself, 69);
		}
		d26->context = context27;
		d26->name = Parser_getName1563(zself);
		d26->types = Parser_getArgumentList1548(zself);
		e2 = ((ASTExpression140 *)d26);
	}
	break;
	case 58:
	{
		ASTArray145 *i28;
		Collection203 *arguments29;
		int token30;
		i28 = MemoryPool_allocate1636(pool1);
		((Location45 *)i28)->line = Parser_line1573(zself);
		((ASTExpression140 *)i28)->code = 18;
		Parser_nextToken1569(zself);
		arguments29 = (&S1674);
		token30 = Parser_token1568(zself);
		if((char)(token30 != 65))
		{
			arguments29 = Parser_getExpressionList1549(zself);
		}
		i28->arguments = arguments29;
		zself->isMacro = 1;
		e2 = ((ASTExpression140 *)i28);
	}
	break;
	default:
	{
		ASTInteger149 *n31;
		Parser_syntaxError1577(zself);
		n31 = MemoryPool_allocate1637(pool1);
		((Location45 *)n31)->line = Parser_line1573(zself);
		((ASTExpression140 *)n31)->code = 1;
		n31->integer = 0UL;
		e2 = ((ASTExpression140 *)n31);
	}
	}
	for(;;)
	{
		int op32;
		op32 = Parser_token1568(zself);
		switch( op32 )
		{
		case 64:
		{
			ASTCond153 *c33;
			if((char)(zcurrentPriority >= 6))
			{
				ASTExpression140 *t34;
				t34 = e2;
				return t34;
			}
			Parser_nextToken1569(zself);
			c33 = MemoryPool_allocate1645(pool1);
			((Location45 *)c33)->line = Parser_line1573(zself);
			((ASTExpression140 *)c33)->code = 13;
			c33->condition = e2;
			c33->arguments1 = Parser_getExpressionList1549(zself);
			Parser_expect1566(zself, 50);
			c33->arguments2 = Parser_getExpressionList1549(zself);
			e2 = ((ASTExpression140 *)c33);
		}
		break;
		case 61:
		{
			ASTBinary144 *b35;
			if((char)(zcurrentPriority >= 10))
			{
				ASTExpression140 *t36;
				t36 = e2;
				return t36;
			}
			Parser_nextToken1569(zself);
			b35 = MemoryPool_allocate1646(pool1);
			((Location45 *)b35)->line = Parser_line1573(zself);
			((ASTExpression140 *)b35)->code = 7;
			b35->argument1 = e2;
			b35->argument2 = Parser_getExpressionWitthPriority1558(zself, 10);
			e2 = ((ASTExpression140 *)b35);
		}
		break;
		case 62:
		{
			ASTBinary144 *b37;
			if((char)(zcurrentPriority >= 8))
			{
				ASTExpression140 *t38;
				t38 = e2;
				return t38;
			}
			Parser_nextToken1569(zself);
			b37 = MemoryPool_allocate1646(pool1);
			((Location45 *)b37)->line = Parser_line1573(zself);
			((ASTExpression140 *)b37)->code = 8;
			b37->argument1 = e2;
			b37->argument2 = Parser_getExpressionWitthPriority1558(zself, 8);
			e2 = ((ASTExpression140 *)b37);
		}
		break;
		case 67:
		{
			ASTBinary144 *d39;
			if((char)(zcurrentPriority >= 31))
			{
				ASTExpression140 *t40;
				t40 = e2;
				return t40;
			}
			d39 = MemoryPool_allocate1646(pool1);
			((Location45 *)d39)->line = Parser_line1573(zself);
			((ASTExpression140 *)d39)->code = 15;
			d39->argument1 = e2;
			Parser_nextToken1569(zself);
			d39->argument2 = Parser_getExpressionWitthPriority1558(zself, 33);
			e2 = ((ASTExpression140 *)d39);
		}
		break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 14:
		case 15:
		case 16:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		{
			void *name41;
			int leftPriority42;
			int rightPriority43;
			ASTContextCall142 *d44;
			void *t45;
			int t46;
			int t47;
			t45 = Parser_operatorParams1574(zself, op32, (&t46), (&t47));
			name41 = t45;
			leftPriority42 = t46;
			rightPriority43 = t47;
			if((char)(zcurrentPriority >= leftPriority42))
			{
				ASTExpression140 *t48;
				t48 = e2;
				return t48;
			}
			Parser_nextToken1569(zself);
			d44 = MemoryPool_allocate1641(pool1);
			((Location45 *)d44)->line = Parser_line1573(zself);
			((ASTExpression140 *)d44)->code = 6;
			((ASTFreeCall141 *)d44)->name = name41;
			((ASTFreeCall141 *)d44)->arguments = MemoryPool_new1605(pool1);
			d44->context = e2;
			((ASTFreeCall141 *)d44)->block = ((ASTBlockClosure154 *)0);
			Collection_add888(((ASTFreeCall141 *)d44)->arguments, Parser_getExpressionWitthPriority1558(zself, rightPriority43));
			e2 = ((ASTExpression140 *)d44);
		}
		break;
		case 28:
		case 29:
		{
			ASTContextCall142 *d49;
			if((char)(zcurrentPriority >= 2))
			{
				ASTExpression140 *t50;
				t50 = e2;
				return t50;
			}
			Parser_nextToken1569(zself);
			d49 = MemoryPool_allocate1641(pool1);
			((Location45 *)d49)->line = Parser_line1573(zself);
			((ASTExpression140 *)d49)->code = 6;
			d49->context = e2;
			((ASTFreeCall141 *)d49)->name = ((char)(op32 == 28)?(&identifiers1661)->cinc:(&identifiers1661)->cdec);
			((ASTFreeCall141 *)d49)->arguments = (&S1674);
			((ASTFreeCall141 *)d49)->block = ((ASTBlockClosure154 *)0);
			e2 = ((ASTExpression140 *)d49);
		}
		break;
		case 70:
		{
			ASTContextCall142 *d51;
			Collection203 *arguments52;
			if((char)(zcurrentPriority >= 33))
			{
				ASTExpression140 *t53;
				t53 = e2;
				return t53;
			}
			Parser_nextToken1569(zself);
			d51 = MemoryPool_allocate1641(pool1);
			((Location45 *)d51)->line = Parser_line1573(zself);
			((ASTExpression140 *)d51)->code = 6;
			d51->context = e2;
			((ASTFreeCall141 *)d51)->name = (&identifiers1661)->at;
			((ASTFreeCall141 *)d51)->block = ((ASTBlockClosure154 *)0);
			arguments52 = (&S1674);
			if((char)(Parser_token1568(zself) != 71))
			{
				arguments52 = Parser_getExpressionList1549(zself);
			}
			((ASTFreeCall141 *)d51)->arguments = arguments52;
			Parser_expect1566(zself, 71);
			e2 = ((ASTExpression140 *)d51);
		}
		break;
		case 75:
		{
			ASTOffset152 *d54;
			if((char)(zcurrentPriority >= 34))
			{
				ASTExpression140 *t55;
				t55 = e2;
				return t55;
			}
			Parser_nextToken1569(zself);
			d54 = MemoryPool_allocate1647(pool1);
			((Location45 *)d54)->line = Parser_line1573(zself);
			((ASTExpression140 *)d54)->code = 12;
			d54->type = e2;
			d54->name = Parser_getName1563(zself);
			e2 = ((ASTExpression140 *)d54);
		}
		break;
		case 2:
		{
			ASTContextCall142 *d56;
			ASTBlockClosure154 *block57;
			if((char)(zcurrentPriority >= 33))
			{
				ASTExpression140 *t58;
				t58 = e2;
				return t58;
			}
			d56 = MemoryPool_allocate1641(pool1);
			((Location45 *)d56)->line = Parser_line1573(zself);
			((ASTExpression140 *)d56)->code = 6;
			d56->context = e2;
			((ASTFreeCall141 *)d56)->name = Parser_identifier1571(zself);
			Parser_nextToken1569(zself);
			((ASTFreeCall141 *)d56)->arguments = Parser_getArgumentList1548(zself);
			block57 = ((ASTBlockClosure154 *)0);
			if((char)(Parser_token1568(zself) == 59))
			{
				block57 = Parser_getBlockClosure1554(zself);
			}
			((ASTFreeCall141 *)d56)->block = block57;
			e2 = ((ASTExpression140 *)d56);
		}
		break;
		default:
		{
			ASTExpression140 *t59;
			t59 = e2;
			return t59;
		}
		}
	}
}

static ASTFreeCall141 *Parser_getFreeCall1559(Parser182 *zself)
{
	ASTFreeCall141 *d1;
	ASTBlockClosure154 *block2;
	ASTFreeCall141 *t3;
	d1 = MemoryPool_allocate1626(zself->pool);
	((Location45 *)d1)->line = Parser_line1573(zself);
	((ASTExpression140 *)d1)->code = 5;
	d1->name = Parser_identifier1571(zself);
	Parser_nextToken1569(zself);
	d1->arguments = Parser_getArgumentList1548(zself);
	block2 = ((ASTBlockClosure154 *)0);
	if((char)(Parser_token1568(zself) == 59))
	{
		block2 = Parser_getBlockClosure1554(zself);
	}
	d1->block = block2;
	t3 = d1;
	return t3;
}

static ASTRule136 *Parser_getRule1560(Parser182 *zself)
{
	ASTRule136 *rule1;
	ASTRule136 *t2;
	rule1 = MemoryPool_allocate1620(zself->pool);
	((Location45 *)rule1)->line = Parser_line1573(zself);
	rule1->condition = Parser_getExpression1557(zself);
	rule1->block = Parser_getMiniBlock1556(zself);
	t2 = rule1;
	return t2;
}

static ASTChoice137 *Parser_getChoice1561(Parser182 *zself)
{
	ASTChoice137 *choice1;
	ASTChoice137 *t2;
	choice1 = MemoryPool_allocate1623(zself->pool);
	((Location45 *)choice1)->line = Parser_line1573(zself);
	choice1->values = Parser_getExpressionList1549(zself);
	choice1->block = Parser_getMiniBlock1556(zself);
	t2 = choice1;
	return t2;
}

static ASTId155 *Parser_getId1562(Parser182 *zself)
{
	ASTId155 *id1;
	ASTId155 *t2;
	id1 = MemoryPool_allocate1624(zself->pool);
	((Location45 *)id1)->line = Parser_line1573(zself);
	if(Parser_unexpected1576(zself, 2))
	{
		Parser_syntaxError1577(zself);
		id1->name = (&identifiers1661)->empty;
	}
	else
	{
		id1->name = Parser_identifier1571(zself);
		Parser_nextToken1569(zself);
	}
	t2 = id1;
	return t2;
}

static void *Parser_getName1563(Parser182 *zself)
{
	void *name1;
	void *t3;
	if(Parser_unexpected1576(zself, 2))
	{
		void *t2;
		t2 = (&identifiers1661)->empty;
		return t2;
	}
	name1 = Parser_identifier1571(zself);
	Parser_nextToken1569(zself);
	t3 = name1;
	return t3;
}

static DirectiveSet156 *Parser_getDirectives1564(Parser182 *zself)
{
	DirectiveSet156 *directives1;
	DirectiveSet156 *t5;
	if(((char)(Parser_token1568(zself) != 77) && (char)(Parser_token1568(zself) != 70)))
	{
		DirectiveSet156 *t2;
		t2 = zself->directives;
		return t2;
	}
	directives1 = Parser_cloneDirectives1578(zself);
	for(;;)
	{
		if((char)(Parser_token1568(zself) == 77))
		{
			Parser_applyDirective1580(zself, directives1);
		}
		else
		{
			if((char)(Parser_token1568(zself) == 70))
			{
				Parser_applyIfdef1581(zself, directives1);
			}
			else
			{
				goto L3;
			}
		}
	}
	L3: ;
	t5 = directives1;
	return t5;
}

static ASTInstruction123 *Parser_getTrailingConditional1565(Parser182 *zself, ASTInstruction123 *zinstruction)
{
	ASTIf134 *i1;
	ASTRule136 *rule2;
	Collection204 *then3;
	ASTInstruction123 *t5;
	if((char)(Parser_token1568(zself) != 48))
	{
		ASTInstruction123 *t4;
		t4 = zinstruction;
		return t4;
	}
	Parser_nextToken1569(zself);
	i1 = MemoryPool_allocate1619(zself->pool);
	((Location45 *)i1)->line = Parser_line1573(zself);
	((ASTInstruction123 *)i1)->code = 8;
	Collection_initialize1431((&i1->rules));
	i1->elseBlock = ((Collection204 *)0);
	rule2 = MemoryPool_allocate1620(zself->pool);
	((Location45 *)rule2)->line = Parser_line1573(zself);
	Collection_add1432((&i1->rules), rule2);
	then3 = MemoryPool_new1614(zself->pool);
	Collection_add1293(then3, zinstruction);
	rule2->block = then3;
	rule2->condition = Parser_getExpression1557(zself);
	t5 = ((ASTInstruction123 *)i1);
	return t5;
}

static char Parser_expect1566(Parser182 *zself, int zexpectedToken)
{
	char ok1;
	char t2;
	ok1 = (!Parser_unexpected1576(zself, zexpectedToken));
	if(ok1)
	{
		Parser_nextToken1569(zself);
	}
	t2 = ok1;
	return t2;
}

static void Parser_skipEmptyTokens1567(Parser182 *zself)
{
	for(;;)
	{
		int token3;
		token3 = Parser_token1568(zself);
		if((char)(token3 != 65))
		{
			goto L1;
		}
		Parser_nextToken1569(zself);
	}
	L1: ;
}

static int Parser_token1568(Parser182 *zself)
{
	int t1;
	t1 = (&zself->stream)->token;
	return t1;
}

static void Parser_nextToken1569(Parser182 *zself)
{
	TokenStream_nextToken1586((&zself->stream));
}

static unsigned char *Parser_string1570(Parser182 *zself)
{
	unsigned char *t1;
	t1 = (&zself->stream)->string;
	return t1;
}

static void *Parser_identifier1571(Parser182 *zself)
{
	void *t1;
	t1 = (&zself->stream)->symbol;
	return t1;
}

static unsigned long long Parser_integer1572(Parser182 *zself)
{
	unsigned long long t1;
	t1 = (&zself->stream)->integer;
	return t1;
}

static int Parser_line1573(Parser182 *zself)
{
	int t1;
	t1 = (&zself->stream)->line;
	return t1;
}

static void *Parser_operatorParams1574(Parser182 *zself, int zop, int *r1x, int *r2x)
{
	switch( zop )
	{
	case 9:
	{
		void *t1;
		t1 = (&identifiers1661)->mul;
		(*r1x) = 26;
		(*r2x) = 26;
		return t1;
	}
	break;
	case 10:
	{
		void *t2;
		t2 = (&identifiers1661)->div;
		(*r1x) = 26;
		(*r2x) = 26;
		return t2;
	}
	break;
	case 11:
	{
		void *t3;
		t3 = (&identifiers1661)->mod;
		(*r1x) = 26;
		(*r2x) = 26;
		return t3;
	}
	break;
	case 6:
	{
		void *t4;
		t4 = (&identifiers1661)->add;
		(*r1x) = 24;
		(*r2x) = 24;
		return t4;
	}
	break;
	case 7:
	{
		void *t5;
		t5 = (&identifiers1661)->sub;
		(*r1x) = 24;
		(*r2x) = 24;
		return t5;
	}
	break;
	case 8:
	{
		void *t6;
		t6 = (&identifiers1661)->dist;
		(*r1x) = 24;
		(*r2x) = 24;
		return t6;
	}
	break;
	case 12:
	{
		void *t7;
		t7 = (&identifiers1661)->shl;
		(*r1x) = 22;
		(*r2x) = 22;
		return t7;
	}
	break;
	case 13:
	{
		void *t8;
		t8 = (&identifiers1661)->shr;
		(*r1x) = 22;
		(*r2x) = 22;
		return t8;
	}
	break;
	case 14:
	{
		void *t9;
		t9 = (&identifiers1661)->logicalAnd;
		(*r1x) = 20;
		(*r2x) = 20;
		return t9;
	}
	break;
	case 16:
	{
		void *t10;
		t10 = (&identifiers1661)->logicalXor;
		(*r1x) = 18;
		(*r2x) = 18;
		return t10;
	}
	break;
	case 15:
	{
		void *t11;
		t11 = (&identifiers1661)->logicalOr;
		(*r1x) = 16;
		(*r2x) = 16;
		return t11;
	}
	break;
	case 32:
	{
		void *t12;
		t12 = (&identifiers1661)->le;
		(*r1x) = 14;
		(*r2x) = 14;
		return t12;
	}
	break;
	case 33:
	{
		void *t13;
		t13 = (&identifiers1661)->lt;
		(*r1x) = 14;
		(*r2x) = 14;
		return t13;
	}
	break;
	case 34:
	{
		void *t14;
		t14 = (&identifiers1661)->ge;
		(*r1x) = 14;
		(*r2x) = 14;
		return t14;
	}
	break;
	case 35:
	{
		void *t15;
		t15 = (&identifiers1661)->gt;
		(*r1x) = 14;
		(*r2x) = 14;
		return t15;
	}
	break;
	case 30:
	{
		void *t16;
		t16 = (&identifiers1661)->eq;
		(*r1x) = 12;
		(*r2x) = 12;
		return t16;
	}
	break;
	case 31:
	{
		void *t17;
		t17 = (&identifiers1661)->ne;
		(*r1x) = 12;
		(*r2x) = 12;
		return t17;
	}
	break;
	case 18:
	{
		void *t18;
		t18 = (&identifiers1661)->cadd;
		(*r1x) = 2;
		(*r2x) = 2;
		return t18;
	}
	break;
	case 19:
	{
		void *t19;
		t19 = (&identifiers1661)->csub;
		(*r1x) = 2;
		(*r2x) = 2;
		return t19;
	}
	break;
	case 20:
	{
		void *t20;
		t20 = (&identifiers1661)->cmul;
		(*r1x) = 2;
		(*r2x) = 2;
		return t20;
	}
	break;
	case 21:
	{
		void *t21;
		t21 = (&identifiers1661)->cdiv;
		(*r1x) = 2;
		(*r2x) = 2;
		return t21;
	}
	break;
	case 22:
	{
		void *t22;
		t22 = (&identifiers1661)->cmod;
		(*r1x) = 2;
		(*r2x) = 2;
		return t22;
	}
	break;
	case 23:
	{
		void *t23;
		t23 = (&identifiers1661)->cshl;
		(*r1x) = 2;
		(*r2x) = 2;
		return t23;
	}
	break;
	case 24:
	{
		void *t24;
		t24 = (&identifiers1661)->cshr;
		(*r1x) = 2;
		(*r2x) = 2;
		return t24;
	}
	break;
	case 25:
	{
		void *t25;
		t25 = (&identifiers1661)->cand;
		(*r1x) = 2;
		(*r2x) = 2;
		return t25;
	}
	break;
	case 26:
	{
		void *t26;
		t26 = (&identifiers1661)->cor;
		(*r1x) = 2;
		(*r2x) = 2;
		return t26;
	}
	break;
	default:
	{
		void *t27;
		t27 = (&identifiers1661)->cxor;
		(*r1x) = 2;
		(*r2x) = 2;
		return t27;
	}
	}
}

static void *Parser_prefixParams1575(Parser182 *zself, int zop, int *r1x)
{
	switch( zop )
	{
	case 6:
	{
		void *t1;
		t1 = (&identifiers1661)->pos;
		(*r1x) = 30;
		return t1;
	}
	break;
	case 7:
	{
		void *t2;
		t2 = (&identifiers1661)->neg;
		(*r1x) = 30;
		return t2;
	}
	break;
	default:
	{
		void *t3;
		t3 = (&identifiers1661)->logicalNot;
		(*r1x) = 30;
		return t3;
	}
	}
}

static char Parser_unexpected1576(Parser182 *zself, int zexpectedToken)
{
	StringBuffer2 sb11;
	StringBuffer2 sb22;
	char t4;
	if((char)(Parser_token1568(zself) == zexpectedToken))
	{
		char t3;
		t3 = 0;
		return t3;
	}
	StringBuffer_initialize270((&sb11));
	StringBuffer_initialize270((&sb22));
	StringBuffer__shl1591((&sb11), zexpectedToken);
	_add672(Parser_token1568(zself), (&sb22), Parser_integer1572(zself), Parser_string1570(zself), Parser_identifier1571(zself));
	Parser_reportError1592(zself, S1689, StringBuffer_string289((&sb11)), StringBuffer_string289((&sb22)));
	StringBuffer_release272((&sb22));
	StringBuffer_release272((&sb11));
	t4 = 1;
	return t4;
}

static void Parser_syntaxError1577(Parser182 *zself)
{
	StringBuffer2 sb1;
	StringBuffer_initialize270((&sb1));
	_add672(Parser_token1568(zself), (&sb1), Parser_integer1572(zself), Parser_string1570(zself), Parser_identifier1571(zself));
	Parser_reportError1598(zself, S1688, StringBuffer_string289((&sb1)));
	StringBuffer_release272((&sb1));
}

static DirectiveSet156 *Parser_cloneDirectives1578(Parser182 *zself)
{
	DirectiveSet156 *d1;
	DirectiveSet156 *t2;
	d1 = MemoryPool_allocate1597(zself->pool);
	DirectiveSet_initializeFrom1335(d1, zself->directives);
	t2 = d1;
	return t2;
}

static void Parser_applyCurrentDirective1579(Parser182 *zself)
{
	zself->directives = Parser_cloneDirectives1578(zself);
	Parser_applyDirective1580(zself, zself->directives);
}

static void Parser_applyDirective1580(Parser182 *zself, DirectiveSet156 *zdirectives)
{
	void *name1;
	Parser_nextToken1569(zself);
	name1 = Parser_getName1563(zself);
	if((char)(name1 == (&identifiers1661)->public))
	{
		zdirectives->visibility = ((unsigned char)0U);
	}
	else
	{
		if((char)(name1 == (&identifiers1661)->private))
		{
			zdirectives->visibility = ((unsigned char)1U);
		}
		else
		{
			if((char)(name1 == (&identifiers1661)->c))
			{
				zdirectives->namingConvention = ((unsigned char)1U);
			}
			else
			{
				if((char)(name1 == (&identifiers1661)->zstdcall))
				{
					zdirectives->callingConvention = ((unsigned char)1U);
				}
				else
				{
					if((char)(name1 == (&identifiers1661)->zcdecl))
					{
						zdirectives->callingConvention = ((unsigned char)2U);
					}
					else
					{
						if((char)(name1 == (&identifiers1661)->fast))
						{
							zdirectives->callingConvention = ((unsigned char)0U);
						}
						else
						{
							if((char)(name1 == (&identifiers1661)->entry))
							{
								zdirectives->entry = 1;
							}
							else
							{
								if((char)(name1 == (&identifiers1661)->mustcheck))
								{
									zdirectives->mustCheck = 1;
								}
								else
								{
									if((char)(name1 == (&identifiers1661)->ifdef))
									{
										Parser_readIfdef1582(zself, zdirectives, 0);
									}
									else
									{
										if((char)(name1 == (&identifiers1661)->ifndef))
										{
											Parser_readIfdef1582(zself, zdirectives, 1);
										}
										else
										{
											if((char)(name1 == (&identifiers1661)->ifeq))
											{
												Parser_readIfeq1583(zself, zdirectives, 0);
											}
											else
											{
												if((char)(name1 == (&identifiers1661)->ifne))
												{
													Parser_readIfeq1583(zself, zdirectives, 1);
												}
												else
												{
													Parser_syntaxError1577(zself);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

static char Parser_applyIfdef1581(Parser182 *zself, DirectiveSet156 *zdirectives)
{
	char invert1;
	void *name2;
	char t3;
	Parser_nextToken1569(zself);
	invert1 = 0;
	if((char)(Parser_token1568(zself) == 63))
	{
		Parser_nextToken1569(zself);
		invert1 = 1;
	}
	name2 = Parser_getName1563(zself);
	Parser_expect1566(zself, 71);
	zdirectives->skip = (char)(Dictionary_hasKey340(((Dictionary187 *)zself->defines), _string666(name2)) == invert1);
	t3 = 1;
	return t3;
}

static char Parser_readIfdef1582(Parser182 *zself, DirectiveSet156 *zdirectives, char zinvert)
{
	void *name1;
	char t2;
	Parser_expect1566(zself, 68);
	name1 = Parser_getName1563(zself);
	Parser_expect1566(zself, 69);
	zdirectives->skip = (char)(Dictionary_hasKey340(((Dictionary187 *)zself->defines), _string666(name1)) == zinvert);
	t2 = 1;
	return t2;
}

static void Parser_readIfeq1583(Parser182 *zself, DirectiveSet156 *zdirectives, char zinvert)
{
	void *name1;
	unsigned char *value2;
	unsigned char *define3;
	Parser_expect1566(zself, 68);
	name1 = Parser_getName1563(zself);
	Parser_expect1566(zself, 66);
	value2 = S2123;
	if((!Parser_unexpected1576(zself, 4)))
	{
		value2 = Parser_string1570(zself);
		Parser_nextToken1569(zself);
	}
	Parser_expect1566(zself, 69);
	define3 = Dictionary__at339(((Dictionary187 *)zself->defines), _string666(name1));
	if((char)(define3 == ((unsigned char *)0)))
	{
		Parser_reportError1601(zself, S1687);
	}
	else
	{
		zdirectives->skip = (char)(_isEqual327(define3, value2) == zinvert);
	}
}

static void TokenStream_initialize1584(TokenStream183 *zself, MemoryPool160 *zpool, unsigned char *zs, SimpleDictionary186 *zdefines, IdentifierDictionary19 *zidentifiers, unsigned char *zfile, ErrorReporter158 *zerrorReporter)
{
	size_t i1;
	zself->pool = zpool;
	zself->defines = zdefines;
	zself->identifiers = zidentifiers;
	zself->file = zfile;
	zself->errorReporter = zerrorReporter;
	zself->p = zs;
	zself->beginningOfLine = zs;
	zself->line = 1;
	zself->token = 1;
	zself->string = ((unsigned char *)0);
	zself->integer = 0UL;
	zself->id = ((unsigned char *)_allocateArray1075(((int )2049)));
	i1 = ((size_t)0x0000000000000000U);
	while((char)(((size_t )i1) < ((size_t )((size_t)0x000000000000001DU))))
	{
		Keyword200 *k2;
		IdentifierAssociation194 *slot3;
		k2 = (&A1681[i1]);
		slot3 = IdentifierDictionary_get469(zself->identifiers, k2->name);
		slot3->token = k2->token;
		(++i1);
	}
	TokenStream_nextToken1586(zself);
}

static void TokenStream_release1585(TokenStream183 *zself)
{
	_freeArray1087(((void *)zself->id), ((int )2049));
}

static void TokenStream_nextToken1586(TokenStream183 *zself)
{
	unsigned char *p1;
	p1 = zself->p;
	for(;;)
	{
		unsigned char c2;
		c2 = p1[((size_t)0x0000000000000000U)];
		(++p1);
		switch( c2 )
		{
		case ((unsigned char)0U):
		{
			zself->token = 1;
			return;
		}
		break;
		case ((unsigned char)13U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)10U)))
			{
				(++p1);
			}
			(++zself->line);
			zself->beginningOfLine = p1;
			zself->token = 65;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)10U):
		{
			(++zself->line);
			zself->beginningOfLine = p1;
			zself->token = 65;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)9U):
		case ((unsigned char)32U):
		{
			unsigned char c3;
			c3 = p1[((size_t)0x0000000000000000U)];
			while(((char)(c3 == ((unsigned char)32U)) || (char)(c3 == ((unsigned char)9U))))
			{
				(++p1);
				c3 = p1[((size_t)0x0000000000000000U)];
			}
		}
		break;
		case ((unsigned char)48U):
		case ((unsigned char)49U):
		case ((unsigned char)50U):
		case ((unsigned char)51U):
		case ((unsigned char)52U):
		case ((unsigned char)53U):
		case ((unsigned char)54U):
		case ((unsigned char)55U):
		case ((unsigned char)56U):
		case ((unsigned char)57U):
		{
			unsigned long long value4;
			unsigned char *endc5;
			unsigned long long t6;
			unsigned char *t7;
			t6 = _decimalToUnsigned64328((p1 - ((size_t)0x0000000000000001U)), (&t7));
			value4 = t6;
			endc5 = t7;
			if((char)(endc5 != (p1 - ((size_t)0x0000000000000001U))))
			{
				p1 = endc5;
			}
			zself->token = 3;
			zself->integer = value4;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)95U):
		case ((unsigned char)97U):
		case ((unsigned char)98U):
		case ((unsigned char)99U):
		case ((unsigned char)100U):
		case ((unsigned char)101U):
		case ((unsigned char)102U):
		case ((unsigned char)103U):
		case ((unsigned char)104U):
		case ((unsigned char)105U):
		case ((unsigned char)106U):
		case ((unsigned char)107U):
		case ((unsigned char)108U):
		case ((unsigned char)109U):
		case ((unsigned char)110U):
		case ((unsigned char)111U):
		case ((unsigned char)112U):
		case ((unsigned char)113U):
		case ((unsigned char)114U):
		case ((unsigned char)115U):
		case ((unsigned char)116U):
		case ((unsigned char)117U):
		case ((unsigned char)118U):
		case ((unsigned char)119U):
		case ((unsigned char)120U):
		case ((unsigned char)121U):
		case ((unsigned char)122U):
		case ((unsigned char)65U):
		case ((unsigned char)66U):
		case ((unsigned char)67U):
		case ((unsigned char)68U):
		case ((unsigned char)69U):
		case ((unsigned char)70U):
		case ((unsigned char)71U):
		case ((unsigned char)72U):
		case ((unsigned char)73U):
		case ((unsigned char)74U):
		case ((unsigned char)75U):
		case ((unsigned char)76U):
		case ((unsigned char)77U):
		case ((unsigned char)78U):
		case ((unsigned char)79U):
		case ((unsigned char)80U):
		case ((unsigned char)81U):
		case ((unsigned char)82U):
		case ((unsigned char)83U):
		case ((unsigned char)84U):
		case ((unsigned char)85U):
		case ((unsigned char)86U):
		case ((unsigned char)87U):
		case ((unsigned char)88U):
		case ((unsigned char)89U):
		case ((unsigned char)90U):
		{
			unsigned char *s8;
			size_t hash9;
			unsigned char d10;
			int len11;
			IdentifierAssociation194 *slot12;
			s8 = (p1 - ((size_t)0x0000000000000001U));
			hash9 = ((size_t)0x00000000A5A5A5A5U);
			hash9 = ((hash9 >> ((unsigned char)1U)) + (_hash330(c2) << ((unsigned char)24U)));
			d10 = p1[((size_t)0x0000000000000000U)];
			while(_isIdentifierChar335(d10))
			{
				hash9 = ((hash9 >> ((unsigned char)1U)) + (_hash330(d10) << ((unsigned char)24U)));
				(++p1);
				d10 = p1[((size_t)0x0000000000000000U)];
			}
			len11 = __dist326(p1, s8);
			slot12 = IdentifierDictionary_lookup470(zself->identifiers, s8, len11, hash9);
			zself->token = slot12->token;
			zself->symbol = slot12->name;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)34U):
		{
			unsigned char (buf13)[2049];
			unsigned char *q14;
			unsigned char *limit15;
			size_t len16;
			unsigned char *persistentBuf17;
			q14 = buf13;
			limit15 = (buf13 + 2048);
			for(;;)
			{
				unsigned char c20;
				c20 = p1[((size_t)0x0000000000000000U)];
				(++p1);
				if((char)(c20 == ((unsigned char)34U)))
				{
					goto L18;
				}
				if(_isNul332(c20))
				{
					TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1732);
					return;
				}
				if((char)(c20 == ((unsigned char)10U)))
				{
					TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1731);
					return;
				}
				if((char)(q14 == limit15))
				{
					TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1730);
					return;
				}
				if((char)(c20 == ((unsigned char)92U)))
				{
					c20 = p1[((size_t)0x0000000000000000U)];
					(++p1);
					if(_isNul332(c20))
					{
						TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1732);
						return;
					}
					switch( c20 )
					{
					case ((unsigned char)40U):
					{
						unsigned char *s21;
						int n22;
						unsigned char *value23;
						unsigned char *v24;
						s21 = zself->id;
						n22 = 0;
						for(;;)
						{
							c20 = p1[((size_t)0x0000000000000000U)];
							(++p1);
							if((char)(c20 == ((unsigned char)0U)))
							{
								TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1732);
								return;
							}
							else
							{
								if((char)(c20 == ((unsigned char)10U)))
								{
									TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1731);
									return;
								}
								else
								{
									if((char)(c20 == ((unsigned char)41U)))
									{
										goto L25;
									}
								}
							}
							if((char)(n22 == 2048))
							{
								TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1730);
								return;
							}
							s21[((size_t)0x0000000000000000U)] = c20;
							(++s21);
						}
						L25: ;
						s21[((size_t)0x0000000000000000U)] = ((unsigned char)0U);
						value23 = Dictionary__at339(((Dictionary187 *)zself->defines), zself->id);
						if((char)(value23 == ((unsigned char *)0)))
						{
							value23 = S2123;
						}
						v24 = value23;
						for(;;)
						{
							unsigned char c29;
							c29 = v24[((size_t)0x0000000000000000U)];
							(++v24);
							if((char)(c29 == ((unsigned char)0U)))
							{
								goto L27;
							}
							if((char)(q14 == limit15))
							{
								TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1730);
								return;
							}
							q14[((size_t)0x0000000000000000U)] = c29;
							(++q14);
						}
						L27: ;
					}
					break;
					case ((unsigned char)97U):
					{
						q14[((size_t)0x0000000000000000U)] = ((unsigned char)7U);
						(++q14);
					}
					break;
					case ((unsigned char)98U):
					{
						q14[((size_t)0x0000000000000000U)] = ((unsigned char)8U);
						(++q14);
					}
					break;
					case ((unsigned char)102U):
					{
						q14[((size_t)0x0000000000000000U)] = ((unsigned char)12U);
						(++q14);
					}
					break;
					case ((unsigned char)110U):
					{
						q14[((size_t)0x0000000000000000U)] = ((unsigned char)10U);
						(++q14);
					}
					break;
					case ((unsigned char)114U):
					{
						q14[((size_t)0x0000000000000000U)] = ((unsigned char)13U);
						(++q14);
					}
					break;
					case ((unsigned char)116U):
					{
						q14[((size_t)0x0000000000000000U)] = ((unsigned char)9U);
						(++q14);
					}
					break;
					case ((unsigned char)118U):
					{
						q14[((size_t)0x0000000000000000U)] = ((unsigned char)11U);
						(++q14);
					}
					break;
					default:
					{
						q14[((size_t)0x0000000000000000U)] = c20;
						(++q14);
					}
					}
				}
				else
				{
					q14[((size_t)0x0000000000000000U)] = c20;
					(++q14);
				}
			}
			L18: ;
			q14[((size_t)0x0000000000000000U)] = ((unsigned char)0U);
			(++q14);
			len16 = ((q14 - buf13) * ((size_t)0x0000000000000001U));
			persistentBuf17 = ((unsigned char *)MemoryPool_allocateBytes297(zself->pool, len16));
			_copyBytes259(((void *)persistentBuf17), ((void *)buf13), len16);
			zself->string = persistentBuf17;
			zself->token = 4;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)36U):
		{
			unsigned char c30;
			c30 = p1[((size_t)0x0000000000000000U)];
			(++p1);
			if(_isNul332(c30))
			{
				TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000002U)), S1729);
				return;
			}
			zself->integer = ((unsigned long long )c30);
			zself->token = 3;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)44U):
		{
			zself->token = 66;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)58U):
		{
			zself->token = 67;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)43U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)43U)))
			{
				zself->token = 28;
				(++p1);
			}
			else
			{
				if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
				{
					zself->token = 18;
					(++p1);
				}
				else
				{
					zself->token = 6;
				}
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)45U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)62U)))
			{
				zself->token = 76;
				(++p1);
			}
			else
			{
				if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)45U)))
				{
					zself->token = 29;
					(++p1);
				}
				else
				{
					if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
					{
						zself->token = 19;
						(++p1);
					}
					else
					{
						zself->token = 7;
					}
				}
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)62U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
			{
				zself->token = 34;
				(++p1);
			}
			else
			{
				if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)62U)))
				{
					(++p1);
					if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
					{
						zself->token = 24;
						(++p1);
					}
					else
					{
						zself->token = 13;
					}
				}
				else
				{
					zself->token = 35;
				}
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)60U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
			{
				zself->token = 32;
				(++p1);
			}
			else
			{
				if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)62U)))
				{
					zself->token = 31;
					(++p1);
				}
				else
				{
					if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)60U)))
					{
						(++p1);
						if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
						{
							zself->token = 23;
							(++p1);
						}
						else
						{
							zself->token = 12;
						}
					}
					else
					{
						zself->token = 33;
					}
				}
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)61U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
			{
				zself->token = 30;
				(++p1);
			}
			else
			{
				zself->token = 17;
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)42U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
			{
				zself->token = 20;
				(++p1);
			}
			else
			{
				zself->token = 9;
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)47U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)47U)))
			{
				unsigned char c31;
				(++p1);
				c31 = p1[((size_t)0x0000000000000000U)];
				while((((char)(c31 != ((unsigned char)0U)) && (char)(c31 != ((unsigned char)13U))) && (char)(c31 != ((unsigned char)10U))))
				{
					(++p1);
					c31 = p1[((size_t)0x0000000000000000U)];
				}
			}
			else
			{
				if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)42U)))
				{
					unsigned char c32;
					(++p1);
					c32 = p1[((size_t)0x0000000000000000U)];
					for(;;)
					{
						if(((char)(c32 == ((unsigned char)42U)) && (char)(p1[((size_t)0x0000000000000001U)] == ((unsigned char)47U))))
						{
							(p1 += ((size_t)0x0000000000000002U));
							goto L33;
						}
						else
						{
							if(_isNul332(c32))
							{
								goto L33;
							}
							else
							{
								if((char)(c32 == ((unsigned char)13U)))
								{
									(++p1);
									c32 = p1[((size_t)0x0000000000000000U)];
									if((char)(c32 == ((unsigned char)10U)))
									{
										(++p1);
										c32 = p1[((size_t)0x0000000000000000U)];
									}
									(++zself->line);
									zself->beginningOfLine = p1;
								}
								else
								{
									if((char)(c32 == ((unsigned char)10U)))
									{
										(++p1);
										c32 = p1[((size_t)0x0000000000000000U)];
										(++zself->line);
										zself->beginningOfLine = p1;
									}
									else
									{
										(++p1);
										c32 = p1[((size_t)0x0000000000000000U)];
									}
								}
							}
						}
					}
					L33: ;
				}
				else
				{
					if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
					{
						zself->token = 21;
						(++p1);
						zself->p = p1;
						return;
					}
					else
					{
						zself->token = 10;
						zself->p = p1;
						return;
					}
				}
			}
		}
		break;
		case ((unsigned char)37U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
			{
				zself->token = 22;
				(++p1);
			}
			else
			{
				zself->token = 11;
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)40U):
		{
			zself->token = 68;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)41U):
		{
			zself->token = 69;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)91U):
		{
			zself->token = 70;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)93U):
		{
			zself->token = 71;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)123U):
		{
			zself->token = 72;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)125U):
		{
			zself->token = 73;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)46U):
		{
			if(((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)46U)) && (char)(p1[((size_t)0x0000000000000001U)] == ((unsigned char)46U))))
			{
				zself->token = 74;
				(p1 += ((size_t)0x0000000000000002U));
			}
			else
			{
				if(_isIdentifierFirstChar334(p1[((size_t)0x0000000000000000U)]))
				{
					zself->token = 77;
				}
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)38U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
			{
				zself->token = 25;
				(++p1);
			}
			else
			{
				zself->token = 14;
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)124U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
			{
				zself->token = 26;
				(++p1);
			}
			else
			{
				zself->token = 15;
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)94U):
		{
			if((char)(p1[((size_t)0x0000000000000000U)] == ((unsigned char)61U)))
			{
				zself->token = 27;
				(++p1);
			}
			else
			{
				zself->token = 16;
			}
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)64U):
		{
			zself->token = 75;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)39U):
		{
			unsigned char *s35;
			size_t hash36;
			unsigned char d37;
			int len38;
			IdentifierAssociation194 *slot39;
			s35 = p1;
			hash36 = ((size_t)0x00000000A5A5A5A5U);
			d37 = p1[((size_t)0x0000000000000000U)];
			while(_isIdentifierChar335(d37))
			{
				hash36 = ((hash36 >> ((unsigned char)1U)) + (_hash330(d37) << ((unsigned char)24U)));
				(++p1);
				d37 = p1[((size_t)0x0000000000000000U)];
			}
			len38 = __dist326(p1, s35);
			slot39 = IdentifierDictionary_lookup470(zself->identifiers, s35, len38, hash36);
			zself->token = 5;
			zself->symbol = slot39->name;
			zself->p = p1;
			return;
		}
		break;
		case ((unsigned char)126U):
		{
			zself->token = 8;
			zself->p = p1;
			return;
		}
		break;
		default:
		{
			zself->integer = ((unsigned long long )p1[((size_t)0xFFFFFFFFFFFFFFFFU)]);
			TokenStream_error1587(zself, (p1 - ((size_t)0x0000000000000001U)), S1727);
			return;
		}
		}
	}
}

static void TokenStream_error1587(TokenStream183 *zself, unsigned char *zp, unsigned char *zmsg)
{
	zself->p = zp;
	zself->token = 0;
	ErrorReporter_reportError892(zself->errorReporter, zself->file, zself->line, ((unsigned char *)zmsg));
}

static ASTModule112 *MemoryPool_new1588(MemoryPool160 *zself, unsigned char *v1x)
{
	ASTModule112 *obj1;
	ASTModule112 *t2;
	obj1 = MemoryPool_allocate1589(zself);
	ASTModule_initialize1590(obj1, v1x);
	t2 = obj1;
	return t2;
}

static ASTModule112 *MemoryPool_allocate1589(MemoryPool160 *zself)
{
	ASTModule112 *t1;
	t1 = ((ASTModule112 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static void ASTModule_initialize1590(ASTModule112 *zself, unsigned char *zfilename)
{
	((ASTElement109 *)zself)->code = 0;
	Collection_initialize1360((&((ASTNode110 *)zself)->children));
	zself->filename = zfilename;
}

static StringBuffer2 *StringBuffer__shl1591(StringBuffer2 *zself, int zobj)
{
	StringBuffer2 *t1;
	_addToStringBuffer673(zobj, zself);
	t1 = zself;
	return t1;
}

static void Parser_reportError1592(Parser182 *zself, unsigned char *zfmt, unsigned char *v2x, unsigned char *v3x)
{
	if((char)(Parser_token1568(zself) != 0))
	{
		(&zself->stream)->token = 0;
		ErrorReporter_reportError1593(zself->errorReporter, zself->module->filename, (&zself->stream)->line, ((unsigned char *)zfmt), v2x, v3x);
	}
}

static void ErrorReporter_reportError1593(ErrorReporter158 *zself, unsigned char *zfile, int zline, unsigned char *zfmt, unsigned char *v4x, unsigned char *v5x)
{
	StringBuffer2 s1;
	StringBuffer_initialize270((&s1));
	if((char)(zfile != ((unsigned char *)0)))
	{
		StringBuffer__shl367((&s1), zfile);
		StringBuffer_addString279((&s1), S1957);
		StringBuffer__shl858((&s1), zline);
		StringBuffer_addString279((&s1), S1956);
	}
	StringBuffer_addFormat1594((&s1), zfmt, v4x, v5x);
	_output379(StringBuffer_string289((&s1)));
	StringBuffer_release272((&s1));
}

static void StringBuffer_addFormat1594(StringBuffer2 *zself, unsigned char *zs, unsigned char *v2x, unsigned char *v3x)
{
	unsigned char *p1;
	p1 = StringBuffer_addSegment275(zself, zs);
	{
		StringBuffer__shl367(zself, v2x);
		p1 = StringBuffer_addSegment275(zself, p1);
		StringBuffer__shl367(zself, v3x);
		p1 = StringBuffer_addSegment275(zself, p1);
	}
}

static Module7 *MemoryPool_new1595(MemoryPool160 *zself, Program5 *v1x, unsigned char *v2x, Module7 *v3x, ImportPath10 *v4x)
{
	Module7 *obj1;
	Module7 *t2;
	obj1 = MemoryPool_allocate1596(zself);
	Module_initialize450(obj1, v1x, v2x, ((Scope8 *)v3x), v4x);
	t2 = obj1;
	return t2;
}

static Module7 *MemoryPool_allocate1596(MemoryPool160 *zself)
{
	Module7 *t1;
	t1 = ((Module7 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000034U)));
	return t1;
}

static DirectiveSet156 *MemoryPool_allocate1597(MemoryPool160 *zself)
{
	DirectiveSet156 *t1;
	t1 = ((DirectiveSet156 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000006U)));
	return t1;
}

static void Parser_reportError1598(Parser182 *zself, unsigned char *zfmt, unsigned char *v2x)
{
	if((char)(Parser_token1568(zself) != 0))
	{
		(&zself->stream)->token = 0;
		ErrorReporter_reportError1531(zself->errorReporter, zself->module->filename, (&zself->stream)->line, ((unsigned char *)zfmt), v2x);
	}
}

static ASTSymbol121 *MemoryPool_allocate1599(MemoryPool160 *zself)
{
	ASTSymbol121 *t1;
	t1 = ((ASTSymbol121 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static ASTFunction115 *MemoryPool_allocate1600(MemoryPool160 *zself)
{
	ASTFunction115 *t1;
	t1 = ((ASTFunction115 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000024U)));
	return t1;
}

static void Parser_reportError1601(Parser182 *zself, unsigned char *zfmt)
{
	if((char)(Parser_token1568(zself) != 0))
	{
		(&zself->stream)->token = 0;
		ErrorReporter_reportError892(zself->errorReporter, zself->module->filename, (&zself->stream)->line, ((unsigned char *)zfmt));
	}
}

static Collection202 *MemoryPool_new1602(MemoryPool160 *zself)
{
	Collection202 *obj1;
	Collection202 *t2;
	obj1 = MemoryPool_allocate1603(zself);
	Collection_initialize884(obj1);
	t2 = obj1;
	return t2;
}

static Collection202 *MemoryPool_allocate1603(MemoryPool160 *zself)
{
	Collection202 *t1;
	t1 = ((Collection202 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static ASTParameter120 *MemoryPool_allocate1604(MemoryPool160 *zself)
{
	ASTParameter120 *t1;
	t1 = ((ASTParameter120 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static Collection203 *MemoryPool_new1605(MemoryPool160 *zself)
{
	Collection203 *obj1;
	Collection203 *t2;
	obj1 = MemoryPool_allocate1606(zself);
	Collection_initialize887(obj1);
	t2 = obj1;
	return t2;
}

static Collection203 *MemoryPool_allocate1606(MemoryPool160 *zself)
{
	Collection203 *t1;
	t1 = ((Collection203 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static ASTAlias117 *MemoryPool_allocate1607(MemoryPool160 *zself)
{
	ASTAlias117 *t1;
	t1 = ((ASTAlias117 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static ASTGlobalVariable114 *MemoryPool_allocate1608(MemoryPool160 *zself)
{
	ASTGlobalVariable114 *t1;
	t1 = ((ASTGlobalVariable114 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static ASTType118 *MemoryPool_allocate1609(MemoryPool160 *zself)
{
	ASTType118 *t1;
	t1 = ((ASTType118 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000028U)));
	return t1;
}

static ASTExtension119 *MemoryPool_allocate1610(MemoryPool160 *zself)
{
	ASTExtension119 *t1;
	t1 = ((ASTExtension119 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static ASTExternFunction116 *MemoryPool_allocate1611(MemoryPool160 *zself)
{
	ASTExternFunction116 *t1;
	t1 = ((ASTExternFunction116 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static ASTImport113 *MemoryPool_allocate1612(MemoryPool160 *zself)
{
	ASTImport113 *t1;
	t1 = ((ASTImport113 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static ASTAttribute122 *MemoryPool_allocate1613(MemoryPool160 *zself)
{
	ASTAttribute122 *t1;
	t1 = ((ASTAttribute122 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static Collection204 *MemoryPool_new1614(MemoryPool160 *zself)
{
	Collection204 *obj1;
	Collection204 *t2;
	obj1 = MemoryPool_allocate1615(zself);
	Collection_initialize1292(obj1);
	t2 = obj1;
	return t2;
}

static Collection204 *MemoryPool_allocate1615(MemoryPool160 *zself)
{
	Collection204 *t1;
	t1 = ((Collection204 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static ASTDefer139 *MemoryPool_allocate1616(MemoryPool160 *zself)
{
	ASTDefer139 *t1;
	t1 = ((ASTDefer139 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTBegin138 *MemoryPool_allocate1617(MemoryPool160 *zself)
{
	ASTBegin138 *t1;
	t1 = ((ASTBegin138 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTReturn129 *MemoryPool_allocate1618(MemoryPool160 *zself)
{
	ASTReturn129 *t1;
	t1 = ((ASTReturn129 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTIf134 *MemoryPool_allocate1619(MemoryPool160 *zself)
{
	ASTIf134 *t1;
	t1 = ((ASTIf134 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static ASTRule136 *MemoryPool_allocate1620(MemoryPool160 *zself)
{
	ASTRule136 *t1;
	t1 = ((ASTRule136 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTWhile131 *MemoryPool_allocate1621(MemoryPool160 *zself)
{
	ASTWhile131 *t1;
	t1 = ((ASTWhile131 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static ASTSwitch132 *MemoryPool_allocate1622(MemoryPool160 *zself)
{
	ASTSwitch132 *t1;
	t1 = ((ASTSwitch132 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000020U)));
	return t1;
}

static ASTChoice137 *MemoryPool_allocate1623(MemoryPool160 *zself)
{
	ASTChoice137 *t1;
	t1 = ((ASTChoice137 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTId155 *MemoryPool_allocate1624(MemoryPool160 *zself)
{
	ASTId155 *t1;
	t1 = ((ASTId155 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static ASTLocalVariable127 *MemoryPool_allocate1625(MemoryPool160 *zself)
{
	ASTLocalVariable127 *t1;
	t1 = ((ASTLocalVariable127 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static ASTFreeCall141 *MemoryPool_allocate1626(MemoryPool160 *zself)
{
	ASTFreeCall141 *t1;
	t1 = ((ASTFreeCall141 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static ASTBlockClosure154 *MemoryPool_allocate1627(MemoryPool160 *zself)
{
	ASTBlockClosure154 *t1;
	t1 = ((ASTBlockClosure154 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000008U)));
	return t1;
}

static Collection244 *MemoryPool_new1628(MemoryPool160 *zself)
{
	Collection244 *obj1;
	Collection244 *t2;
	obj1 = MemoryPool_allocate1629(zself);
	Collection_initialize1313(obj1);
	t2 = obj1;
	return t2;
}

static Collection244 *MemoryPool_allocate1629(MemoryPool160 *zself)
{
	Collection244 *t1;
	t1 = ((Collection244 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static ASTLocalVariables126 *MemoryPool_allocate1630(MemoryPool160 *zself)
{
	ASTLocalVariables126 *t1;
	t1 = ((ASTLocalVariables126 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static ASTLocalAlias128 *MemoryPool_allocate1631(MemoryPool160 *zself)
{
	ASTLocalAlias128 *t1;
	t1 = ((ASTLocalAlias128 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static ASTBreak130 *MemoryPool_allocate1632(MemoryPool160 *zself)
{
	ASTBreak130 *t1;
	t1 = ((ASTBreak130 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTAssign125 *MemoryPool_allocate1633(MemoryPool160 *zself)
{
	ASTAssign125 *t1;
	t1 = ((ASTAssign125 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static ASTEvaluate124 *MemoryPool_allocate1634(MemoryPool160 *zself)
{
	ASTEvaluate124 *t1;
	t1 = ((ASTEvaluate124 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTArrayType147 *MemoryPool_allocate1635(MemoryPool160 *zself)
{
	ASTArrayType147 *t1;
	t1 = ((ASTArrayType147 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static ASTArray145 *MemoryPool_allocate1636(MemoryPool160 *zself)
{
	ASTArray145 *t1;
	t1 = ((ASTArray145 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTInteger149 *MemoryPool_allocate1637(MemoryPool160 *zself)
{
	ASTInteger149 *t1;
	t1 = ((ASTInteger149 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static ASTString150 *MemoryPool_allocate1638(MemoryPool160 *zself)
{
	ASTString150 *t1;
	t1 = ((ASTString150 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTSymbolName151 *MemoryPool_allocate1639(MemoryPool160 *zself)
{
	ASTSymbolName151 *t1;
	t1 = ((ASTSymbolName151 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTUnary143 *MemoryPool_allocate1640(MemoryPool160 *zself)
{
	ASTUnary143 *t1;
	t1 = ((ASTUnary143 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000010U)));
	return t1;
}

static ASTContextCall142 *MemoryPool_allocate1641(MemoryPool160 *zself)
{
	ASTContextCall142 *t1;
	t1 = ((ASTContextCall142 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000001CU)));
	return t1;
}

static ASTExpression140 *MemoryPool_allocate1642(MemoryPool160 *zself)
{
	ASTExpression140 *t1;
	t1 = ((ASTExpression140 *)MemoryPool_allocateBytes297(zself, ((size_t)0x000000000000000CU)));
	return t1;
}

static ASTFunctionType146 *MemoryPool_allocate1643(MemoryPool160 *zself)
{
	ASTFunctionType146 *t1;
	t1 = ((ASTFunctionType146 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static ASTFunctionReference148 *MemoryPool_allocate1644(MemoryPool160 *zself)
{
	ASTFunctionReference148 *t1;
	t1 = ((ASTFunctionReference148 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static ASTCond153 *MemoryPool_allocate1645(MemoryPool160 *zself)
{
	ASTCond153 *t1;
	t1 = ((ASTCond153 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000018U)));
	return t1;
}

static ASTBinary144 *MemoryPool_allocate1646(MemoryPool160 *zself)
{
	ASTBinary144 *t1;
	t1 = ((ASTBinary144 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static ASTOffset152 *MemoryPool_allocate1647(MemoryPool160 *zself)
{
	ASTOffset152 *t1;
	t1 = ((ASTOffset152 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000014U)));
	return t1;
}

static void SimpleError_onDelete1648(SimpleError164 *zself)
{
	_delete312(zself->message);
	_free1653(((void *)zself));
}

static void SimpleError_addMessageTo1649(SimpleError164 *zself, StringBuffer2 *zsb)
{
	StringBuffer__shl367(zsb, zself->message);
}

static SimpleError164 *_new1650(ErrorCode161 *zcode, unsigned char *zmessage, unsigned char *v2x)
{
	SimpleError164 *err1;
	SimpleError164 *t2;
	err1 = _allocate1651();
	SimpleError_initialize1652(err1, zcode, zmessage, v2x);
	t2 = err1;
	return t2;
}

static SimpleError164 *_allocate1651()
{
	SimpleError164 *t1;
	t1 = ((SimpleError164 *)_allocateBytes257(((size_t)0x000000000000000CU)));
	return t1;
}

static void SimpleError_initialize1652(SimpleError164 *zself, ErrorCode161 *zcode, unsigned char *zmessage, unsigned char *v3x)
{
	StringBuffer2 buf1;
	((Error162 *)zself)->class = (&S1670);
	((Error162 *)zself)->code = zcode;
	StringBuffer_initialize270((&buf1));
	StringBuffer_printFormat1654((&buf1), zmessage, v3x);
	zself->message = StringBuffer_toString288((&buf1));
	StringBuffer_release272((&buf1));
}

static void _free1653(void *zp)
{
	size_t n1;
	n1 = ((size_t)0x000000000000000CU);
	_freeBytes258(zp, n1);
}

static void StringBuffer_printFormat1654(StringBuffer2 *zself, unsigned char *zs, unsigned char *v2x)
{
	StringBuffer_removeAll286(zself);
	StringBuffer_addFormat1532(zself, zs, v2x);
}

static ArrayType102 *MemoryPool_new1655(MemoryPool160 *zself, Type98 *v1x, size_t v2x, Type98 *v3x)
{
	ArrayType102 *obj1;
	ArrayType102 *t2;
	obj1 = MemoryPool_allocate1656(zself);
	ArrayType_initialize582(obj1, v1x, v2x, v3x);
	t2 = obj1;
	return t2;
}

static ArrayType102 *MemoryPool_allocate1656(MemoryPool160 *zself)
{
	ArrayType102 *t1;
	t1 = ((ArrayType102 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000054U)));
	return t1;
}

static char Association_notEmpty1657(Association197 *zself)
{
	char t1;
	t1 = (!Association_isEmpty661(zself));
	return t1;
}

static MetaType99 *MemoryPool_new1658(MemoryPool160 *zself, Type98 *v1x)
{
	MetaType99 *obj1;
	MetaType99 *t2;
	obj1 = MemoryPool_allocate1659(zself);
	MetaType_initialize709(obj1, v1x);
	t2 = obj1;
	return t2;
}

static MetaType99 *MemoryPool_allocate1659(MemoryPool160 *zself)
{
	MetaType99 *t1;
	t1 = ((MetaType99 *)MemoryPool_allocateBytes297(zself, ((size_t)0x0000000000000050U)));
	return t1;
}

static PointerType101 *MemoryPool_new1660(MemoryPool160 *zself, Scope8 *v1x, Type98 *v2x, Type98 *v3x, void* v4x)
{
	PointerType101 *obj1;
	PointerType101 *t2;
	obj1 = MemoryPool_allocate1369(zself);
	PointerType_initialize713(obj1, v1x, v2x, v3x, ((void *)v4x));
	t2 = obj1;
	return t2;
}

