#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Screen{
private:
    int nlin, ncol;
    char brush;
    vector < vector<char> > m;
    vector <char> array;
public:
    Screen(int nlin, int ncol){
        // Using Vector //
        printf("The Screen's constructor Has been Called\n");
        for(int i = 0; i < nlin ;i++){
            array.push_back('#');
            printf("%c ", array[i]);
        }
        printf("\n");
        for(int i = 0; i < ncol; i++){

            m.push_back(array);

        }
        // Printing //
        printScreen(nlin, ncol);
    }

    void setPixel(int x,int y){
        // This method Prints out Pixel with brush's type //
        m[x][y] = brush;

    }

    void clear(){
        // This method Clears the Screen //
        printf("Clear\n");
        for(int i = 0;i < nlin;i++){
            for(int j = 0; j < ncol;j++){
                m[i][j] = '#';
            }
        }
    }

    void setBrush(char mbrush){
        // This method changes the Brush //
        printf("The Brush has been changed\n");
        brush = mbrush;
    }

    void printScreen(int nlin,int ncol){
        // This method prints our Screen //
        printf("Função Print Canvas foi Chamada\n");

        for(int i = 0;i < nlin; i++){
            for(int j = 0;j < ncol;j++){

                printf("%c ", m[i][j]);
            }
            printf("\n");
        }
    }

    friend ostream& operator<<(ostream &os, Screen &t);
};

int main()
{
    Screen erika(30,30);
    return 0;
}
