#ifndef DEFINE_H
#define DEFINE_H

#pragma once

#include <QtGlobal>

// const int adjust_pos[14] = {0, 6, 6, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0, 0};

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
#define EOL Qt::endl
#else
#define EOL endl
#endif

#define NOBODY -1
#define PLAYER_SOUTH 0
#define PLAYER_WEST 1
#define PLAYER_NORTH 2
#define PLAYER_EAST 3

#define CONFIG_FILENAME "/.lora"
#define USERNAMES_FILENAME "/usernames.txt"


const int LANG_ENGLISH = 0;
const int LANG_SERBIAN = 1;

const int FNOERR = 0;
const int ERROPENRO = 1;
const int ERROPENWO = 2;
const int FCORRUPTED = 3;

const int MAX_PLR_NAMES = 20;

enum class GAME
{
  HEART = 0,
  QUEEN,
  LEAST,
  MOST,
  JACK_CLUB_LAST_HAND,
  KING_HEART_LAST_HAND,
  LORA,
  GAME_BY_CHOICE
};

#define HEART_BUTTON QMessageBox::AcceptRole
#define QUEEN_BUTTON QMessageBox::RejectRole
#define LEAST_BUTTON QMessageBox::DestructiveRole
#define MOST_BUTTON QMessageBox::ActionRole
#define JACK_CLUB_LAST_HAND_BUTTON QMessageBox::HelpRole
#define KING_HEART_LAST_HAND_BUTTON QMessageBox::YesRole
#define LORA_BUTTON QMessageBox::NoRole


#endif  // DEFINE_H
