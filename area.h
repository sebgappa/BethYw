#ifndef AREA_H_
#define AREA_H_

/*
  +---------------------------------------+
  | BETH YW? WELSH GOVERNMENT DATA PARSER |
  +---------------------------------------+

  AUTHOR: 954604

  This file contains the Area class declaration. Area objects contain all the
  Measure objects for a given local area, along with names for that area and a
  unique authority code.

  TODO: Read the block comments with TODO in area.cpp to know which 
  functions and member variables you need to declare in this class.
 */

#include <string>
#include <map>

#include "measure.h"

/*
  An Area object consists of a unique authority code, a container for names
  for the area in any number of different languages, and a container for the
  Measures objects.

  TODO: Based on your implementation, there may be additional constructors
  or functions you implement here, and perhaps additional operators you may wish
  to overload.
*/
class Area {
private:
    std::string authorityCode;
    std::map<std::string, std::string> areaNames;
    std::map<std::string, Measure*> measures;

public:
    Area();

    Area(const std::string& localAuthorityCode);

    std::string getLocalAuthorityCode();

    std::string getName(std::string const& lang);

    std::map<std::string, std::string>& getAllNames();

    void setName(std::string langCode, const std::string &langValue);

    Measure& getMeasure(const std::string &key);

    std::map<std::string, Measure*>& getAllMeasures();

    void setMeasure(std::string codename, Measure &measure);

    unsigned int size() noexcept;

    friend bool operator==(const Area& lhs, const Area& rhs);
};

#endif // AREA_H_