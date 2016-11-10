#include <G3D/G3DAll.h>

class App : public GApp {
protected:
    shared_ptr<Texture>         m_environmentMap;

public:
    App(const GApp::Settings& settings = GApp::Settings());

    virtual void onInit() override;

};