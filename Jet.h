// 'Jets.h'
// Derek Anderson
// 02.09.2023
//
// Definition of an EICrecon jet

#ifndef EICRECON_JET_H
#define EICRECON_JET_H

#include <vector>

namespace eicrecon {

  class Jet {

    private:

      // jet information
      uint32_t          m_nCsts;
      float             m_area;
      float             m_energy;
      edm4hep::Vector3f m_momentum;

      // constituent information
      std::vector<float>             m_cstEnergy;
      std::vector<edm4hep::Vector3f> m_cstMomentum;

    public:

      // jet getters
      uint32_t          nCsts()    {return m_nCsts;}
      float             area()     {return m_area;}
      float             energy()   {return m_energy;}
      emd4eic::Vector3f momentum() {return m_momentum;}

      // getters for individual constituents
      float             cstEnergy(uint32_t iCst)   {return m_cstEnergy.at(iCst);}
      edm4hep::Vector3f cstMomentum(uint32_t iCst) {return m_cstMomentum.at(iCst);}

      // getters for constituent vectors
      std::vector<float> cstEnergy()               {return m_cstEnergy;}
      std::vector<edm4hep::Vector3f> cstMomentum() {return m_cstMomentum();}

  }  // end jet class

}  // end eicrecon namespace

#endif

// end ------------------------------------------------------------------------
