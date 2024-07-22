#include "header/prototypes.h"

void gestionInputs(Input *input)
{
    if (IsKeyDown(KEY_W))
    {
        input->up = 1;
    }
    else if (IsKeyDown(KEY_S))
    {
        input->down = 1;
    }
    else if (IsKeyDown(KEY_A))
    {
        input->left = 1;
    }
    else if (IsKeyDown(KEY_D))
    {
        input->right = 1;
    }

    if (IsKeyReleased(KEY_W))
    {
        input->up = 0;
    }
    else if (IsKeyReleased(KEY_S))
    {
        input->down = 0;
    }
    else if (IsKeyReleased(KEY_A))
    {
        input->left = 0;
    }
    else if (IsKeyReleased(KEY_D))
    {
        input->right = 0;
    }
}