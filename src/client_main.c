#include "magic.h"
#include <string.h>

int main(void)
{
    // cast the first spell
    Spell my_spell = prepare_the_magic();
    choose_spell(my_spell, "abracadabra");
    perform_magic(my_spell);

    // make a spellbook and cast a few more
    Spellbook spellbook;
    strcpy(spellbook.title, "arcane magic");
    spellbook.first_spell = prepare_the_magic();
    choose_spell(spellbook.first_spell, "alakazam");
    spellbook.second_spell = prepare_the_magic();


    perform_magic(spellbook.first_spell);
    perform_magic(spellbook.second_spell);


    return 0;
}
