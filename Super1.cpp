#include <cstdlib>
//#include <windows.h>
//#include <stdio.h>
#include <cstdio>

//Dovjina.cpp
/*  «м≥нн≥ ¤ позначу так, що б вони трохи нагадували мен≥ про те що вони таке */
class Dovjina
    {
        protected:

           unsigned int Dov;
		    char *potsjatok;
		    char *kin ;

        public:

			unsigned int Dovjina::moianaishvydshadovzhyna(char *ch);

			unsigned int  dovzhrakhu( char *ch) // unsigned int завжди позитивне
                      {
                        char *c = ch;
                        return moianaishvydshadovzhyna(c);  // найшвидше у св≥т≥ обчисленн¤
                      }

            Dovjina( char* potsjatok_tym): potsjatok( potsjatok_tym)  // ƒумка розвиваЇтьс¤ поступово ≥ хочетьс¤ дал≥ б≥льше
			{
				kin = ( char *)&potsjatok_tym[dovzhrakhu(potsjatok_tym)];  //

				Dov = dovzhrakhu(potsjatok_tym);

				printf("Dovjina( char* potsjatok_tym): potsjatok( potsjatok_tym)");

			};

			//Window::Pane::Pane() : x(0), y(0) { }

			Dovjina::Dovjina(unsigned int& D, char*& p, char*& k)  {Dov=D;  potsjatok=p; kin=k;
			     printf("Dovjina::Dovjina(unsigned int& D, char*& p, char*& k)  {Dov=D;  potsjatok=p; kin=k;")
			;}

			// Dovjina( char * ch) {*this = ch;}
    // конструктор початковий вар≥ант обнулююч≥й
    Dovjina(): Dov(0), potsjatok(NULL), kin(NULL) {
		printf("Dovjina(): Dov(0), potsjatok(NULL), kin(NULL)");
	}

            ~Dovjina(){};   // ÷е деструктор, в≥н видал¤Ї обект коли той б≥льш не потр≥бен.


		void postavyty_Dov( char * ch)
    {

                Dov = dovzhrakhu(  *ch);

    }


	void postavyty_potsjatok( char * ch)
	{

				potsjatok =  *ch;
    }


	void postavyty_kin( char * ch)
	{

				kin = ( char *)&ch[dovzhrakhu(ch)];;
    }


         Dovjina &operator= ( char * ch)
    {
                postavyty_potsjatok(ch);
				postavyty_Dov(ch);
				postavyty_kin(ch);;
                return *this;
    }


         Dovjina &operator+=( char * ch)
	{
               *this = vziaty_Dov()+dovzhrakhu(ch);
			   *this = vziaty_potsjatok()+ch;
			   *this = vziaty_kin()+ch;

	   return *this;
    }
           // void fileWork ( std::ofstream & f );


	unsigned int vziaty_Dov()
    {
	    return  Dov;
	}

	char vziaty_potsjatok()
    {
	    return  potsjatok;
	}

	char vziaty_kin()
    {
	    return  kin;
	}



    };


/*	unsigned int Dovjina::moianaishvydshadovzhyna(char *ch)
	{
	   unsigned int S;
	    _asm
	             mov     ecx, 0FFFFFFFF
                 mov     edx, [ch]
               mov     eax, 0
                mov     edi, edx
                 repne scasb
                mov     eax, ecx
                 not     eax
                sub     eax, 1
				mov     S, eax
		asm

        return 	S;
	};
*/

	unsigned int Dovjina::moianaishvydshadovzhyna(char *ch)
	{
       unsigned int result = 0;
         while (*ch++) ++result;
       return result;
    }




class Spilkuvannia : public Dovjina
{
   public:



   Spilkuvannia(char *potsjatok=NULL, char* inCaption=NULL) : Dovjina
               ( potsjatok )
    {

        this->Caption = inCaption;
    }



   private:

       char* Caption;

   public:

       pokaz()

       {
           char* temp = vziaty_potsjatok();
           printf(temp);      // чомусь тут трапляється падіння, викидується табличка сигнал SIGSEGV. 
       }
};






	int main()
{


	//SS =5545;

	Dovjina mbakajumba = "mbakajumba";
	Spilkuvannia tumbaj = "tumbaj";
//	tumbaj=mbakajumba;
	tumbaj.pokaz();
    return 0;
}
