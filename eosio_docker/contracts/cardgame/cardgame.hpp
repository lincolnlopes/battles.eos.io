#include <eosio/eosio.hpp>

using namespace std;
using namespace eosio;
class [[eosio::contract]] cardgame : public eosio::contract
{
private:
  struct [[eosio::table]] user_info
  {
    name username;
    uint16_t win_count = 0;
    uint16_t lost_count = 0;
    auto primary_key() const { return username.value; }
  };

public:
  cardgame(name receiver, name code, datastream<const char *> ds) : contract(receiver, code, ds) {}

  [[eosio::action]] void login(name username);
};