#include <iostream>
#include <tgmath.h>
#include <cmath>
#include <vector>

using namespace std;
/*  This first class 'Point' have the same ideias that we see in Algebra
 */
class Point{
public:
    Point(float x,float y){
       SetX(x);
       SetY(y);
       norma();
    }
    void SetX(float mx){
        // This first method, called 'SetX', has the purpose to set the value x of our point //
        x = mx;
    }
    void SetY(float my){
        // The second method, called 'SetY', has the pupose to set the value y of our point //
        y = my;
    }
    void SetXY(float mx,float my){
        // This method try to to the same thing as 'SetX' and 'SetY', its set the value x and y in the same time //
        x = mx;
        y = my;
    }
    float getX(){
        // This method gets the value x, notice that if we haven't set a value before, it may come with garbage //
        return x;
    }
    float getY(){
        // This method gets the value y, notice that if we haven't set a value before, it may come with garbage //
        return y;
    }
    void add(Point p1){
        // This methos add the value of a point with the value of another point //
        x = p1.getX() + x;
        y = p1.getY() + y;
    }
    void sub(Point p1){
        // This method sub the value of a point with the value of another point //
        x = x - p1.getX();
        y = y - p1.getY();
    }
    float norma(){
        // This method calculates the norma between the point and the origins of the coodinates //
        normad = sqrt((x*x)+(y*y));
        return normad;
    }
    void translada(float a, float b){
        // This method changes the point's location by applying a contant value//
        x = x + a;
        y = y + b;
    }
    void imprime(){
        // This method prints the point in term of '(x,y)' //
        printf("As coodenadas do ponto é dado por: (%f,%f)\n",x,y);
    }
    void imprimenorma(){
        //This method prints the value of the noma //
        printf("A norma eh: %f\n", normad);
    }
    float Length2Points(Point p1, Point p2){
        // This method calculates the distance between two points //
        distancia = sqrt((p2.getX()-p1.getX())*(p2.getX()-p1.getX())+(p2.getY()-p1.getY())*(p2.getY()-p1.getY()));
        return distancia;
    }
    //~Point();
private:
    float x,y,normad,distancia;
};

class Poligono{
    // The maximum value of the polygon is 100 vertex //
public:
    Poligono(){
        printf("Contrutor de Poligono %d \n");
    }
    void addVertex(Point p){
        // This methos add the vertex one by one, and stores it in a array of Points //
        // But the maximum of vertex is 100, if so, it will give a warning //
        //i = n;
        if(i<100){
            points[i]=p;
            i++;
        }
        else{
            printf("The maximum quantity of vertex is 100");
        }
    }
    void numberVertex(){
        // This return the number of vertex that our polygon has //
        printf("Number of vertex: %d \n", i);
    }
    float areaPolygon(){
        // This method calculates the area of the polygon//
        float aux1=0,aux2=0;
        if(i==(2|1)){
            printf("Isn't possible to calculate the area with just one or two vertex, insert another one");
            return -1;
        }
        else{
            // This is the etimology of Shoalace formula //
            // The idea behind the shoelance formula is to divide the polygon in n triangles //
            // Notice that the points choosed must be in clock-wise //
            for(k=0;k<i-1;k++){
                aux1 = aux1 + (points[k].getX()*points[k+1].getY());
                //printf("%d\n", k);
            }
            for(k=0;k<i-1;k++){
                aux2 = aux2 + (points[k].getY()*points[k+1].getX());
                //printf("%d\n", k);
            }
            if(k==i-1){
                //printf("entrou na ultima iteração \n");
                aux1 = aux1 +  points[k].getX()*points[0].getY();
                aux2 = aux2 + points[k].getY()*points[0].getX();
            }
            // Since the area cannot be negative, we will create a if to mutiply by -1, and get a positive value //
            printf("Aux1: %f \nAux2: %f \n", aux1, aux2);
            area = (aux1-aux2)/((float)2);
            if(area < 0){
                area *= (-1);
            }
            return area;
        }
    }
    void transladaPolygon(float a, float b){
        // In ths methos we uses the method we have created before in Point class to translade the polygon //
        for(k=0;k<i;k++){
            points[k].translada(a,b);
        }
    }
    void rotatePolygon(float mtetha){
        // The ideia of this method basis on the matrix transformation, where we can trasnformate the points into //
        // another coodinate system, remember from Algebra//
        // But the transformation used here is done in the origins, so, to do that we need to translate our polygon //
        // After the trasnlation is done, trasnaltion to the origins, we can do the transformation //
        // Hence, at the end of the transformation, we will translate again //
        tetha = mtetha;
        // The value that we are goning to translate is the distance between the first point and the origins //
        float xlinha = points[0].getX();
        float ylinha = points[0].getY();
        for(k=1;k<i;k++){
            // Here is done the translation to the origins //
            points[k].translada(-xlinha,-ylinha);
        }
        for(k=1;k<i;k++){
            // Here is our matrix //
            // |cos(tetha)  - sin(tetha) | //
            // |sin(tetha) + cos(tehta)  | //
            // So, i've just multiplied this matrix with the points //
            points[k].SetXY((cos(tetha)*points[k].getX())-(sin(tetha)*points[k].getY()),(sin(tetha)*points[k].getX())+(cos(tetha)*points[k].getY()));
        }
        for(k=1;k<i;k++){
            // In the end we a transaltion again //
            points[k].translada(+xlinha,+ylinha);
        }
    }
    void printPolygon(){
        // This method prints our veterxs' polygon //
        for(k=i;k>0;k--){
            printf("(%f,%f) -->",points[k].getX(),points[k].getY());
        }
        printf("\n");
    }
    //~Poligono();
private:
    int i=0,k;
    // I used the function malloc to create a space on the memory for a array of Points //
    Point *points = (Point*)malloc((100)*sizeof(Point));
    float area,tetha;
};
class Retangulo: public Poligono{
public:
    Retangulo(float x, float y, float largura, float altura):Poligono(){
       printf("Contrutor de Retangulo\n");
       Point p1(x,y);
       addVertex(p1);
       Point p2(x,y-altura);
       addVertex(p2);
       Point p3(x+largura,y-altura);
       addVertex(p3);
       Point p4(x+largura, y);
       addVertex(p4);
       printf("Area do polygon: %f\n",areaPolygon());
       printPolygon();
       numberVertex();
    }
    //~Retangulo();
private:
    // No values inserted here //
};
int main()
{
    //Point p1(2,4),p2(5,6),p3(7,8);
    //Point spoint[]={p1,p2,p3};
    //Poligono erika(spoint,3);
    Retangulo erika(0,0,4,3);
    erika.rotatePolygon(M_PI/6);
    printf("Area depois da rotação: %f\n", erika.areaPolygon());
    erika.transladaPolygon(-3,4);
    printf("Area depois da rotação: %f\n", erika.areaPolygon());
    erika.printPolygon();
    return 0;
}
