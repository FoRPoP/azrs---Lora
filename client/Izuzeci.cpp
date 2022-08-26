#include "Izuzeci.hpp"

NeispravnaKartaIzuzetak::NeispravnaKartaIzuzetak(const std::string& poruka)
    : _poruka(poruka)
{
}

const char* NeispravnaKartaIzuzetak::what() const noexcept
{
  return _poruka.c_str();
}


PrazanSpilIzuzetak::PrazanSpilIzuzetak(const std::string& poruka)
    : _poruka(poruka)
{
}

const char* PrazanSpilIzuzetak::what() const noexcept
{
  return _poruka.c_str();
}


NedovoljanBrojKarataIzuzetak::NedovoljanBrojKarataIzuzetak(
    const std::string& poruka)
    : _poruka(poruka)
{
}

const char* NedovoljanBrojKarataIzuzetak::what() const noexcept
{
  return _poruka.c_str();
}


NeispravanBrojIgracaIzuzetak::NeispravanBrojIgracaIzuzetak(
    const std::string& poruka)
    : _poruka(poruka)
{
}

const char* NeispravanBrojIgracaIzuzetak::what() const noexcept
{
  return _poruka.c_str();
}