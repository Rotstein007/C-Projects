#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main()
{
    char str[100];

    char* replace_char(char* str, char find, char replace){
        char *current_pos = strchr(str,find);
        while (current_pos){
            *current_pos = replace;
            current_pos = strchr(current_pos,find);
        }
        return str;
    }

    float inp(){
        char str[100];
        char dot = '.';
        char comma = ',';
        fgets(str, 100, stdin);
        replace_char(str, comma, dot);
        return atof(str);
    }

    srand(time(NULL));

    float round_2d(float var)
    {
        float value = (int)(var * 100.0 + .005);
        return (float)value / 100.0;
    }

    typedef struct
    {
        float a, b, c, h_c, q, p;
    } triangle;

    float calc_h(triangle t)
    {
        return (t.a * t.b) / t.c;
    }

    float calc_q(triangle t)
    {
        return sqrt(pow(t.b, 2) - pow(t.h_c, 2));
    }

    float calc_p(triangle t)
    {
        return sqrt(pow(t.a, 2) - pow(t.h_c, 2));
    }

    triangle init_triangle()
    {
        srand(time(NULL));
        triangle t;
        t.a = rand() % (20 + 1 - 1) + 1;
        t.b = rand() % (20 + 1 - 1) + 1;
        t.c = sqrt(pow(t.a, 2) + pow(t.b, 2));
        t.h_c = calc_h(t);
        t.q = calc_q(t);
        t.p = calc_p(t);

        //round numbers to two digits
        t.c = round_2d(t.c);
        t.h_c = round_2d(t.h_c);
        t.p = round_2d(t.p);
        t.q = round_2d(t.q);

        return t;
    }

    //Pythagoras

    void p_askfor_a(triangle t)
    {
        float input;
        printf("c = %.2f\nb = %.2f\na = ", t.c, t.b);
        input = inp();

        if (input == t.a)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.a);
        }
    }

    void p_askfor_b(triangle t)
    {
        float input;
        printf("a = %.2f\nc = %.2f\nb = ", t.a, t.c);
        input = inp();

        if (input == t.b)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.b);
        }
    }

    void p_askfor_c(triangle t)
    {
        float input;
        printf("a = %.2f\nb = %.2f\nc = ", t.a, t.b);
        input = inp();

        if (input == t.c)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.c);
        }
    }
    void pythagoras()
    {
        printf("Now let's practice the Pythagorean theorem! (Satz des Pythagoras)\nTo cancel, press Strg+C\n================================\n");
        int n;
        triangle tng;
        while (1)
        {
            srand(time(NULL));
            n = rand() % 2;
            tng = init_triangle();
            switch (n)
            {
            case 0:
                p_askfor_a(tng);
                break;
            case 1:
                p_askfor_b(tng);
                break;
            case 2:
                p_askfor_c(tng);
                break;
            }
        }
    }
    //Kathetensatz

    void askfor_a(triangle t)
    {
        float input;
        printf("q = %.2f\np = %.2f\nc = %.2f\na = ", t.q, t.p, t.c);
        input = inp();

        if (input == t.a)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.a);
        }
    }

    void askfor_b(triangle t)
    {
        float input;
        printf("q = %.2f\np = %.2f\nc = %.2f\nb = ", t.q, t.p, t.c);
        input = inp();

        if (input == t.b)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.b);
        }
    }

    void askfor_q(triangle t)
    {
        float input;
        printf("a = %.2f\nb = %.2f\nc = %.2f\nq = ", t.a, t.b, t.c);
        input = inp();

        if (input == t.q)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.q);
        }
    }

    void askfor_p(triangle t)
    {
        float input;
        printf("a = %.2f\nb = %.2f\nc = %.2f\np = ", t.a, t.b, t.c);
        input = inp();

        if (input == t.p)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.p);
        }
    }

    void askfor_c_1(triangle t)
    {
        float input;
        printf("b = %.2f\nq = %.2f\nc = ", t.b, t.q);
        input = inp();

        if (input == t.c)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.c);
        }
    }

    void askfor_c_2(triangle t)
    {
        float input;
        printf("a = %.2f\np = %.2f\nc = ", t.a, t.p);
        input = inp();

        if (input == t.c)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.c);
        }
    }

    void kath()
    {
        printf("Now we are practicing the catheter set! (Kathetensatz)\nTo cancel, press Strg+C\n================================\n");
        int n;
        triangle tng;

        while (1)
        {
            srand(time(NULL));
            n = rand() % 5;
            tng = init_triangle();
            switch (n)
            {
            case 0:
                askfor_a(tng);
                break;
            case 1:
                askfor_b(tng);
                break;
            case 2:
                askfor_q(tng);
                break;
            case 3:
                askfor_p(tng);
                break;
            case 4:
                askfor_c_1(tng);
                break;
            case 5:
                askfor_c_2(tng);
                break;
            }
        }
    }

    // Höhensatz

    void h_askfor_h(triangle t)
    {
        float input;
        printf("q = %.2f\np = %.2f\nh = ", t.q, t.p);
        input = inp();

        if (input == t.h_c)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.h_c);
        }
    }

    void h_askfor_p(triangle t)
    {
        float input;
        printf("h = %.2f\nq = %.2f\np = ", t.h_c, t.q);
        input = inp();

        if (input == t.p)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.p);
        }
    }

    void h_askfor_q(triangle t)
    {
        float input;
        printf("h = %.2f\np = %.2f\nq = ", t.h_c, t.p);
        input = inp();

        if (input == t.q)
        {
            printf("Perfect! That's the right answer! :)\n\n");
        }
        else
        {
            printf("Wrong!\n The right answer is: %.2f\n\n", t.q);
        }
    }

    void hoe()
    {
        printf("Now we practice the theorem of heights! (Höhensatz)\nTo cancel, press Strg+C\n================================\n");
        int n;
        triangle tng;
        while (1)
        {
            srand(time(NULL));
            n = rand() % 2;
            tng = init_triangle();
            switch (n)
            {
            case 0:
                h_askfor_h(tng);
                break;
            case 1:
                h_askfor_q(tng);
                break;
            case 2:
                h_askfor_p(tng);
                break;
            }
        }
    }

    //////////////////////////////
    int input;
    printf("Choose:\n <1> Pythagorean theorem (Satz des Pythagoras)\n <2> Catheter set (Kathetensatz)\n <3> Altitude rate (Höhensatz)\n\n> ");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        pythagoras();
        break;
    case 2:
        kath();
        break;
    case 3:
        hoe();
        break;
    default:
        printf("Peace, no, your choise was never an option! :)\n");
        break;
    }

    return 0;
}