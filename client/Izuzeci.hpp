#include <exception>
#include <string>
#include <cstring>

class NeispravnaKartaIzuzetak : public std::exception
{
public:
    NeispravnaKartaIzuzetak(const std::string& poruka);
    const char* what() const noexcept override;

private:
    std::string _poruka;
};

class PrazanSpilIzuzetak : public std::exception
{
public:
    PrazanSpilIzuzetak(const std::string& poruka);
    const char* what() const noexcept override;

private:
    std::string _poruka;
};

class NedovoljanBrojKarataIzuzetak : public std::exception
{
public:
    NedovoljanBrojKarataIzuzetak(const std::string& poruka);
    const char* what() const noexcept override;

private:
    std::string _poruka;
};

class NeispravanBrojIgracaIzuzetak : public std::exception
{
public:
    NeispravanBrojIgracaIzuzetak(const std::string& poruka);
    const char* what() const noexcept override;

private:
    std::string _poruka;
};