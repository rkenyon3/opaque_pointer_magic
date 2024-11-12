#include "magic.h"

#include <string>
#include <iostream>

struct Spell_t{
    std::string incantation;
    std::string helper;
};

Spell prepare_the_magic(){
    Spell new_spell = new struct Spell_t;
    new_spell->incantation = "";
    new_spell->helper = "rabbit";
    return new_spell;
}

void choose_spell(Spell spell, char * magic_words){
    spell->incantation = magic_words;
    spell->helper = "wand";
}

void  perform_magic(Spell spell){
    std::cout << "*waves " << spell->helper << "*..." << spell->incantation << std::endl;
    free(spell);
    spell = NULL;
}
