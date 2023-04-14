/*
Código para o robô da OBR 2023
robô baseado no arduino mega, com um sensor infravermelho de 8 canais ligado nas portas
de 46 a 53, um ultrassônico ligado na porta 42 e 2 motores dc ligados nas portas 4 e 5

o robô deve seguir linha preta e detectar obstáculos, caso encontre um obstáculo deve parar.
*/

void setup()
{
    Serial.begin(115200);

    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(42, INPUT);
    pinMode(43, INPUT);
    pinMode(46, INPUT);
    pinMode(47, INPUT);
    pinMode(48, INPUT);
    pinMode(49, INPUT);
    pinMode(50, INPUT);
    pinMode(51, INPUT);
    pinMode(52, INPUT);
    pinMode(53, INPUT);
}

void loop()
{ 

    
    // seguidor de linha proporcional de acordo comm qual sensor detecta a linha preta, sendo os sensores 49 e 50 os centrais
    if(digitalRead(49) == 1 && digitalRead(50) == 1)
    {
        analogWrite(4, 255);
        analogWrite(5, 255);
    }
    else if(digitalRead(49) == 1 && digitalRead(50) == 0)
    {
        analogWrite(4, 255);
        analogWrite(5, 200);
    }
    else if(digitalRead(49) == 0 && digitalRead(50) == 1)
    {
        analogWrite(4, 200);
        analogWrite(5, 255);
    }
    else if(digitalRead(49) == 0 && digitalRead(50) == 0)
    {
        analogWrite(4, 255);
        analogWrite(5, 255);
    }   
}