import express from 'express'

class Routes {
    app: express.Application;
    name: string;
    list: Array<string>;

    // Constructor with proper arguments.
    constructor(application: express.Application, appName: string) {
        this.app = application;
        this.name = appName;
        this.list = ["a", "b", "c"];
    }

    // Getter function for the application name.
    getName() {
        return this.name;
    }

    // Configures our basic routes.
    configureRoutes() {
        this.app.route("/getList")
            .get((req: express.Request, res: express.Response) =>{
                res.status(200).send(this.list)
            });
    }
}