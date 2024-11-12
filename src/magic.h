#ifndef MAGIC_H
#define MAGIC_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Spell_t * Spell;

typedef struct{
    char title[20];
    Spell first_spell;
    Spell second_spell;
}Spellbook;

Spell prepare_the_magic();
void choose_spell(Spell spell, char * magic_words);
void  perform_magic(Spell spell);



#ifdef __cplusplus
}
#endif

#endif // MAGIC_H
