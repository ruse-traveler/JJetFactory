// Created by Dmitry Romanov
// Subject to the terms in the LICENSE file found in the top-level directory
//
// ----------------------------------------------------------------------------
// 'Jets.h'
// Derek Anderson
// 02.09.2023
//
// Definition of an EICrecon jet
// ----------------------------------------------------------------------------

#ifndef EICRECON_JET_H
#define EICRECON_JET_H

#include <vector>

namespace eicrecon {

  // jet definition
  class Jet {

    public:

      // ctor/dtor
      Jet() {};
      ~Jet();

      // setters
      void setNCsts(uint32_t nCsts)                              {m_nCsts       = nCsts;}
      void setArea(float area)                                   {m_area        = area;}
      void setEnergy(float energy)                               {m_energy      = energy;}
      void setMomentum(edm4hep::Vector3f momentum)               {m_momentum    = momentum;}
      void setCstEnergies(std::vector<float> energies)           {m_cstEnergy   = energies;}
      void setCstMomenta(std::vector<edm4hep::Vector3f> momenta) {m_cstMomentum = momenta;}

      // jet getters
      uint32_t          nCsts()    {return m_nCsts;}
      float             area()     {return m_area;}
      float             energy()   {return m_energy;}
      edm4eic::Vector3f momentum() {return m_momentum;}

      // constituent getters
      float                          cstEnergy(uint32_t iCst)   {return m_cstEnergy.at(iCst);}
      edm4hep::Vector3f              cstMomentum(uint32_t iCst) {return m_cstMomentum.at(iCst);}
      std::vector<float>             cstEnergy()                {return m_cstEnergy;}
      std::vector<edm4hep::Vector3f> cstMomentum()              {return m_cstMomentum;}

    private:

      // jet information
      uint32_t          m_nCsts;
      float             m_area;
      float             m_energy;
      edm4hep::Vector3f m_momentum;

      // constituent information
      std::vector<float>             m_cstEnergy;
      std::vector<edm4hep::Vector3f> m_cstMomentum;

  };  // end jet class

}  // end eicrecon namespace

#endif

// end ------------------------------------------------------------------------
