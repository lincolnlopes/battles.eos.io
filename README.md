# battles.eos.io [Elemental Battles Tutorial]

Criando um jogo com Smart Contracts através do uso de Blockchain EOS.

- _Conta_: `player1`
- _Chave Privada_: `5KFyaxQW8L6uXFB6wSgC44EsAbzC7ideyhhQ68tiYfdKQp69xKo`
  As informações da conta estão disponíveis em [eosio_docker/scripts/accounts.json](eosio_docker/scripts/accounts.json). O par de chaves neste arquivo é gerado **SOMENTE PARA TESTE**, portanto, **NÃO use** para quaisquer outros fins.

## Pré-requisitos [Prerequisites]

Verifique se o Docker e o Node.js estão instalados

- Docker: https://docs.docker.com/docker-for-mac/install/
- Node.js: https://nodejs.org/en/

O DApp e o eosio ocuparão as portas 3000, 8888 e 9876. Verifique se não há mais nada em execução nessas portas.

Clone o repositório através do comando abaixo:

```sh
git clone https://github.com/lincolnlopes/battles.eos.io.git
```

O guia a seguir assume que você está usando o macOS.

## Início rápido - Execute o DApp

Nesta seção, fornecemos um único script de comando para executar todos os comandos necessários para iniciar o blockchain e a interface do usuário. Para mais detalhes sobre cada componente, consulte o `Guia detalhado` abaixo.

**Para iniciar**

```sh
./quick_start.sh
```

O comando acima executará o seguinte em sequência:

1. `first_time_setup.sh`
2. `start_eosio_docker.sh`
3. `start_frontend.sh`

- Entre com as seguintes credenciais:

**Para parar**, pressione `ctrl + c` no teclado e execute:

```sh
docker stop eosio_cardgame_container
```

## Guia detalhado

Consulte [battles.eos.io - Guia detalhado](https://github.com/lincolnlopes/battles.eos.io/blob/master/README.md#guia-detalhado) para obter mais informações. Este repositório está usando a estrutura semelhante a essa.
