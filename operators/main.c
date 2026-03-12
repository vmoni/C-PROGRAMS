#include <stdio.h>

int main() {

    printf("=== Operator Precedence and Associativity Demonstration ===\n\n");

    // 1️⃣ Multiplicative and Additive Operators
    int a = 100, b = 10, c = 5;
    int result1 = a / b * c;       // * and / have same precedence, Left → Right
    int result2 = a / (b * c);     // Parentheses change order
    printf("1. (100 / 10 * 5) = %d  [Left to Right]\n", result1);
    printf("2. (100 / (10 * 5)) = %d  [Parentheses override]\n\n", result2);

    // 2️⃣ Precedence between + and *
    int result3 = 10 + 20 * 5;     // * has higher precedence
    printf("3. (10 + 20 * 5) = %d  [* evaluated first]\n\n", result3);

    // 3️⃣ Associativity of = (Right → Left)
    int x, y, z;
    x = y = z = 5;  // Right to Left evaluation
    printf("4. (x = y = z = 5) to x = %d, y = %d, z = %d  [Right to Left]\n\n", x, y, z);

    // 4️⃣ Relational and Logical operators
    int p = 5, q = 10, r = 15;
    int result4 = p < q && q < r;  // '<' has higher precedence than '&&'
    printf("5. (5 < 10 && 10 < 15) = %d  [Relational before Logical]\n\n", result4);

    // 5️⃣ Bitwise Operators
    int bitResult = 12 & 6 | 3;    // & and | have same precedence group → Left → Right
    printf("6. (12 & 6 | 3) = %d  [Bitwise evaluated Left to Right]\n\n", bitResult);

    // 6️⃣ Conditional (Ternary) Operator
    int max = (a > b) ? a : b;     // ? : has Right → Left associativity
    printf("7. (a > b ? a : b) = %d  [Ternary Operator, Right to Left]\n\n", max);

    // 7️⃣ Comma Operator (Lowest precedence, Left → Right)
    int val;
    val = (printf("8. Inside comma operator → "), 50 + 25); // Left → Right
    printf("\n   Final value after comma operator = %d\n\n", val);

    // 8️⃣ Unary Operator Precedence
    int i = 5;
    int res = ++i * 10;            // ++ has higher precedence than *
    printf("9. (++i * 10) = %d  [Unary before Multiplicative]\n\n", res);

    printf("=== End of Demonstration ===\n");

    return 0;
}
