#include "mix_architecture.h"
#include "mix_characters.h"
#include "mix_word.h"

#include <locale.h>


int main()
{
//    setlocale(LC_CTYPE, "");

    MixWord a_word;

    a_word.leading_sign = PLUS;

    MixWordByteAssign(&a_word.bytes[0], 65);
    MixWordByteAssign(&a_word.bytes[1], 66);
    MixWordByteAssign(&a_word.bytes[2], 67);
    MixWordByteAssign(&a_word.bytes[3], 68);
    MixWordByteAssign(&a_word.bytes[4], 69);

    MixWordDebugPrint(&a_word);


    MixWord b_word = MixWordNew();
    MixWordDebugPrint(&b_word);

    MixWord c_word = MixWordNewFull(MINUS, 64, 00, 55, 02, 30);
    MixWordDebugPrint(&c_word);

    MixArchitecture architecture;
    
    return 0;
}
