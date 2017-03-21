/*
** Gui.hpp for Arcade
**
** Made by	gastal_r
** Login	gastal_r
**
** Started on	Tue Mar 14 10:55:17 2017 gastal_r
** Last update	Tue Mar 21 22:59:33 2017 gastal_r
*/

#ifndef         _GUI_HPP_
#define         _GUI_HPP_

#include        <vector>
#include        "IGraph.hh"
#include        "ICore.hh"

enum Status
{
  CONTINUE,
  EXIT
};

class           Gui
{
public:
  Gui ();
  virtual       ~Gui ();

  void          affGui();
  void          affName();
  void          affDispLibs();
  void          affDispGames();
  void          affScore();

  const std::string   getName(arcade::ICore &);
  void                listGame(arcade::ICore &, size_t);
  const std::string   chooseGame(arcade::ICore &);
  void                affPlayersScores(arcade::ICore &, std::string);
  void                affPlayersScores();

  const Status  &getStatus();
  void          setStatus(const Status status) {_status = status; }

  void          guiSetGraph(arcade::IGraph *graph)                {_graph = graph;}
  void          guiSetLibs(const std::vector<std::string> libs)   {_libs = libs;}
  void          guiSetCurrentGraph(const std::string &graph)      {_currentGraph = graph;}
  void          guiSetGames(const std::vector<std::string> games) {_games = games;}
  void          guiSetCurrentGame(const std::string &game) {_currentGame = game;}
  void          guiSetPlayer(const std::string &player)    {_player = player;}
  void          guiSetBestScore(std::string score)         {_bestScore = score;}
  void          guiSetScore(const std::string &score)      {_score = score;}

private:
  arcade::IGraph  *_graph;
  Status          _status;
  std::string               _currentGame;
  std::string               _currentGraph;
  std::vector<std::string>  _games;
  std::vector<std::string>  _libs;
  std::string               _player;
  std::string               _bestScore;
  std::string               _score;
  std::vector<std::string>  _bestPlayersScores;
};


#endif /* !_GUI_HPP_ */
