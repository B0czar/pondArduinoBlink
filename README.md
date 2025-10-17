## Ponderada de programação - Yuri Boczar
### Parte 1: Blink Led Interno  
> Essa `Parte 1` deverá ser realizada **antes da sua instrução de programação**. 

Instale a Arduino IDE em seu computador e assista aos vídeos indicados nos autoestudos conforme o roteiro descrito anteriormente. Você deverá realizar o "blink" com esse LED Interno e postar em seu GitHub as evidências dessa realização. 

Você vai fazer o led ficar aceso por um tempo X, apagar e aguardar Y segundos e depois voltar a acender, propondo um loop que gera uma "luz piscando".

⚠️ **Entrega Parte 1**: em seu GitHub pessoal (usando sua conta com email Inteli), inserir screenshots de sua tela com o IDE e seu código, além de uma fotografia que demonstre seu Arduino ligado no computador e o seu led aceso. Você também poderá enviar um vídeo que evidencie esse funcionamento.

<br>

### Parte 2: Simulando Blink Externo
> Essa `Parte 2` pode ser realizada até sexta-feira.

Na imagem anterior do Arduino UNO, os quadradinhos pretos numerados (A0, A1, A2, ..., ~11, 12, 13) são as portas de entrada e/ou saídas para os nossos componentes. Podemos dizer, por exemplo, que um LED está na "porta 6" e que outro está na "porta 13". Nós vamos escrever programas que recebem ou enviam comandos específicos para esses "endereços", por exemplo, definimos o pino 13 como uma saída `pinMode(13, OUTPUT);` e depois enviamos o comando para "ligar o led" `digitalWrite(13, HIGH);`

Nessa `parte 2` você deverá fazer uma simulação **no TinkerCad** com uma montagem do pisca-pisca com Arduino Uno. Ao clicar no play do TinkerCad, o projeto deve executar sem erros uma rotina que simula um pisca-pisca de qualquer cadência. Utilize no projeto um protoboard, ligações elétricas, LED (precisa ser um OFF_BOARD), resistor e um Arduino. 

Envie o link do seu projeto do Tinkercad na Adalove. Obtenha o código do Tinkercad, publique no seu repositório pessoal do GitHub e também envie este link no card.
