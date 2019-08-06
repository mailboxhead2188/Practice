package javaItemRestAPI;

import java.util.List;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

import com.google.gson.Gson;

@Path("/List")
public class ListService {

    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public String getAllJson() {
      try {
        List<Item> allItems = Database.RunQueryAndReturn("SELECT Name, Description, Id FROM dbo.Items");
        return new Gson().toJson(allItems);
      }
      catch(Exception e)
      {
        return "\"Error\" : \"" + e.getMessage() + "\"";
      }
    }

    @Path("{Id}")
    @GET
    @Produces(MediaType.APPLICATION_JSON)
    public String getSpecificJson(@PathParam("Id") String Id) {
      try {
        List<Item> allItems = Database.RunQueryAndReturn("SELECT Name, Description, Id FROM dbo.Items WHERE Id=" + Id);
        return new Gson().toJson(allItems);
      }
      catch(Exception e)
      {
        return "\"Error\" : \"" + e.getMessage() + "\"";
      }
    }
}