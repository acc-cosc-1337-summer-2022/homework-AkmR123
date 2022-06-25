//add include statements
#include "dna.h"
#include <iostream>
#include <string>

using namespace std;

//add function(s) code here

double get_gc_content(const string& dna){
    int GC = 0;
    double size_of_dna = dna.size();

    for (int i = 0; i != size_of_dna; i++) {
        if (dna[i] == 'G' || dna[i] == 'C'){ 
            GC++;
        }
    }
    
    double results = GC / size_of_dna;
    return results;
}

string reverse_string(string dna){
    string flipped;
    for (int i = dna.size()-1; i >= 0; i--){
        flipped += dna[i];
    }
    
    return flipped;
}

string get_dna_complement(string dna) {
    int size_of_dna = dna.size();
    string reversed_dna = reverse_string(dna);

    for (int i = 0; i != size_of_dna + 1; i++) {
        if (reversed_dna[i] == 'A') {                
            reversed_dna[i] = 'T';
        } 
        else if (reversed_dna[i] == 'T') {
            reversed_dna[i] = 'A';
        }
        else if (reversed_dna[i] == 'G') {
           reversed_dna[i] = 'C';
        } 
        else if (reversed_dna[i] == 'C') {
            reversed_dna[i] = 'G';
        }
        
    }

    return reversed_dna;
}