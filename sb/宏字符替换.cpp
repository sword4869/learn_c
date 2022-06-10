/**
 * ##是一种分隔连接方式，它的作用是先分隔，然后进行强制连接
 * 所以预处理器会把`name##_##type##_type`解释成4段：“name”、“_”、“type”以及“_type”，name和type会被替换，而_type不会被替换
 */ 

#define DECLARE(name, type) type name##_##type##_type