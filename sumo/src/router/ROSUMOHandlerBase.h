#ifndef ROSUMOHandlerBase_h
#define ROSUMOHandlerBase_h

#include <string>
#include "ROTypedXMLRoutesLoader.h"
#include <utils/sumoxml/SUMOXMLDefinitions.h>
#include <utils/gfx/RGBColor.h>


class ROVehicleType;
class RORouteDef;

class ROSUMOHandlerBase :
    public ROTypedXMLRoutesLoader {
public:
    ROSUMOHandlerBase(RONet &net,
        const std::string &dataName, const std::string &file="");

    ~ROSUMOHandlerBase();

    /** @brief Returns the name of the data
        "precomputed sumo route alternatives" is returned here */
    std::string getDataName() const;

protected:
    /// Retrieves a float from the attributes and reports errors, if any occure
    float getFloatReporting(const Attributes &attrs, AttrEnum attr,
        const std::string &id, const std::string &name);

    /// Retrieves the vehicle's color definition
    RGBColor getRGBColorReporting(const Attributes &attrs,
        const std::string &id);

    /// Parses and returns the type of the vehicle
    ROVehicleType* getVehicleType(const Attributes &attrs,
        const std::string &id);

    /// Parses and returns the departure time of the current vehicle
    long getVehicleDepartureTime(const Attributes &attrs,
        const std::string &id);

    /// Parses and returns the route of the vehicle
    RORouteDef *getVehicleRoute(const Attributes &attrs,
        const std::string &id);

    /// Parses and returns the color of the current vehicle
    RGBColor getVehicleColor(const Attributes &attrs,
        const std::string &id);

    /// Parses a vehicle
    void startVehicle(const Attributes &attrs);

    /// Parses a vehicle type
    void startVehType(const Attributes &attrs);

protected:
    std::string myDataName;

};

#endif
