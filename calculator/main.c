#include <stdio.h>
#include <string.h>

#define STRING_MAX_LEN 20

typedef enum {
    INTEGER,
    FLOAT,
    STRING
} DataType;

typedef union {
    int intValue;
    float floatValue;
    char stringValue[STRING_MAX_LEN];
} DataUnion;

typedef struct {
    DataType type;
    DataUnion data;
} Variant;

void printVariant(Variant var) {
    switch (var.type) {
        case INTEGER:
            printf("Integer: %d\n", var.data.intValue);
            break;
        case FLOAT:
            printf("Float: %f\n", var.data.floatValue);
            break;
        case STRING:
            printf("String: %s\n", var.data.stringValue);
            break;
        default:
            printf("Unknown type\n");
    }
}

int main() {
    Variant var;

    // Store an integer
    var.type = INTEGER;
    var.data.intValue = 42;
    printVariant(var);

    // Store a float
    var.type = FLOAT;
    var.data.floatValue = 3.14;
    printVariant(var);

    // Store a string
    var.type = STRING;
    strncpy(var.data.stringValue, "Hello, World!", STRING_MAX_LEN - 1);
    var.data.stringValue[STRING_MAX_LEN - 1] = '\0'; // Ensure null-termination
    printVariant(var);

    return 0;
}
