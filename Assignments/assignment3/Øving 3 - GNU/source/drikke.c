static char * TEXT[] = {
    "Nikka From the Barrel.",
    "Yealands Land Made Sauvignon Blanc 2019.",
    "Grans Julebrus.",
    "Sunniva Iste Fersken.",
    "Coca Cola Zero",
    "Ringnes Dahls Pils"
};


char * drikke(unsigned int degree){
    return TEXT[degree % 6];
}
