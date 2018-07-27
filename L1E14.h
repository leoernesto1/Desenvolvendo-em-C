//using namespace std;

class Retangulo
{
	public:
		Retangulo();
		Retangulo(float, float);
		float getAltura();
		float getLargura();
		void setAltura(float);
		void setLargura(float);
		float perimetro();
	private:
		float altura;
		float largura;
};
