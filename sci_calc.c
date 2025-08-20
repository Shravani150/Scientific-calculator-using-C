#include<stdio.h>
#include<math.h>

// multiplication
void multi(int n){
    for(int i=1;i<11;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}

// factorial
int fact(int m){
    if(m==0){
        return 1;
    }
    else if (m==1||m==2){
        return m;
    }
    else{
        return m*fact(m-1);
    }
}

// fibonacii
int fib(int l){
    if(l==0){
        return 0;
    }
    if(l==1||l==2){
        return l-1;
    }
    else{
        return fib(l-1)+fib(l-2);
    }
}

// +,-,*,/,%
double basic_calc(int a, int b, int choice1){
    switch(choice1){
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4:
        if(b==0){
            printf("Invalid\n");
            return 0;
        }
        else{
            return(double) a / b;
        }
        case 5: return a % b;
        default: return 0;
    }
}

// conversions
double basic_conversions(double p, int category, int unitChoice, int direction) {
    switch (category) {
        case 1: // Mass/Weight
            switch (unitChoice) {
                case 1: // g and kg
                    switch (direction) {
                        case 1: return p / 1000;   // g → kg
                        case 2: return p * 1000;   // kg → g
                        default: return -1;
                    }
                case 2: // kg and tonne
                    switch (direction) {
                        case 1: return p / 1000;   // kg → tonne
                        case 2: return p * 1000;   // tonne → kg
                        default: return -1;
                    }
                case 3: // g and oz
                    switch (direction) {
                        case 1: return p / 28.3495; // g → oz
                        case 2: return p * 28.3495; // oz → g
                        default: return -1;
                    }
                case 4: // kg and lb
                    switch (direction) {
                        case 1: return p * 2.20462; // kg → lb
                        case 2: return p / 2.20462; // lb → kg
                        default: return -1;
                    }
                default: return -1;
            }

        case 2: // Length/Distance
            switch (unitChoice) {
                case 1: // mm and cm
                    switch (direction) {
                        case 1: return p / 10;   // mm → cm
                        case 2: return p * 10;   // cm → mm
                        default: return -1;
                    }
                case 2: // cm and m
                    switch (direction) {
                        case 1: return p / 100;  // cm → m
                        case 2: return p * 100;  // m → cm
                        default: return -1;
                    }
                case 3: // m and km
                    switch (direction) {
                        case 1: return p / 1000; // m → km
                        case 2: return p * 1000; // km → m
                        default: return -1;
                    }
                case 4: // in and cm
                    switch (direction) {
                        case 1: return p * 2.54;  // in → cm
                        case 2: return p / 2.54;  // cm → in
                        default: return -1;
                    }
                case 5: // ft and m
                    switch (direction) {
                        case 1: return p / 3.28084; // ft → m
                        case 2: return p * 3.28084; // m → ft
                        default: return -1;
                    }
                case 6: // mi and km
                    switch (direction) {
                        case 1: return p * 1.60934; // mi → km
                        case 2: return p / 1.60934; // km → mi
                        default: return -1;
                    }
                default: return -1;
            }

        case 3: // Area
            switch (unitChoice) {
                case 1: // m² and cm²
                    switch (direction) {
                        case 1: return p * 10000; // m² → cm²
                        case 2: return p / 10000; // cm² → m²
                        default: return -1;
                    }
                case 2: // ha and m²
                    switch (direction) {
                        case 1: return p * 10000; // ha → m²
                        case 2: return p / 10000; // m² → ha
                        default: return -1;
                    }
                case 3: // km² and ha
                    switch (direction) {
                        case 1: return p * 100;   // km² → ha
                        case 2: return p / 100;   // ha → km²
                        default: return -1;
                    }
                default: return -1;
            }

        case 4: // Volume/Capacity
            switch (unitChoice) {
                case 1: // ml and l
                    switch (direction) {
                        case 1: return p / 1000; // ml → l
                        case 2: return p * 1000; // l → ml
                        default: return -1;
                    }
                case 2: // l and m³
                    switch (direction) {
                        case 1: return p / 1000; // l → m³
                        case 2: return p * 1000; // m³ → l
                        default: return -1;
                    }
                case 3: // l and US gallon
                    switch (direction) {
                        case 1: return p / 3.78541; // l → USgallon
                        case 2: return p * 3.78541; // USgallon → l
                        default: return -1;
                    }
                case 4: // l and UK gallon
                    switch (direction) {
                        case 1: return p / 4.54609; // l → UK gallon
                        case 2: return p * 4.54609; // UKGallon → l
                        default: return -1;
                    }
                default: return -1;
            }
        case 5: // Time
            switch (unitChoice) {
                case 1: // s and min
                    switch (direction) {
                        case 1: return p / 60; // s → min
                        case 2: return p * 60; // min → s
                        default: return -1;
                    }
                case 2: // min and hr
                    switch (direction) {
                        case 1: return p / 60; // min → hr
                        case 2: return p * 60; // hr → min
                        default: return -1;
                    }
                case 3: // hr and day
                    switch (direction) {
                        case 1: return p / 24; // hr→ day
                        case 2: return p * 24; // day → hr
                        default: return -1;
                    }
                case 4: // day and week
                    switch (direction) {
                        case 1: return p / 7; // day → week
                        case 2: return p * 7; // week → day
                        default: return -1;
                    }
                default: return -1;
            }
        case 6: // Speed
            switch (unitChoice) {
                case 1: // km/hr and m/s
                    switch (direction) {
                        case 1: return p / 3.6; // km/hr → m/s
                        case 2: return p * 3.6; // m/s → km/hr
                        default: return -1;
                    }
                case 2: // km/hr and mph
                    switch (direction) {
                        case 1: return p / 1.60934; // km/hr → mph
                        case 2: return p * 1.60934; // mph → km/hr
                        default: return -1;
                    }
                default: return -1;
            }
        case 7: // Temperature
            switch (unitChoice) {
                case 1: // C and F
                    switch (direction) {
                        case 1: return p *9.0/5.0+32; // C → F
                        case 2: return (p-32)*5.0/9.0; // F → C
                        default: return -1;
                    }
                case 2: // C nd K
                    switch (direction) {
                        case 1: return p +273.15; // C → K
                        case 2: return p -273.15; // K → C
                        default: return -1;
                    }
                default: return -1;
            }
        case 8: // Data/digital
            switch (unitChoice) {
                case 1: // bit and byte(B)
                    switch (direction) {
                        case 1: return p / 8; // bit → byte
                        case 2: return p * 8; // byte → bit
                        default: return -1;
                    }
                case 2: // B and KB
                    switch (direction) {
                        case 1: return p / 1024; // B → KB
                        case 2: return p * 1024; // KB → B
                        default: return -1;
                    }
                case 3: // KB and MB
                    switch (direction) {
                        case 1: return p / 1024; // KB → MB
                        case 2: return p * 1024; // MB → KB
                        default: return -1;
                    }
                case 4: // MB and GB
                    switch (direction) {
                        case 1: return p / 1024; // MB → GB
                        case 2: return p * 1024; // GB → MB
                        default: return -1;
                    }
                case 5: // GB and TB
                    switch (direction) {
                        case 1: return p / 1024; // GB → TB
                        case 2: return p * 1024; // TB → GB
                        default: return -1;
                    }
                default: return -1;
            }
        case 9: // Energy
            switch (unitChoice) {
                case 1: // j and kj
                    switch (direction) {
                        case 1: return p / 1000; // j → kj
                        case 2: return p * 1000; // kj → j
                        default: return -1;
                    }
                case 2: // j and cal
                    switch (direction) {
                        case 1: return p / 4.184; // j → cal
                        case 2: return p * 4.184; // cal → j
                        default: return -1;
                    }
                case 3: // j and kWh
                    switch (direction) {
                        case 1: return p / (3.6*1000000); // j→ kWh
                        case 2: return p * (3.6*1000000); // kWh→ j
                        default: return -1;
                    }
                default: return -1;
            }
        case 10: // Pressure
            switch (unitChoice) {
                case 1: // Pa and bar
                    switch (direction) {
                        case 1: return p / 100000; // pa → bar
                        case 2: return p * 100000; // bar → pa
                        default: return -1;
                    }
                case 2: // Pa and atm
                    switch (direction) {
                        case 1: return p / 101325; // Pa → atm
                        case 2: return p * 101325; // atm → Pa
                        default: return -1;
                    }
                case 3: // pa and psi
                    switch (direction) {
                        case 1: return p / 6894.76; // pa→ psi
                        case 2: return p * 6894.76; // psi → pa
                        default: return -1;
                    }
                default: return -1;
            }
            default: return -1;
}
}

double math_function(double q, double r, int choice3, int sub_choice) {
    switch(choice3) {
        case 1: // square, cube, fourth power etc..
        switch(sub_choice){
            case 1: return pow(q, 2);   // square
            case 2: return pow(q, 3);   // cube
            case 3: return pow(q, 4);   // fourth power
            case 4: return pow(q, r);   // q^r (custom)
            default: return -1;
        }
        case 2: // root functions
            switch(sub_choice) {
                case 1: if (q < 0) { printf("Error: sqrt domain (q >= 0)\n"); return -1; } return sqrt(q);      // square root
                case 2: return cbrt(q);                                                                       // cube root (works for negative also)
                case 3: return hypot(q, r);                                                                   // distance calc
                default: return -1;
            }
        case 3: // exponential and logarithmic functions
            switch(sub_choice) {
                case 1: return exp(q);                                                                        // e^x
                case 2: return exp2(q);                                                                       // 2^x
                case 3: if (q <= 0) { printf("Error: log domain (q > 0)\n"); return -1; } return log(q);      // natural log
                case 4: if (q <= 0) { printf("Error: log10 domain (q > 0)\n"); return -1; } return log10(q);  // log base 10
                case 5: if (q <= 0) { printf("Error: log2 domain (q > 0)\n"); return -1; } return log2(q);    // log base 2
                case 6: if (q <= -1) { printf("Error: log1p domain (q > -1)\n"); return -1; } return log1p(q);// log(1+x)
                default: return -1;
            }
        case 4: // trigonometric functions
            switch(sub_choice) {
                case 1: return sin(q);
                case 2: return cos(q);
                case 3: return tan(q);
                case 4: if (q < -1 || q > 1) { printf("Error: asin domain (-1 <= q <= 1)\n"); return -1; } return asin(q); // arc sine
                case 5: if (q < -1 || q > 1) { printf("Error: acos domain (-1 <= q <= 1)\n"); return -1; } return acos(q); // arc cosine
                case 6: return atan(q);                                                                                   // arc tangent
                case 7: return atan2(r, q);                                                                               // arc tangent y/x
                default: return -1;
            }
        case 5: // hyperbolic functions
            switch(sub_choice) {
                case 1: return sinh(q);
                case 2: return cosh(q);
                case 3: return tanh(q);
                case 4: return asinh(q);                                                                                  // no restriction
                case 5: if (q < 1) { printf("Error: acosh domain (q >= 1)\n"); return -1; } return acosh(q);              // inverse hyperbolic cosine
                case 6: if (q <= -1 || q >= 1) { printf("Error: atanh domain (-1 < q < 1)\n"); return -1; } return atanh(q);// inverse hyperbolic tangent
                default: return -1;
            }
        default: return -1;
    }
}

int main() {
    int choice, n, m, l, a, b, choice1, category, unitChoice, direction,choice3,choice4;
    double p, q, r;
    int sub_choice;
    double result;
    char again;

    do {
        printf("\n=== Calculator Menu ===\n");
        printf("1. Multiplication Table\n");
        printf("2. Factorial\n");
        printf("3. Fibonacci Series\n");
        printf("4. Basic Calculator (+,-,*,/,%%)\n");
        printf("5. Unit Conversions\n");
        printf("6. Mathematical Functions (powers, roots, logs, trig, etc.)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Multiplication
                printf("Enter a number: ");
                scanf("%d", &n);
                multi(n);
                break;

            case 2: // Factorial
                printf("Enter a number: ");
                scanf("%d", &m);
                printf("Factorial of %d = %d\n", m, fact(m));
                break;

            case 3: // Fibonacci
                printf("Enter number of terms: ");
                scanf("%d", &l);
                printf("Fibonacci series: ");
                for(int i = 0; i < l; i++) {
                    printf("%d ", fib(i));
                }
                printf("\n");
                break;

            case 4: // Basic Calculator
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("1.Add  2.Subtract  3.Multiply  4.Divide  5.Modulus\n");
                printf("Enter your choice: ");
                scanf("%d", &choice1);
                result = basic_calc(a, b, choice1);
                printf("Result = %.2f\n", result);
                break;

            case 5: // Unit Conversion
                do {
                    printf("\n==== Unit Conversion Tool ====\n");
                    printf("Categories:\n");
                    printf("1. Mass/Weight\n2. Length/Distance\n3. Area\n4. Volume/Capacity\n");
                    printf("5. Time\n6. Speed\n7. Temperature\n8. Data/Digital\n");
                    printf("9. Energy\n10. Pressure\n");

                    printf("\nEnter category number: ");
                    scanf("%d", &category);

                    switch (category) {
                        case 1: printf("\nMass/Weight Options:\n1. g and kg\n2. kg and tonne\n3. g and oz\n4. kg and lb\n"); break;
                        case 2: printf("\nLength/Distance Options:\n1. mm and cm\n2. cm and m\n3. m and km\n4. in and cm\n5. ft and m\n6. mi and km\n"); break;
                        case 3: printf("\nArea Options:\n1. m² and cm²\n2. ha and m²\n3. km² and ha\n"); break;
                        case 4: printf("\nVolume/Capacity Options:\n1. ml and l\n2. l and m³\n3. l and US gallon\n4. l and UK gallon\n"); break;
                        case 5: printf("\nTime Options:\n1. s and min\n2. min and hr\n3. hr and day\n4. day and week\n"); break;
                        case 6: printf("\nSpeed Options:\n1. km/hr and m/s\n2. km/hr and mph\n"); break;
                        case 7: printf("\nTemperature Options:\n1. °C and °F\n2. °C and K\n"); break;
                        case 8: printf("\nData/Digital Options:\n1. bit and byte\n2. B and KB\n3. KB and MB\n4. MB and GB\n5. GB and TB\n"); break;
                        case 9: printf("\nEnergy Options:\n1. J and kJ\n2. J and cal\n3. J and kWh\n"); break;
                        case 10: printf("\nPressure Options:\n1. Pa and bar\n2. Pa and atm\n3. Pa and psi\n"); break;
                        default: printf("\nInvalid category!\n"); continue;
                    }

                    printf("\nEnter unit choice: ");
                    scanf("%d", &unitChoice);

                    // Direction prompts
                    switch (category) {
                        case 1:
                            if (unitChoice == 1) printf("Enter direction (1 for g to kg, 2 for kg to g): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for kg to tonne, 2 for tonne to kg): ");
                            else if (unitChoice == 3) printf("Enter direction (1 for g to oz, 2 for oz to g): ");
                            else if (unitChoice == 4) printf("Enter direction (1 for kg to lb, 2 for lb to kg): ");
                            break;
                        case 2:
                            if (unitChoice == 1) printf("Enter direction (1 for mm to cm, 2 for cm to mm): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for cm to m, 2 for m to cm): ");
                            else if (unitChoice == 3) printf("Enter direction (1 for m to km, 2 for km to m): ");
                            else if (unitChoice == 4) printf("Enter direction (1 for in to cm, 2 for cm to in): ");
                            else if (unitChoice == 5) printf("Enter direction (1 for ft to m, 2 for m to ft): ");
                            else if (unitChoice == 6) printf("Enter direction (1 for mi to km, 2 for km to mi): ");
                            break;
                        case 3:
                            if (unitChoice == 1) printf("Enter direction (1 for m² to cm², 2 for cm² to m²): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for ha to m², 2 for m² to ha): ");
                            else if (unitChoice == 3) printf("Enter direction (1 for km² to ha, 2 for ha to km²): ");
                            break;
                        case 4:
                            if (unitChoice == 1) printf("Enter direction (1 for ml to l, 2 for l to ml): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for l to m³, 2 for m³ to l): ");
                            else if (unitChoice == 3) printf("Enter direction (1 for l to US gallon, 2 for US gallon to l): ");
                            else if (unitChoice == 4) printf("Enter direction (1 for l to UK gallon, 2 for UK gallon to l): ");
                            break;
                        case 5:
                            if (unitChoice == 1) printf("Enter direction (1 for s to min, 2 for min to s): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for min to hr, 2 for hr to min): ");
                            else if (unitChoice == 3) printf("Enter direction (1 for hr to day, 2 for day to hr): ");
                            else if (unitChoice == 4) printf("Enter direction (1 for day to week, 2 for week to day): ");
                            break;
                        case 6:
                            if (unitChoice == 1) printf("Enter direction (1 for km/hr to m/s, 2 for m/s to km/hr): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for km/hr to mph, 2 for mph to km/hr): ");
                            break;
                        case 7:
                            if (unitChoice == 1) printf("Enter direction (1 for °C to °F, 2 for °F to °C): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for °C to K, 2 for K to °C): ");
                            break;
                        case 8:
                            if (unitChoice == 1) printf("Enter direction (1 for bit to byte, 2 for byte to bit): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for B to KB, 2 for KB to B): ");
                            else if (unitChoice == 3) printf("Enter direction (1 for KB to MB, 2 for MB to KB): ");
                            else if (unitChoice == 4) printf("Enter direction (1 for MB to GB, 2 for GB to MB): ");
                            else if (unitChoice == 5) printf("Enter direction (1 for GB to TB, 2 for TB to GB): ");
                            break;
                        case 9:
                            if (unitChoice == 1) printf("Enter direction (1 for J to kJ, 2 for kJ to J): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for J to cal, 2 for cal to J): ");
                            else if (unitChoice == 3) printf("Enter direction (1 for J to kWh, 2 for kWh to J): ");
                            break;
                        case 10:
                            if (unitChoice == 1) printf("Enter direction (1 for Pa to bar, 2 for bar to Pa): ");
                            else if (unitChoice == 2) printf("Enter direction (1 for Pa to atm, 2 for atm to Pa): ");
                            else if (unitChoice == 3) printf("Enter direction (1 for Pa to psi, 2 for psi to Pa): ");
                            break;
                    }

                    scanf("%d", &direction);

                    printf("Enter value to convert: ");
                    scanf("%lf", &p);

                    result = basic_conversions(p, category, unitChoice, direction);

                    if (result == -1) {
                        printf("\nInvalid conversion!\n");
                    } else {
                        printf("\nConverted value: %.6lf\n", result);
                    }

                    printf("\nDo you want to convert again? (y/n): ");
                    scanf(" %c", &again);

                } while (again == 'y' || again == 'Y');
                break;

            case 6: // Math functions
                do {
                    printf("Enter value q: ");
                    scanf("%lf", &q);
                    printf("Enter value r (if needed, else enter 0): ");
                    scanf("%lf", &r);

                    printf("\nChoose function category:\n");
                    printf("1. Power\n2. Roots\n3. Exp/Logs\n4. Trigonometry\n5. Hyperbolic\n");
                    scanf("%d", &choice3);

                    switch(choice3){
                        case 1: printf("\nPower Options:\n1. Square\n2. Cube\n3. Fourth power\n4. Custom power\n"); break;
                        case 2: printf("\nRoot Options:\n1. Square root\n2. Cube root\n3. Hypotenuse length\n"); break;
                        case 3: printf("\nExponential/Logarithmic Options:\n1. e^x\n2. 2^x\n3. Natural log\n4. Log base 10\n5. Log base 2\n6. Log(1+x)\n"); break;
                        case 4: printf("\nTrigonometric Options:\n1. Sine\n2. Cosine\n3. Tangent\n4. Arc sine\n5. Arc cosine\n6. Arc tangent\n7. Arc tangent of y/x\n"); break;
                        case 5: printf("\nHyperbolic Options:\n1. sinh\n2. cosh\n3. tanh\n4. asinh\n5. acosh\n6. atanh\n"); break;
                        default: printf("Invalid category!\n"); continue;
                    }

                    printf("Enter sub-choice: ");
                    scanf("%d", &sub_choice);

                    result = math_function(q, r, choice3, sub_choice);

                    if (result != -1) {
                        printf("Result = %.6lf\n", result);
                    }

                    printf("\nDo you want to continue Math Functions? (1.Yes / 0.No): ");
                    scanf("%d", &choice4);

                } while (choice4 == 1);
                break;

            case 0: // Exit
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 0);

    return 0;
}
