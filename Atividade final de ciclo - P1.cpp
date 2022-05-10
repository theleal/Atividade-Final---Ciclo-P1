#include <iostream>
#include <string.h>

using namespace std;

class Data
{
private:
	int dia;
	int mes;
	int ano;

public:
	Data(int dia, int mes, int ano)
	{
		this->dia = dia;
		this->mes = mes;
		this->ano = ano;
	}

	Data()
	{
		this->dia = 0;
		this->mes = 0;
		this->ano = 0;
	}

	void setDia(int dia)
	{
		this->dia = dia;
	}

	void setMes(int mes)
	{
		this->mes = mes;
	}

	void setAno(int ano)
	{
		this->ano = ano;
	}

	int getDia()
	{
		return this->dia;
	}

	int getMes()
	{
		return this->mes;
	}

	int getAno()
	{
		return this->ano;
	}

	string geraData()
	{
		return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
	}

};


class Contato
{
private:
	string email;
	string nome;
	string telefone;
	Data dtnasc;

public:
	Contato(string email, string nome, string telefone, Data dtnasc)
	{
		this->email = email;
		this->nome = nome;
		this->telefone = telefone;
		this->dtnasc = dtnasc;
	}

	Contato()
	{
		this->email = "";
		this->nome = "";
		this->telefone = "";
		this->dtnasc = Data();
	}

	void setEmail(string email)
	{
		this->email = email;
	}

	void setNome(string nome)
	{
		this->nome = nome;
	}

	void setTelefone(string telefone)
	{
		this->telefone = telefone;
	}

	void setDtnasc(Data dtnasc)
	{
		this->dtnasc = dtnasc;
	}

	string getEmail()
	{
		return this->email;
	}

	string getNome()
	{
		return this->nome;
	}

	string getTelefone()
	{

		return this->telefone;
	}

	Data getDtnasc()
	{
		return this->dtnasc;
	}

	int idade()
	{

		int an = this->dtnasc.getAno();
		int mn = this->dtnasc.getMes();
		int dn = this->dtnasc.getDia();

		int idade = 2022 - an;

		int ma = 4;
		int aa = 2022;
		int da = 28;

		if (ma < ma) {
			idade -= 1;
		}
		else if (ma == mn) {
			if (da < dn) {
				idade -= 1;
			}
		}


		return idade;
	}
};



int main(int argc, char** argv)
{

	Contato* contatos = new Contato[10]();
	string nome, telefone, email;
	int dnasc, mnasc, anasc;
	Data* dt = new Data();
	double idadeM = 0;
	int J = 0;
    int maiorIdade = 0;
	
	

	for (int i = 0; i < 2; i++)
	{
		cout << endl;
		cout << "Cadastro " << i + 1 << endl;
		cout << "Seu nome: " << endl;
		cin >> nome;
		cout << "Seu e-mail: " << endl;
		cin >> email;
		cout << "Seu telefone: " << endl;
		cin >> telefone;
		// Solicitar a data de nascimento do usuário
		cout << "Seu nascimento: " << endl;
		cin >> dnasc;
		cout << "Mes do seu nascimento: " << endl;
		cin >> mnasc;
		cout << "Ano do seu nascimento: " << endl;
		cin >> anasc;


		*dt = Data(dnasc, mnasc, anasc);
		contatos[i].setNome(nome);
		contatos[i].setEmail(email);
		contatos[i].setTelefone(telefone);
		contatos[i].setDtnasc(*dt);
		idadeM += contatos[i].idade();
		
	}
	
	idadeM = idadeM/10;

	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << "Dados do cadastro " << i + 1 << endl;
		cout << "Nome: " << contatos[i].getNome() << endl;
		cout << "E-mail: " << contatos[i].getEmail() << endl;
		cout << "Telefone: " << contatos[i].getTelefone() << endl;
		cout << "Idade: " << contatos[i].idade() << endl;
		
		if(contatos[i].idade()> 18)
		{
		    J++;
	  
		}
		
		
		if (i == 0)
		
		{
		    
		maiorIdade = contatos[i].idade();
		
		}
		
		if (contatos[i].idade() > maiorIdade)
		{
		    
		maiorIdade = contatos[i].idade(); 
		
		}
		
		
	}
	
	
	
	cout << endl;
	cout << endl;
	
	cout << "maiores que a idade media" << endl;
	cout << endl;
	cout << endl;
	// verificando manos maior que a media
	for (int i = 0; i < 10; i++)
	{
	    if (contatos[i].idade() > idadeM) 
	    {
	    
	    cout << "Nome: " << contatos[i].getNome() << endl;
	    }
	}
    cout << endl;
    cout << endl;
    
    
    cout << "Media das idades: " << idadeM << endl;
    
	cout << endl;
	cout << endl;
	
	cout << "A quantidade de maiores de idade eh: " << J << endl;
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	
	cout <<" esta eh a maiorIdade: "<< maiorIdade << endl;
	for (int i = 0; i < 10; i++)
	{
	    if(contatos[i].idade() == maiorIdade)
	    
	    {
	        
	    cout << "Dados do cadastro " << i + 1 << endl;
		cout << "Nome: " << contatos[i].getNome() << endl;
		cout << "E-mail: " << contatos[i].getEmail() << endl;
		cout << "Telefone: " << contatos[i].getTelefone() << endl;
		cout << "Idade: " << contatos[i].idade() << endl;
	        
	    }
	}

	return 0;
}