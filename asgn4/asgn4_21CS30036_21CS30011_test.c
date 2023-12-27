

static int static_var = 5;

// An inline function with no body
inline int inline_func(double param1)
{
}

// function with ellipsis
short func(int param1, ...)
{
    int varX = param1;
    varX += 5;

    // testing return
    if (varX != 5)
    {
        varX = 5;
        return 5;
    }

    return varX;
}

int main()
{

    // testing declarations
    int var_X = 5;
    double var_Y = 10.5;
    char *var_string = "string";
    char var_char = 'c';
    _Bool var_Bool;
    _Imaginary var_Imaginary;
    _Complex var_Complex;

    // arrays
    int var_arr[] = {1, 2, 3};
    float var_arr2[] = {1.1, 34, 3, 4.4};
  

    // simple single line comment

    /*multi line comment in single line*/

    /*
    multi line comment in multiple lines
    here also
    again here
    */

    // testing arithmetic operations and bitwise expressions
    float var_Z = 112;
    auto var_auto = 10;
    var_X += var_Y;
    var_Y -= var_X;
    var_X = var_X % 2;
    var_X = var_X / 3;


    // testing logical operands
    if (var_X && var_Y || (var_Z))
    {
        var_Y = var_X + 5;
    }


label_goto:

    // testing if-else statements
    if (var_X)
    {
        var_X++;
    }
    else if (var_X)
    {
        var_X--;
    }
    else
    {
        if (var_X++)
        {
            var_X--;
        }
        else
        {
            var_X--;
            if (var_X)
            {
                var_X++;
            }
            else if (var_X++)
            {
                var_X *= 2;
            }
        }
    }

    // testing switch case
    switch (var_X)
    {
    case 1:
        for (int i = 0; i < var_X; ++i)
            i++;
        break;

    default:
        break;
    }

    signed signed_var = 5;
    volatile int var_volatile;
    unsigned int var3 = var_X;

    // testing pointers
    int *p = &var_X;
    unsigned *q = &var_X;
    float *r = &var_Y;
    (*p)++;

    int size = sizeof(p);

    return 0;
}